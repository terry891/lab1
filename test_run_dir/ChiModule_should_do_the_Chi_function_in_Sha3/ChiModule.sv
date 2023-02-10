module ChiModule(
  input         clock,
  input         reset,
  input  [63:0] io_state_i_0,
  input  [63:0] io_state_i_1,
  input  [63:0] io_state_i_2,
  input  [63:0] io_state_i_3,
  input  [63:0] io_state_i_4,
  input  [63:0] io_state_i_5,
  input  [63:0] io_state_i_6,
  input  [63:0] io_state_i_7,
  input  [63:0] io_state_i_8,
  input  [63:0] io_state_i_9,
  input  [63:0] io_state_i_10,
  input  [63:0] io_state_i_11,
  input  [63:0] io_state_i_12,
  input  [63:0] io_state_i_13,
  input  [63:0] io_state_i_14,
  input  [63:0] io_state_i_15,
  input  [63:0] io_state_i_16,
  input  [63:0] io_state_i_17,
  input  [63:0] io_state_i_18,
  input  [63:0] io_state_i_19,
  input  [63:0] io_state_i_20,
  input  [63:0] io_state_i_21,
  input  [63:0] io_state_i_22,
  input  [63:0] io_state_i_23,
  input  [63:0] io_state_i_24,
  output [63:0] io_state_o_0,
  output [63:0] io_state_o_1,
  output [63:0] io_state_o_2,
  output [63:0] io_state_o_3,
  output [63:0] io_state_o_4,
  output [63:0] io_state_o_5,
  output [63:0] io_state_o_6,
  output [63:0] io_state_o_7,
  output [63:0] io_state_o_8,
  output [63:0] io_state_o_9,
  output [63:0] io_state_o_10,
  output [63:0] io_state_o_11,
  output [63:0] io_state_o_12,
  output [63:0] io_state_o_13,
  output [63:0] io_state_o_14,
  output [63:0] io_state_o_15,
  output [63:0] io_state_o_16,
  output [63:0] io_state_o_17,
  output [63:0] io_state_o_18,
  output [63:0] io_state_o_19,
  output [63:0] io_state_o_20,
  output [63:0] io_state_o_21,
  output [63:0] io_state_o_22,
  output [63:0] io_state_o_23,
  output [63:0] io_state_o_24
);
  wire [63:0] _io_state_o_0_T = ~io_state_i_1; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_0_T_1 = _io_state_o_0_T & io_state_i_2; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_1_T = ~io_state_i_2; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_1_T_1 = _io_state_o_1_T & io_state_i_3; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_2_T = ~io_state_i_3; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_2_T_1 = _io_state_o_2_T & io_state_i_4; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_3_T = ~io_state_i_4; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_3_T_1 = _io_state_o_3_T & io_state_i_0; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_4_T = ~io_state_i_0; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_4_T_1 = _io_state_o_4_T & io_state_i_1; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_5_T = ~io_state_i_6; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_5_T_1 = _io_state_o_5_T & io_state_i_7; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_6_T = ~io_state_i_7; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_6_T_1 = _io_state_o_6_T & io_state_i_8; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_7_T = ~io_state_i_8; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_7_T_1 = _io_state_o_7_T & io_state_i_9; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_8_T = ~io_state_i_9; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_8_T_1 = _io_state_o_8_T & io_state_i_5; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_9_T = ~io_state_i_5; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_9_T_1 = _io_state_o_9_T & io_state_i_6; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_10_T = ~io_state_i_11; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_10_T_1 = _io_state_o_10_T & io_state_i_12; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_11_T = ~io_state_i_12; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_11_T_1 = _io_state_o_11_T & io_state_i_13; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_12_T = ~io_state_i_13; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_12_T_1 = _io_state_o_12_T & io_state_i_14; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_13_T = ~io_state_i_14; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_13_T_1 = _io_state_o_13_T & io_state_i_10; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_14_T = ~io_state_i_10; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_14_T_1 = _io_state_o_14_T & io_state_i_11; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_15_T = ~io_state_i_16; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_15_T_1 = _io_state_o_15_T & io_state_i_17; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_16_T = ~io_state_i_17; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_16_T_1 = _io_state_o_16_T & io_state_i_18; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_17_T = ~io_state_i_18; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_17_T_1 = _io_state_o_17_T & io_state_i_19; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_18_T = ~io_state_i_19; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_18_T_1 = _io_state_o_18_T & io_state_i_15; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_19_T = ~io_state_i_15; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_19_T_1 = _io_state_o_19_T & io_state_i_16; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_20_T = ~io_state_i_21; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_20_T_1 = _io_state_o_20_T & io_state_i_22; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_21_T = ~io_state_i_22; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_21_T_1 = _io_state_o_21_T & io_state_i_23; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_22_T = ~io_state_i_23; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_22_T_1 = _io_state_o_22_T & io_state_i_24; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_23_T = ~io_state_i_24; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_23_T_1 = _io_state_o_23_T & io_state_i_20; // @[chi.scala 18:67]
  wire [63:0] _io_state_o_24_T = ~io_state_i_20; // @[chi.scala 18:45]
  wire [63:0] _io_state_o_24_T_1 = _io_state_o_24_T & io_state_i_21; // @[chi.scala 18:67]
  assign io_state_o_0 = io_state_i_0 ^ _io_state_o_0_T_1; // @[chi.scala 18:42]
  assign io_state_o_1 = io_state_i_1 ^ _io_state_o_1_T_1; // @[chi.scala 18:42]
  assign io_state_o_2 = io_state_i_2 ^ _io_state_o_2_T_1; // @[chi.scala 18:42]
  assign io_state_o_3 = io_state_i_3 ^ _io_state_o_3_T_1; // @[chi.scala 18:42]
  assign io_state_o_4 = io_state_i_4 ^ _io_state_o_4_T_1; // @[chi.scala 18:42]
  assign io_state_o_5 = io_state_i_5 ^ _io_state_o_5_T_1; // @[chi.scala 18:42]
  assign io_state_o_6 = io_state_i_6 ^ _io_state_o_6_T_1; // @[chi.scala 18:42]
  assign io_state_o_7 = io_state_i_7 ^ _io_state_o_7_T_1; // @[chi.scala 18:42]
  assign io_state_o_8 = io_state_i_8 ^ _io_state_o_8_T_1; // @[chi.scala 18:42]
  assign io_state_o_9 = io_state_i_9 ^ _io_state_o_9_T_1; // @[chi.scala 18:42]
  assign io_state_o_10 = io_state_i_10 ^ _io_state_o_10_T_1; // @[chi.scala 18:42]
  assign io_state_o_11 = io_state_i_11 ^ _io_state_o_11_T_1; // @[chi.scala 18:42]
  assign io_state_o_12 = io_state_i_12 ^ _io_state_o_12_T_1; // @[chi.scala 18:42]
  assign io_state_o_13 = io_state_i_13 ^ _io_state_o_13_T_1; // @[chi.scala 18:42]
  assign io_state_o_14 = io_state_i_14 ^ _io_state_o_14_T_1; // @[chi.scala 18:42]
  assign io_state_o_15 = io_state_i_15 ^ _io_state_o_15_T_1; // @[chi.scala 18:42]
  assign io_state_o_16 = io_state_i_16 ^ _io_state_o_16_T_1; // @[chi.scala 18:42]
  assign io_state_o_17 = io_state_i_17 ^ _io_state_o_17_T_1; // @[chi.scala 18:42]
  assign io_state_o_18 = io_state_i_18 ^ _io_state_o_18_T_1; // @[chi.scala 18:42]
  assign io_state_o_19 = io_state_i_19 ^ _io_state_o_19_T_1; // @[chi.scala 18:42]
  assign io_state_o_20 = io_state_i_20 ^ _io_state_o_20_T_1; // @[chi.scala 18:42]
  assign io_state_o_21 = io_state_i_21 ^ _io_state_o_21_T_1; // @[chi.scala 18:42]
  assign io_state_o_22 = io_state_i_22 ^ _io_state_o_22_T_1; // @[chi.scala 18:42]
  assign io_state_o_23 = io_state_i_23 ^ _io_state_o_23_T_1; // @[chi.scala 18:42]
  assign io_state_o_24 = io_state_i_24 ^ _io_state_o_24_T_1; // @[chi.scala 18:42]
endmodule
