`default_nettype none

// Empty top module
module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  // 74hc138 decoer
  // wire RSTU to enable pins
  logic [7:0] y0, y1;
  logic R, S, T, U;
  assign R = pb[3];
  assign S = pb[2];
  assign T = pb[1];
  assign U = pb[0];
  hc138 hc138_1 (
    .e1(1'b0), .e2(R), .e3(1'b1),
    .a({S,T,U}), .y(y0));

  hc138 hc138_2 (
    .e1(1'b0), .e2(1'b0), .e3(R),
    .a({S, T, U}), .y(y1));

  // 16-bit output bus
  logic [15:0] p;
  
  // connect  appropriate halves to the outputs of hc138 instances
  assign p[7:0] = y0;   
  assign p[15:8] = y1;  
  
  // dataflow expressions, assign right LEDs to each function
  assign right[0] = ~(p[0] & p[9] & p[14]); 
  assign right[1] = ~(p[5] & p[12] & p[15]);
  assign right[2] = ~(p[8] & p[10] & p[11]);
  assign right[3] = ~(p[1] & p[6] & p[7]);
  assign right[4] = ~(p[2] & p[4] & p[13]);
  assign right[5] = p[2] & p[13];
  assign right[6] = p[4] & p[7];
  assign right[7] = p[1] & p[6];
  
  // debugging
  // assign left[3:0] = {R, S, T, U};

endmodule

// A SystemVerilog implementation of the 74HC138
// 3-to-8 decoder with active-low outputs.
module hc138(input logic e1,e2,e3,
             input logic [2:0] a,
             output [7:0]y);

  logic enable;
  logic [7:0] ypos;  // uninverted y
  assign enable = ~e1 & ~e2 & e3;
  assign ypos = { enable &  a[2] &  a[1] &  a[0],
                  enable &  a[2] &  a[1] & ~a[0],
                  enable &  a[2] & ~a[1] &  a[0],
                  enable &  a[2] & ~a[1] & ~a[0],
                  enable & ~a[2] &  a[1] &  a[0],
                  enable & ~a[2] &  a[1] & ~a[0],
                  enable & ~a[2] & ~a[1] &  a[0],
                  enable & ~a[2] & ~a[1] & ~a[0] };
  assign y = ~ypos;
endmodule
