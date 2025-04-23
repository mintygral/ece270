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

  lunarlander ll (
    .hz100(hz100), .reset(reset), .in(pb[19:0]), 
    .red(red), .green(green),                       
    .ss0(ss0), .ss1(ss1), .ss2(ss2), .ss3(ss3),     
    .ss5(ss5), .ss6(ss6), .ss7(ss7)                
);
  
endmodule

// lab 11
module ll_display(
  input logic clk, rst, land, crash,
  input logic [3:0] disp_ctrl,
  input logic [15:0] alt, vel, fuel, thrust,
  output logic [7:0] ss7, ss6, ss5,
  output logic [7:0] ss3, ss2, ss1, ss0,
  output logic red, green
  );
  // Message codes for ss7-ss5
  logic [23:0] ALT_MSG = 24'b01110111_00111000_01111000;  // ALT
  logic [23:0] VEL_MSG = 24'b00111110_01111001_00111000;  // VEL
  logic [23:0] GAS_MSG = 24'b01101111_01110111_01101101;  // GAS (for fuel)
  logic [23:0] THR_MSG = 24'b01111000_01110110_01010000;  // THR (for thrust)

  logic [1:0] disp_mode;
  logic [15:0] val_to_display;
  logic [15:0] vel_n;
  logic [7:0] dummy;
  
  // Connect land and crash signals directly to LEDs
  assign red = crash;
  assign green = land;
  
  // BCD subtractor for negative velocity
  bcdaddsub4 bas4_1(.a(16'h0000), .b(vel), .op(1), .s(vel_n));
  
  // Segment decoders
  ssdec dec0(.in(val_to_display[3:0]), .out(ss0[6:0]), .enable(1'b1));
  ssdec dec1(.in(val_to_display[7:4]), .out(ss1[6:0]), .enable(|val_to_display[15:4]));
  ssdec dec2(.in(val_to_display[11:8]), .out(ss2[6:0]), .enable(|val_to_display[15:8]));
  ssdec dec3(.in(val_to_display[15:12]), .out(dummy[6:0]), .enable(|val_to_display[15:12]));
  
  // Handle minus sign for negative velocity
  assign ss3[6:0] = (vel[15] && (disp_mode == 2'd2)) ? 7'b1000000 : dummy[6:0];
  
  // Display mode selection register
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      disp_mode <= 2'd3;  // Default to ALT mode on reset
    end
    else if(disp_ctrl[3])
      disp_mode <= 2'd3;  // ALT
    else if(disp_ctrl[2])
      disp_mode <= 2'd2;  // VEL
    else if(disp_ctrl[1])
      disp_mode <= 2'd1;  // GAS/FUEL
    else if(disp_ctrl[0])
      disp_mode <= 2'd0;  // THR/THRUST
  end
  
  // Value display selection based on mode
  always_comb begin
    // Select value based on display mode
    case(disp_mode)
      2'd0: begin // THR mode
        {ss7, ss6, ss5} = THR_MSG;
        val_to_display = thrust;
      end
      2'd1: begin // GAS mode
        {ss7, ss6, ss5} = GAS_MSG;
        val_to_display = fuel;
      end
      2'd2: begin // VEL mode
        {ss7, ss6, ss5} = VEL_MSG;
        if(vel[15] == 1'b1) begin
          val_to_display = vel_n;
        end else begin
          val_to_display = vel;
        end
      end
      2'd3: begin // ALT mode
        {ss7, ss6, ss5} = ALT_MSG;
        val_to_display = alt;
      end
    endcase
  end
  
  assign ss0[7] = 1'b0;
  assign ss1[7] = 1'b0;
  assign ss2[7] = 1'b0;
  assign ss3[7] = 1'b0;
endmodule
// from lab 10
module fa(
    input logic a, b, ci,
    output logic co, s
  );

  // Code here
  assign co = (ci && b) | (a && b) | (a && ci); // co
  assign s = ( ~(a | b) && ci) | (~(a | ci) && b) | (~(b | ci) && a) | ((a && b) && ci);
endmodule

module fa4 (
    input logic [3:0] a, b,
    input logic ci,
    output logic [3:0] s,
    output logic co
  );

  logic Cout0, Cout1, Cout2;

  fa bit40(.a(a[0]),.b(b[0]),.ci(ci),.co(Cout0),.s(s[0]));
  fa bit41(.a(a[1]),.b(b[1]),.ci(Cout0),.co(Cout1),.s(s[1]));
  fa bit42(.a(a[2]),.b(b[2]),.ci(Cout1),.co(Cout2),.s(s[2]));
  fa bit43(.a(a[3]),.b(b[3]),.ci(Cout2),.co(co),.s(s[3]));
endmodule 

module bcdadd1 (
    input logic [3:0] a, b,
    input logic ci,
    output logic co, 
    output logic [3:0] s // Changed s to 4 bits
  );
  logic carry;
  logic [3:0] tempsum, tempB;
  
  fa4 adder(.a(a), .b(b), .s(tempsum), .ci(ci), .co(carry));
  
  always_comb begin
    tempB = 4'b0;
    if ((carry == 1) | (tempsum > 9)) begin
      tempB = 4'b0110;
    end
  end

  logic temp_co;
  fa4 result(.a(tempsum), .b(tempB), .s(s), .ci(1'b0), .co(temp_co));

  assign co = (tempsum > 9) | (carry == 1); 
endmodule

module bcdadd4 (
    input logic [15:0] a, b, 
    input logic ci,          
    output logic co,          
    output logic [15:0] s     
  );

  logic co1, co2, co3;
  logic [3:0] s0, s1, s2, s3; 
  bcdadd1 add0 (
    .a(a[3:0]), .b(b[3:0]), .ci(ci),
    .co(co1), .s(s0)
  );
  bcdadd1 add1 (
    .a(a[7:4]), .b(b[7:4]), .ci(co1),
    .co(co2), .s(s1)
  );
  bcdadd1 add2 (
    .a(a[11:8]), .b(b[11:8]), .ci(co2),
    .co(co3), .s(s2)
  );
  bcdadd1 add3 (
    .a(a[15:12]), .b(b[15:12]), .ci(co3),
    .co(co), .s(s3)
  );

  assign s = {s3, s2, s1, s0};
endmodule

module bcd9comp1 (
    input logic [3:0] in,
    output logic [3:0] out
  );
  // assign out = 4'd9 - in; lol no
  always_comb begin
    case (in)
      4'd0: out = 4'd9;
      4'd1: out = 4'd8;
      4'd2: out = 4'd7;
      4'd3: out = 4'd6;
      4'd4: out = 4'd5;
      4'd5: out = 4'd4;
      4'd6: out = 4'd3;
      4'd7: out = 4'd2;
      4'd8: out = 4'd1;
      4'd9: out = 4'd0;
      default: out = 4'd0;
    endcase
  end
endmodule

module bcdaddsub4 (
    input [15:0] a, b,
    input op,
    output [15:0] s
  );

  logic [3:0] bcd9_0, bcd9_1, bcd9_2, bcd9_3;
  logic co1, co2, co3;
  logic co_add, co_sub;
  logic [15:0] s_add, s_sub;

  bcd9comp1 bcd9_0_inst(.in(b[3:0]), .out(bcd9_0));
  bcd9comp1 bcd9_1_inst(.in(b[7:4]), .out(bcd9_1));
  bcd9comp1 bcd9_2_inst(.in(b[11:8]), .out(bcd9_2));
  bcd9comp1 bcd9_3_inst(.in(b[15:12]), .out(bcd9_3));

  bcdadd4 u_adder1 (
        .a(a),
        .b(b),
        .ci(1'b0),
        .co(co_add),
        .s(s_add)
    );

  bcdadd4 u_subtract2 (
        .a(a),
        .b({bcd9_3, bcd9_2, bcd9_1, bcd9_0}),
        .ci(1'b1),
        .co(co_sub),
        .s(s_sub)
    );

  assign s = (op == 0) ? s_add : s_sub;
endmodule

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

// comment out for the simulator
module lunarlander #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,  
  parameter VELOCITY=16'h0,   
  parameter THRUST=16'h5,      
  parameter GRAVITY=16'h5       
  )(
  input logic hz100, reset,     
  input logic [19:0] in,        
  output logic [7:0] ss7, ss6, ss5, 
  output logic [7:0] ss3, ss2, ss1, ss0, 
  output logic red, green      
  );
  logic clk, key_clk, land, crash, write_en;
  logic [4:0] key_out;
  logic [15:0] alt_n, vel_n, fuel_n, thrust_n;  // for alu and memory
  logic [15:0] alt, vel, fuel, thrust;          // for control
  logic [3:0] disp_ctrl;

  // thrust control register
  // updates thrust only when number keys pressed (keyout[4] is low)
  // prevents W/X/Y/Z keys from changing thrust accidentally
  always_ff @(posedge key_clk, posedge reset) begin
    if(reset) begin
      thrust_n <= THRUST;  
    end
    else if(~key_out[4]) begin 
        thrust_n <= {12'b0, key_out[3:0]};  // set thrust to pressed number key (0-9)
      end
  end

  // display control logic 
  // Z=19 (ALT), Y=18 (VEL), X=17 (FUEL), W=16 (THRUST)
  assign disp_ctrl = {key_out == 5'd19, key_out == 5'd18, key_out == 5'd17, key_out == 5'd16};

  // module instantiations
  clock_psc cl0(.clk(hz100), .rst(reset), .lim(8'd24), .hzX(clk));
  keysync key_sync(.clk(hz100), .rst(reset), .keyin(in[19:0]), .keyout(key_out), .keyclk(key_clk));
  ll_alu u0(.alt(alt), .vel(vel), .fuel(fuel), .thrust(thrust), .alt_n(alt_n), .vel_n(vel_n), .fuel_n(fuel_n));
  ll_memory mem(.clk(clk), .rst(reset), .wen(write_en), .alt_n(alt_n), .vel_n(vel_n), .fuel_n(fuel_n), .thrust_n(thrust_n), 
                .alt(alt), .vel(vel), .fuel(fuel), .thrust(thrust));
  ll_control cont(.clk(clk), .rst(reset), .alt(alt), .vel(vel), .land(land), .crash(crash), .wen(write_en));
  ll_display disp(.clk(key_clk), .rst(reset), .land(land), .crash(crash), .disp_ctrl(disp_ctrl), .alt(alt), .vel(vel), 
                  .fuel(fuel), .thrust(thrust), .ss7(ss7), .ss6(ss6), .ss5(ss5), .ss3(ss3), .ss2(ss2), .ss1(ss1), .ss0(ss0), .red(red), .green(green));
endmodule

module ll_memory #(
    parameter FUEL=16'h800,
    parameter ALTITUDE=16'h4500,
    parameter VELOCITY=16'h0,
    parameter THRUST=16'h5
  )(
    input logic clk, rst, wen,
    input logic [15:0] alt_n, vel_n, fuel_n, thrust_n,
    output logic [15:0] alt, vel, fuel, thrust
  );
  logic [15:0] alt_reg, vel_reg, fuel_reg, thrust_reg;

  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      alt_reg <= ALTITUDE;
      vel_reg <= VELOCITY;
      fuel_reg <= FUEL;
      thrust_reg <= THRUST;
    end else if (wen) begin 
      alt_reg <= alt_n;
      vel_reg <= vel_n;
      fuel_reg <= fuel_n;
      thrust_reg <= thrust_n;
    end
  end

  assign alt = alt_reg;
  assign vel = vel_reg;
  assign fuel = fuel_reg;
  assign thrust = thrust_reg;
endmodule

module ll_alu #(
    parameter GRAVITY = 16'h5
  )(
    input logic [15:0] alt, vel, fuel, thrust,
    output logic [15:0] alt_n, vel_n, fuel_n
  );

  // Intermediate buses to store the calculated values
  logic [15:0] alt_c, vel_c, fuel_c;
  logic [15:0] vel_c_temp, fuel_temp, thrust_temp;

  // Thrust can only be applied if there is fuel
  assign thrust_temp = (fuel == 0 || fuel[15]) ?  16'h0 : thrust;

  // Altitude calculation: alt_c = alt + vel
  // bcdaddsub4 adds when op is 1'b0 (alt + vel)
  bcdaddsub4 alt_calc (.a(alt), .b(vel), .op(1'b0), .s(alt_c));

  // Velocity calculation: vel_c = vel - gravity + thrust
  bcdaddsub4 vel_calc1 (.a(vel), .b(GRAVITY), .op(1'b1), .s(vel_c_temp));
  bcdaddsub4 vel_calc2 (.a(vel_c_temp), .b(thrust_temp), .op(1'b0), .s(vel_c));

  // Fuel calculation: fuel_c = fuel - thrust
  bcdaddsub4 fuel_calc (.a(fuel), .b(thrust), .op(1'b1), .s(fuel_c));

  // Handling special cases in the always_comb block
  always_comb begin
    // Default assignments
    if (alt_c == 0 | alt_c[15]) begin 
      alt_n = 0;  
      vel_n = 0; 
    end else begin
      alt_n = alt_c; 
      vel_n = vel_c;
    end

    // Fuel special case
    if (fuel_c == 0 | fuel_c[15]) begin 
      fuel_n = 0;
    end else begin
      fuel_n = fuel_c;
    end
  end
endmodule

module ll_control (
    input logic clk, rst,
    input logic [15:0] alt, vel,
    output logic land, crash, wen
  );

  logic land_n, crash_n, wen_n;
  logic [15:0] av_sum;
  logic [15:0] vel_check;

  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin
      land <= 1'b0;
      crash <= 1'b0;
      wen <= 1'b0;
    end else begin
      land <= land_n;
      crash <= crash_n;
      wen <= wen_n;
    end
  end

  // bcdaddsub4 adds when op is 1'b0 (alt + vel)
  bcdaddsub4 alt_calc (.a(alt), .b(vel), .op(1'b0), .s(av_sum));

  // lander has reached when alt + vel <= 0
  always_comb begin
    // ten's complement of -30 with 16 bits
    // 30 in BCD == 0011 0000 (hex 0x30)
    // 10000 in BCD = 0001 0000 0000 0000
    // 10000 - 30 = 1111 1111 1101 0000 (hex FFD0)
    // so check if < 16'hFFD0
    // vel_check = 16'h9970;

    // if alt + vel <= 0, then it has landed
    // wen is 1 as long as the lander has not crashed or landed

    if (~land && ~crash) begin 
      if (av_sum == 0 || av_sum[15]) begin
        wen_n = 1'b0;
        if (vel < 16'h9970) begin 
            land_n = 1'b0;
            crash_n = 1'b1;
          end else begin 
            land_n = 1'b1;
            crash_n = 1'b0;
          end
      end else begin 
        land_n = 1'b0;
        crash_n = 1'b0;
        wen_n = 1'b1;
      end
    end else begin 
      land_n = land;
      crash_n = crash;
      wen_n = wen;
    end
    // wen_n = (land | crash) ? 1'b0 : 1'b1;
  end
endmodule

// from lab 9
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

