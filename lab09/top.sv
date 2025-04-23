`default_nettype none
// Empty top module

typedef enum logic [3:0] {
  LS0=0, LS1=1, LS2=2, LS3=3, LS4=4, LS5=5, LS6=6, LS7=7,
  INIT=8, OPEN=9, ALARM=10
} state_t;

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

  // Prelab ------------------------------------------------------------------------------------------
  // step 1
  logic hzX;
  // assign left[0] = hzX;
  clock_psc csc (.clk(hz100), .rst(reset), .lim(8'd49), .hzX(hzX));

  // step 2
  logic [4:0] keyout;
  logic keyclk;
  keysync sk1 (.clk(hz100), .rst(reset), .keyin(pb[19:0]), .keyout(keyout), .keyclk(keyclk));
  // assign right[0] = strobe; // only for testing within prelab, comment out when starting the lab
  // assign right[5:1] = keyout; // only for testing within prelab, comment out when starting the lab

  // Lab
  // step 1
  logic [7:0] seq;
  assign right = seq;

  logic seq_enable;
  // logic ls_state;
  // assign ls_state = (state == LS7) | (state == LS6) | (state == LS5) | (state == LS4) | (state == LS3) | (state == LS2) | (state == LS1) | (state == LS0);
  assign seq_enable = (~|keyout[4:1]) && (state == INIT);
  // assign seq_enable = (state == INIT);
  // assign left[7:4] = state;

  sequence_sr s1(.clk(keyclk), .rst(reset), .en(seq_enable), .button(keyout[0]), .seq(seq));

  // step 2
  state_t state;
  fsm s2(.clk(keyclk), .rst(reset), .keyout(keyout), .seq(seq), .state(state));

  // step 3
  logic [63:0] ss;
  assign {ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0} = ss;
  display s3(.hzX(hzX), .state(state), .ss(ss), .red(red), .green(green), .blue(blue));

endmodule

module clock_psc (
    input  logic clk, rst,
    input  logic [7:0] lim,
    output logic hzX
  );
  
  logic [7:0] count;
  logic next_hzX;

  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin 
      count <= 8'd0;
      next_hzX <= 1'b0;
    end else if (count == lim) begin
      count <= 8'd0;
      next_hzX <= ~next_hzX;
    end else begin 
      count <= count + 1;
    end
  end

  assign hzX = (lim == 8'd0) ? clk : next_hzX;
endmodule

module keysync (
    input clk, rst, // clock and reset ports
    input logic [19:0] keyin,
    output logic [4:0] keyout,
    output logic keyclk
  );
  logic Q1;
  always_ff @(posedge clk or posedge rst) begin
    if (rst) 
      Q1 <= 1'b0;
    else
      Q1 <= |keyin; 
  end

  always_ff @(posedge clk or posedge rst) begin
    if (rst)
      keyclk <= 1'b0;
    else
      keyclk <= Q1;
  end

  // 32-to-5 encoder style assignments for keyout
  // keyout[0] = 1 for odd-numbered inputs
  assign keyout[0] = keyin[1] | keyin[3] | keyin[5] | keyin[7] | keyin[9] | keyin[11] | keyin[13] | keyin[15] | keyin[17] | keyin[19];
  
  // keyout[1] = 1 for inputs 2-3, 6-7, 10-11, 14-15, 18-19
  assign keyout[1] = |keyin[3:2] | |keyin[7:6] | |keyin[11:10] | |keyin[15:14] | |keyin[19:18];
  
  // keyout[2] = 1 for inputs 4-7, 12-15
  assign keyout[2] = |keyin[7:4] | |keyin[15:12];

  // keyout[3] = 1 for inputs 8-15
  assign keyout[3] = |keyin[15:8];

  // keyout[4] = 1 for inputs 16-19
  assign keyout[4] = |keyin[19:16];
endmodule

module sequence_sr(
    input logic clk, rst, en, button,
    output logic [7:0] seq
  );

  logic [7:0] next_seq;
  always_ff @(posedge clk or posedge rst) begin 
    if (rst) 
      seq <= 8'd0;
    else
      seq <= next_seq;
  end

  assign next_seq = en ? {seq[6:0], button} : seq[7:0];  
endmodule

module fsm(
    input logic clk, rst,
    input logic [4:0] keyout, // output of keysync
    input logic [7:0] seq,
    output logic [3:0] state
  );

  state_t lockstate, n_lockstate;
  logic M, R, button, idx, next_idx;

  assign R = (keyout == 5'd16) ? 1 : 0;
  assign M = (keyout[0] == seq[~lockstate[2:0]]) ? 1 : 0;

  
  // sequential logic 
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      lockstate <= INIT;
    end else begin
      lockstate <= n_lockstate;
    end
  end

  // combinational logic
  always_comb begin
    casez({lockstate, M, R})
      // begin at INIT
      {INIT, 1'b?, 1'b1}: n_lockstate = LS0;

      // LS transitions
      {LS0, 1'b1, 1'b0}: n_lockstate = LS1;
      {LS1, 1'b1, 1'b0}: n_lockstate = LS2;
      {LS2, 1'b1, 1'b0}: n_lockstate = LS3;
      {LS3, 1'b1, 1'b0}: n_lockstate = LS4;
      {LS4, 1'b1, 1'b0}: n_lockstate = LS5;
      {LS5, 1'b1, 1'b0}: n_lockstate = LS6;
      {LS6, 1'b1, 1'b0}: n_lockstate = LS7;
      {LS7, 1'b1, 1'b0}: n_lockstate = OPEN;

      // alarm transition
      {LS0, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS1, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS2, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS3, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS4, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS5, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS6, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS7, 1'b0, 1'b0}: n_lockstate = ALARM;

      // relock
      {LS1, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS2, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS3, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS4, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS5, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS6, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS7, 1'b?, 1'b1}: n_lockstate = LS0;
      {OPEN, 1'b?, 1'b1}: n_lockstate = LS0;
      default: n_lockstate = lockstate;
    endcase
  end

  assign state = lockstate;
endmodule

module ssdec(
    input logic [3:0] in,
    input logic enable, //sss
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
    4'b1010: begin out = 7'b1110111; end  // A
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

module display (
  input logic hzX,
  input logic [3:0] state,
  output logic [63:0] ss,
  output logic red, green, blue
);
  // open state
  // assign temp variable instead of ss for now
  logic [63:0] ss_temp;
  
  always_comb begin
    green = 0;
    blue = 0;
    red = 0;
    ss[63:0] = 64'd0;

    case(state)
      OPEN: begin
        green = 1;
        blue = 0;
        ss = 64'b00111111_01110011_01111001_01010100;
      end
      ALARM: begin
        green = 0;
        blue = 0;
        ss = 64'b00111001_01110111_00111000_00111000_00000000_01100111_00000110_00000110;

        if (hzX) begin red = 1'b1; end else begin red = 1'b0; end
      end
      INIT: begin
          blue = 0;
          green = 0;
          red = 0;
          ss = 64'd0;
      end
      LS0: begin
        green = 0;
        red = 0;
        blue = 1;
        ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[63] = 1'b1;
      end
      LS1: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[55] = 1'b1; end
      LS2: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[47] = 1'b1; end
      LS3: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[39] = 1'b1; end
      LS4: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[31] = 1'b1; end
      LS5: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[23] = 1'b1; end
      LS6: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[15] = 1'b1; end
      LS7: begin green = 0; blue = 1; ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001; ss[7] = 1'b1; end
      default:  begin green = 0; blue = 0; end
    endcase

    // ss[55] = 1'b1; ss[47] = 1'b1; ss[39] = 1'b1; ss[31] = 1'b1; ss[23] = 1'b1; ss[15] = 1'b1;
  end
endmodule
