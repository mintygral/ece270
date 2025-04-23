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

  // step 1
  tff t1(.clk(pb[3]), .rst(pb[19]), .T(pb[1]), .Q(ss7[7]));
  tff t2(.clk(pb[3]), .rst(pb[19]), .T(pb[0]), .Q(ss4[7]));
  
  // step 2
  logic [7:0] count;
  logic rc_clk;
  assign rc_clk = count[7];
  logic en;
  assign en = pb[2] | pb[1] | pb[0];
  ring r1 (.clk(hz100), .rst(pb[19]), .en(en), .Q(count));
  assign right[7:0] = count;

  // step 3
  logic [3:0] out1, out2;
  decimal d1(.clk(rc_clk), .rst(pb[19]), .en(ss7[7]), .Q(out1));
  decimal d2(.clk(rc_clk), .rst(pb[19]), .en(ss4[7]), .Q(out2));

  // step 4
  logic [3:0] sum;
  logic cout;
  bcdadd1 b1(.a(out1), .b(out2), .cin(1'b0), .s(sum), .cout(cout));

  // ssdec for reference
  // module ssdec(
  // input logic [3:0] in,
  // input logic enable,
  // output logic [6:0]out
  // );

  // step 5
  // integration
  ssdec s1(.in(out1), .enable(1'b1), .out(ss7[6:0]));
  ssdec s2(.in(out2), .enable(1'b1), .out(ss4[6:0]));
  ssdec s4(.in({cout, 3'b0}), .enable(1'b1), .out(ss1[6:0]));
  ssdec s3(.in(sum), .enable(1'b1), .out(ss0[6:0]));
endmodule

// step 1
// toggle and display two state elements
// passed all cases
module tff (
    input logic clk, rst, T,
    output logic Q
  );

  logic Q_n;
  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin 
      Q_n <= 1'b0;
    end 
    else if (T) begin 
      Q_n <= ~Q;
    end
    else begin 
      Q_n <= Q;
    end
  end

  assign Q = Q_n;
endmodule

// step 2
// 8-bit ring counter
// passes all test cases
module ring (
    input logic clk, rst, en,
    output logic [7:0] Q
  );

  logic [7:0] Q_n;
  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin 
      Q_n <= 8'b00000001;
    end
    // else if (Q[7]) begin 
    //   Q_n <= 8'b0;
    // end
    else if (en) begin 
      Q_n <= {Q[6:0], Q[7]};
    end
  end

  assign Q = Q_n;
endmodule

// step 3
// modulo-10 counter
// passed all test cases
module decimal(
    input logic clk, rst, en,
    output logic [3:0] Q
  );

  logic [3:0] Q_n;
  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin 
      Q_n <= 4'b0;
    end
    else if (Q == 4'd9) begin
      Q_n <= 4'b0;
    end
    else if (en) begin 
      Q_n <= Q + 1;
    end
  end

  assign Q = Q_n;
endmodule

// step 4
// 4-bit BCD adder
// passes all test cases
module bcdadd1 (
    input logic [3:0] a, b,
    input logic cin,
    output logic [3:0] s,
    output logic cout
);
  logic [4:0] temp_b;
  logic [4:0] temp_sum;

  assign temp_b = a + b + {4'b0, cin};

  // BCD correction condition: sum > 9 or temp_b[4] is set
  assign temp_sum = (temp_b > 9) ? (temp_b + 6) : temp_b;

  assign s = temp_sum[3:0];
  assign cout = temp_sum[4];
endmodule


// ssdec
// from prev labs
module ssdec(
  input logic [3:0] in,
  input logic enable,
  output logic [6:0]out
  );

  always_comb begin
    out = 7'b0000000;
    if (enable == 1) begin
    case({in})
    4'b0000: begin out = 7'b0111111; end // none 
    4'b0001: begin out = 7'b0000110; end // one
    4'b0010: begin out = 7'b1011011; end // two
    4'b0011: begin out = 7'b1001111; end  // three
    4'b0100: begin out = 7'b1100110; end  // four
    4'b0101: begin out = 7'b1101101; end  // five
    4'b0110: begin out = 7'b1111101; end  // six
    4'b0111: begin out = 7'b0000111; end  // seven
    4'b1000: begin out = 7'b1111111; end  // eight
    4'b1001: begin out = 7'b1100111; end  // nine -- checked!!!
    4'b1010: begin out = 7'b1110111; end  // a
    4'b1011: begin out = 7'b1111100; end  // b
    4'b1100: begin out = 7'b0111001; end  // C 
    4'b1101: begin out = 7'b1011110; end  // d
    4'b1110: begin out = 7'b1111001; end  // E
    4'b1111: begin out = 7'b1110001; end  // F -- checked!!!
    default: begin out = 7'b0000000; end
    endcase
    end
  end
endmodule