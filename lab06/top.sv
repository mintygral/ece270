`default_nettype none
// Empty top module

module top (
  // in/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // Ports from/to UART
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);
  // step 1
  // mux4to1 u1(.sel(pb[1:0]), .d(pb[7:4]), .y(green));

  // step 2
  // enc16to4 u2(.in(pb[15:0]), .out(right[3:0]), .strobe(green));

  // step 3
  logic [3:0] enc_out;
  prienc16to4 u3(.in(pb[15:0]), .out(right[3:0]), .strobe(green));

  // ssdec 
  ssdec sd(.in(enc_out), .enable(1'b1), .out(ss0[6:0]));
  
endmodule

module ssdec(
  input logic [3:0] in,
  input logic enable,
  output logic [6:0] out
);

  // Direct assignment with conditional logic
  assign out = (enable) ? 
    (in == 4'b0000) ? 7'b0111111 :  // none
    (in == 4'b0001) ? 7'b0000110 :  // one
    (in == 4'b0010) ? 7'b1011011 :  // two
    (in == 4'b0011) ? 7'b1001111 :  // three
    (in == 4'b0100) ? 7'b1100110 :  // four
    (in == 4'b0101) ? 7'b1101101 :  // five
    (in == 4'b0110) ? 7'b1111101 :  // six
    (in == 4'b0111) ? 7'b0000111 :  // seven
    (in == 4'b1000) ? 7'b1111111 :  // eight
    (in == 4'b1001) ? 7'b1100111 :  // nine
    (in == 4'b1010) ? 7'b1110111 :  // A
    (in == 4'b1011) ? 7'b1111100 :  // b
    (in == 4'b1100) ? 7'b0111001 :  // C
    (in == 4'b1101) ? 7'b1011110 :  // d
    (in == 4'b1110) ? 7'b1111001 :  // 
    (in == 4'b1111) ? 7'b1110001 :  // F
    7'b0000000 : 
    7'b0000000;  
endmodule

module mux4to1 (
  input logic [1:0] sel,
  input logic [3:0] d,
  output logic y
);  
  
  assign y = (sel == 2'd0) ? d[0] :
             (sel == 2'd1) ? d[1] :
             (sel == 2'd2) ? d[2] :
             (sel == 2'd3) ? d[3] :
             1'b0;
endmodule

module enc16to4 (
  input logic [15:0] in,
  output logic [3:0] out,
  output logic strobe
);

  assign strobe = |in;
  assign out[3] = |in[15:8];
  assign out[2] = |in[15:12] | |in[7:4];
  assign out[1] = |in[15:14] | |in[11:10] | |in[7:6] | |in[3:2];
  assign out[0] = |(in & 16'b0101010101010101);

endmodule

module prienc16to4(
  input logic [15:0] in,
  output logic [3:0] out,
  output logic strobe
);

  assign {out, strobe} = 
      in[15] == 1 ? 5'd31 :
      in[14] == 1 ? 5'd29 :
      in[13] == 1 ? 5'd27 :
      in[12] == 1 ? 5'd25 :
      in[11] == 1 ? 5'd23 :
      in[10] == 1 ? 5'd21 :
      in[9]  == 1 ? 5'd19 :
      in[8]  == 1 ? 5'd17 :
      in[7]  == 1 ? 5'd15 :
      in[6]  == 1 ? 5'd13 :
      in[5]  == 1 ? 5'd11 :
      in[4]  == 1 ? 5'd9 :
      in[3]  == 1 ? 5'd7 :
      in[2]  == 1 ? 5'd5 :
      in[1]  == 1 ? 5'd3 :
      in[0]  == 1 ? 5'd1 :
                  5'd0;

endmodule

module keysync (
  input  logic       clk,
  input  logic       rst,
  input  logic [19:0] keyin,
  output logic [4:0] keyout,
  output logic       keyclk
);

  logic Q1, Q2;
  logic strobe_int;

  always_ff @(posedge clk or posedge rst) begin
    if (rst) 
      Q1 <= 1'b0;
    else
      Q1 <= |keyin;
  end

  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      Q2 <= 1'b0;
    else
      Q2 <= Q1;
  end

  assign keyclk = Q2;

  always_ff @(keyin) begin
    keyout = 5'b00000;
    
    casez (keyin)
      20'b1zzzzzzzzzzzzzzzzzzz: keyout = 5'b10011;
      20'b01zzzzzzzzzzzzzzzzzz: keyout = 5'b10010;
      20'b001zzzzzzzzzzzzzzzzz: keyout = 5'b10001;
      20'b0001zzzzzzzzzzzzzzzz: keyout = 5'b10000;
      20'b00001zzzzzzzzzzzzzzz: keyout = 5'b01111;
      20'b000001zzzzzzzzzzzzzz: keyout = 5'b01110;
      20'b0000001zzzzzzzzzzzzz: keyout = 5'b01101;
      20'b00000001zzzzzzzzzzzz: keyout = 5'b01100;
      20'b000000001zzzzzzzzzzz: keyout = 5'b01011;
      20'b0000000001zzzzzzzzzz: keyout = 5'b01010;
      20'b00000000001zzzzzzzzz: keyout = 5'b01001;
      20'b000000000001zzzzzzzz: keyout = 5'b01000;
      20'b0000000000001zzzzzzz: keyout = 5'b00111;
      20'b00000000000001zzzzzz: keyout = 5'b00110;
      20'b000000000000001zzzzz: keyout = 5'b00101;
      20'b0000000000000001zzzz: keyout = 5'b00100;
      20'b00000000000000001zzz: keyout = 5'b00011;
      20'b000000000000000001zz: keyout = 5'b00010;
      20'b0000000000000000001z: keyout = 5'b00001;
      20'b00000000000000000001: keyout = 5'b00000;
      20'b00000000000000000000: keyout = 5'b00000;
      default: keyout = 5'b00000;
    endcase
  end

  always_ff @(keyout) begin
    if (keyout != 5'b00000) begin
      strobe_int = 1;
    end else begin
      strobe_int = 0;
    end
  end


endmodule
