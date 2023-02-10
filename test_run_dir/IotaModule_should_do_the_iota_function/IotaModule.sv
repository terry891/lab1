module IotaModule(
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
  output [63:0] io_state_o_24,
  input  [4:0]  io_round
);
  wire [63:0] _GEN_1 = 5'h1 == io_round ? 64'h8082 : 64'h1; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_2 = 5'h2 == io_round ? 64'h800000000000808a : _GEN_1; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_3 = 5'h3 == io_round ? 64'h8000000080008000 : _GEN_2; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_4 = 5'h4 == io_round ? 64'h808b : _GEN_3; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_5 = 5'h5 == io_round ? 64'h80000001 : _GEN_4; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_6 = 5'h6 == io_round ? 64'h8000000080008081 : _GEN_5; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_7 = 5'h7 == io_round ? 64'h8000000000008009 : _GEN_6; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_8 = 5'h8 == io_round ? 64'h8a : _GEN_7; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_9 = 5'h9 == io_round ? 64'h88 : _GEN_8; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_10 = 5'ha == io_round ? 64'h80008009 : _GEN_9; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_11 = 5'hb == io_round ? 64'h8000000a : _GEN_10; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_12 = 5'hc == io_round ? 64'h8000808b : _GEN_11; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_13 = 5'hd == io_round ? 64'h800000000000008b : _GEN_12; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_14 = 5'he == io_round ? 64'h8000000000008089 : _GEN_13; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_15 = 5'hf == io_round ? 64'h8000000000008003 : _GEN_14; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_16 = 5'h10 == io_round ? 64'h8000000000008002 : _GEN_15; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_17 = 5'h11 == io_round ? 64'h8000000000000080 : _GEN_16; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_18 = 5'h12 == io_round ? 64'h800a : _GEN_17; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_19 = 5'h13 == io_round ? 64'h800000008000000a : _GEN_18; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_20 = 5'h14 == io_round ? 64'h8000000080008081 : _GEN_19; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_21 = 5'h15 == io_round ? 64'h8000000000008080 : _GEN_20; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_22 = 5'h16 == io_round ? 64'h80000001 : _GEN_21; // @[iota.scala 42:{34,34}]
  wire [63:0] _GEN_23 = 5'h17 == io_round ? 64'h8000000080008008 : _GEN_22; // @[iota.scala 42:{34,34}]
  assign io_state_o_0 = io_state_i_0 ^ _GEN_23; // @[iota.scala 42:34]
  assign io_state_o_1 = io_state_i_1; // @[iota.scala 13:19]
  assign io_state_o_2 = io_state_i_2; // @[iota.scala 13:19]
  assign io_state_o_3 = io_state_i_3; // @[iota.scala 13:19]
  assign io_state_o_4 = io_state_i_4; // @[iota.scala 13:19]
  assign io_state_o_5 = io_state_i_5; // @[iota.scala 13:19]
  assign io_state_o_6 = io_state_i_6; // @[iota.scala 13:19]
  assign io_state_o_7 = io_state_i_7; // @[iota.scala 13:19]
  assign io_state_o_8 = io_state_i_8; // @[iota.scala 13:19]
  assign io_state_o_9 = io_state_i_9; // @[iota.scala 13:19]
  assign io_state_o_10 = io_state_i_10; // @[iota.scala 13:19]
  assign io_state_o_11 = io_state_i_11; // @[iota.scala 13:19]
  assign io_state_o_12 = io_state_i_12; // @[iota.scala 13:19]
  assign io_state_o_13 = io_state_i_13; // @[iota.scala 13:19]
  assign io_state_o_14 = io_state_i_14; // @[iota.scala 13:19]
  assign io_state_o_15 = io_state_i_15; // @[iota.scala 13:19]
  assign io_state_o_16 = io_state_i_16; // @[iota.scala 13:19]
  assign io_state_o_17 = io_state_i_17; // @[iota.scala 13:19]
  assign io_state_o_18 = io_state_i_18; // @[iota.scala 13:19]
  assign io_state_o_19 = io_state_i_19; // @[iota.scala 13:19]
  assign io_state_o_20 = io_state_i_20; // @[iota.scala 13:19]
  assign io_state_o_21 = io_state_i_21; // @[iota.scala 13:19]
  assign io_state_o_22 = io_state_i_22; // @[iota.scala 13:19]
  assign io_state_o_23 = io_state_i_23; // @[iota.scala 13:19]
  assign io_state_o_24 = io_state_i_24; // @[iota.scala 13:19]
endmodule
