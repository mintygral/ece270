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
  
  // Check 1: Light up LED segments
  assign ss0[6:0] = pb[6:0];
  
  // Check 2: Bar graph display
  bargraph bar1(.in(pb[15:0]), .out({left[7:0], right[7:0]}));
  
  // Check 3: 3 to 8 decoder
  decode3to8 check3(.in(pb[2:0]), .out({ss7[7], ss6[7], ss5[7], ss4[7], ss3[7], ss2[7], ss1[7], ss0[7]}));
  
endmodule


// Check 2
module bargraph (
  input logic [15:0] in,
  output logic [15:0] out
);
  
  // Reduction operators
  // thus if you press F they will all light up
  assign out[0] = |in;  
  assign out[1] = |in[15:1]; 
  assign out[2] = |in[15:2]; 
  assign out[3] = |in[15:3]; 
  assign out[4] = |in[15:4];
  assign out[5] = |in[15:5];
  assign out[6] = |in[15:6];
  assign out[7] = |in[15:7];
  assign out[8] = |in[15:8];
  assign out[9] = |in[15:9];
  assign out[10] = |in[15:10];
  assign out[11] = |in[15:11];
  assign out[12] = |in[15:12];
  assign out[13] = |in[15:13];
  assign out[14] = |in[15:14];
  assign out[15] = in[15];


endmodule

module decode3to8 (
  input logic [2:0] in,
  output logic [7:0] out
);
 
// binary input is given by pb[2:0]
// decimal output is displayed on the fpga by lighting up the decimal places
always_comb begin
  out = 8'b0;
  case({in})
  3'b0: begin out[0] = 1'b1; end
  3'd1: begin out[1] = 1'b1; end
  3'd2: begin out[2] = 1'b1; end
  3'd3: begin out[3] = 1'b1; end
  3'd4: begin out[4] = 1'b1; end
  3'd5: begin out[5] = 1'b1; end
  3'd6: begin out[6] = 1'b1;; end
  3'd7: begin out[7] = 1'b1;; end
  default: begin out = 8'b0; end
  endcase
  
end

endmodule