module ThetaModule(
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
  wire [63:0] _bc_0_T = io_state_i_0 ^ io_state_i_5; // @[theta.scala 18:24]
  wire [63:0] _bc_0_T_1 = _bc_0_T ^ io_state_i_10; // @[theta.scala 18:36]
  wire [63:0] _bc_0_T_2 = _bc_0_T_1 ^ io_state_i_15; // @[theta.scala 18:49]
  wire [63:0] bc_0 = _bc_0_T_2 ^ io_state_i_20; // @[theta.scala 18:62]
  wire [63:0] _bc_1_T = io_state_i_1 ^ io_state_i_6; // @[theta.scala 18:24]
  wire [63:0] _bc_1_T_1 = _bc_1_T ^ io_state_i_11; // @[theta.scala 18:36]
  wire [63:0] _bc_1_T_2 = _bc_1_T_1 ^ io_state_i_16; // @[theta.scala 18:49]
  wire [63:0] bc_1 = _bc_1_T_2 ^ io_state_i_21; // @[theta.scala 18:62]
  wire [63:0] _bc_2_T = io_state_i_2 ^ io_state_i_7; // @[theta.scala 18:24]
  wire [63:0] _bc_2_T_1 = _bc_2_T ^ io_state_i_12; // @[theta.scala 18:36]
  wire [63:0] _bc_2_T_2 = _bc_2_T_1 ^ io_state_i_17; // @[theta.scala 18:49]
  wire [63:0] bc_2 = _bc_2_T_2 ^ io_state_i_22; // @[theta.scala 18:62]
  wire [63:0] _bc_3_T = io_state_i_3 ^ io_state_i_8; // @[theta.scala 18:24]
  wire [63:0] _bc_3_T_1 = _bc_3_T ^ io_state_i_13; // @[theta.scala 18:36]
  wire [63:0] _bc_3_T_2 = _bc_3_T_1 ^ io_state_i_18; // @[theta.scala 18:49]
  wire [63:0] bc_3 = _bc_3_T_2 ^ io_state_i_23; // @[theta.scala 18:62]
  wire [63:0] _bc_4_T = io_state_i_4 ^ io_state_i_9; // @[theta.scala 18:24]
  wire [63:0] _bc_4_T_1 = _bc_4_T ^ io_state_i_14; // @[theta.scala 18:36]
  wire [63:0] _bc_4_T_2 = _bc_4_T_1 ^ io_state_i_19; // @[theta.scala 18:49]
  wire [63:0] bc_4 = _bc_4_T_2 ^ io_state_i_24; // @[theta.scala 18:62]
  wire [64:0] _ROTL_T = {bc_1, 1'h0}; // @[theta.scala 22:37]
  wire [64:0] _GEN_0 = {{64'd0}, bc_1[63]}; // @[theta.scala 22:45]
  wire [64:0] _ROTL_T_2 = _ROTL_T | _GEN_0; // @[theta.scala 22:45]
  wire [63:0] ROTL = _ROTL_T_2[63:0]; // @[theta.scala 21:24 22:14]
  wire [63:0] tmp = bc_4 ^ ROTL; // @[theta.scala 23:33]
  wire [64:0] _ROTL_T_3 = {bc_2, 1'h0}; // @[theta.scala 22:37]
  wire [64:0] _GEN_1 = {{64'd0}, bc_2[63]}; // @[theta.scala 22:45]
  wire [64:0] _ROTL_T_5 = _ROTL_T_3 | _GEN_1; // @[theta.scala 22:45]
  wire [63:0] ROTL_1 = _ROTL_T_5[63:0]; // @[theta.scala 21:24 22:14]
  wire [63:0] tmp_1 = bc_0 ^ ROTL_1; // @[theta.scala 23:33]
  wire [64:0] _ROTL_T_6 = {bc_3, 1'h0}; // @[theta.scala 22:37]
  wire [64:0] _GEN_2 = {{64'd0}, bc_3[63]}; // @[theta.scala 22:45]
  wire [64:0] _ROTL_T_8 = _ROTL_T_6 | _GEN_2; // @[theta.scala 22:45]
  wire [63:0] ROTL_2 = _ROTL_T_8[63:0]; // @[theta.scala 21:24 22:14]
  wire [63:0] tmp_2 = bc_1 ^ ROTL_2; // @[theta.scala 23:33]
  wire [64:0] _ROTL_T_9 = {bc_4, 1'h0}; // @[theta.scala 22:37]
  wire [64:0] _GEN_3 = {{64'd0}, bc_4[63]}; // @[theta.scala 22:45]
  wire [64:0] _ROTL_T_11 = _ROTL_T_9 | _GEN_3; // @[theta.scala 22:45]
  wire [63:0] ROTL_3 = _ROTL_T_11[63:0]; // @[theta.scala 21:24 22:14]
  wire [63:0] tmp_3 = bc_2 ^ ROTL_3; // @[theta.scala 23:33]
  wire [64:0] _ROTL_T_12 = {bc_0, 1'h0}; // @[theta.scala 22:37]
  wire [64:0] _GEN_4 = {{64'd0}, bc_0[63]}; // @[theta.scala 22:45]
  wire [64:0] _ROTL_T_14 = _ROTL_T_12 | _GEN_4; // @[theta.scala 22:45]
  wire [63:0] ROTL_4 = _ROTL_T_14[63:0]; // @[theta.scala 21:24 22:14]
  wire [63:0] tmp_4 = bc_3 ^ ROTL_4; // @[theta.scala 23:33]
  assign io_state_o_0 = io_state_i_0 ^ tmp; // @[theta.scala 25:42]
  assign io_state_o_1 = io_state_i_1 ^ tmp_1; // @[theta.scala 25:42]
  assign io_state_o_2 = io_state_i_2 ^ tmp_2; // @[theta.scala 25:42]
  assign io_state_o_3 = io_state_i_3 ^ tmp_3; // @[theta.scala 25:42]
  assign io_state_o_4 = io_state_i_4 ^ tmp_4; // @[theta.scala 25:42]
  assign io_state_o_5 = io_state_i_5 ^ tmp; // @[theta.scala 25:42]
  assign io_state_o_6 = io_state_i_6 ^ tmp_1; // @[theta.scala 25:42]
  assign io_state_o_7 = io_state_i_7 ^ tmp_2; // @[theta.scala 25:42]
  assign io_state_o_8 = io_state_i_8 ^ tmp_3; // @[theta.scala 25:42]
  assign io_state_o_9 = io_state_i_9 ^ tmp_4; // @[theta.scala 25:42]
  assign io_state_o_10 = io_state_i_10 ^ tmp; // @[theta.scala 25:42]
  assign io_state_o_11 = io_state_i_11 ^ tmp_1; // @[theta.scala 25:42]
  assign io_state_o_12 = io_state_i_12 ^ tmp_2; // @[theta.scala 25:42]
  assign io_state_o_13 = io_state_i_13 ^ tmp_3; // @[theta.scala 25:42]
  assign io_state_o_14 = io_state_i_14 ^ tmp_4; // @[theta.scala 25:42]
  assign io_state_o_15 = io_state_i_15 ^ tmp; // @[theta.scala 25:42]
  assign io_state_o_16 = io_state_i_16 ^ tmp_1; // @[theta.scala 25:42]
  assign io_state_o_17 = io_state_i_17 ^ tmp_2; // @[theta.scala 25:42]
  assign io_state_o_18 = io_state_i_18 ^ tmp_3; // @[theta.scala 25:42]
  assign io_state_o_19 = io_state_i_19 ^ tmp_4; // @[theta.scala 25:42]
  assign io_state_o_20 = io_state_i_20 ^ tmp; // @[theta.scala 25:42]
  assign io_state_o_21 = io_state_i_21 ^ tmp_1; // @[theta.scala 25:42]
  assign io_state_o_22 = io_state_i_22 ^ tmp_2; // @[theta.scala 25:42]
  assign io_state_o_23 = io_state_i_23 ^ tmp_3; // @[theta.scala 25:42]
  assign io_state_o_24 = io_state_i_24 ^ tmp_4; // @[theta.scala 25:42]
endmodule
module RhoPiModule(
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
  assign io_state_o_0 = io_state_i_0; // @[rhopi.scala 26:17]
  assign io_state_o_1 = {io_state_i_6[19:0],io_state_i_6[63:20]}; // @[Cat.scala 33:92]
  assign io_state_o_2 = {io_state_i_12[20:0],io_state_i_12[63:21]}; // @[Cat.scala 33:92]
  assign io_state_o_3 = {io_state_i_18[42:0],io_state_i_18[63:43]}; // @[Cat.scala 33:92]
  assign io_state_o_4 = {io_state_i_24[49:0],io_state_i_24[63:50]}; // @[Cat.scala 33:92]
  assign io_state_o_5 = {io_state_i_3[35:0],io_state_i_3[63:36]}; // @[Cat.scala 33:92]
  assign io_state_o_6 = {io_state_i_9[43:0],io_state_i_9[63:44]}; // @[Cat.scala 33:92]
  assign io_state_o_7 = {io_state_i_10[60:0],io_state_i_10[63:61]}; // @[Cat.scala 33:92]
  assign io_state_o_8 = {io_state_i_16[18:0],io_state_i_16[63:19]}; // @[Cat.scala 33:92]
  assign io_state_o_9 = {io_state_i_22[2:0],io_state_i_22[63:3]}; // @[Cat.scala 33:92]
  assign io_state_o_10 = {io_state_i_1[62:0],io_state_i_1[63]}; // @[Cat.scala 33:92]
  assign io_state_o_11 = {io_state_i_7[57:0],io_state_i_7[63:58]}; // @[Cat.scala 33:92]
  assign io_state_o_12 = {io_state_i_13[38:0],io_state_i_13[63:39]}; // @[Cat.scala 33:92]
  assign io_state_o_13 = {io_state_i_19[55:0],io_state_i_19[63:56]}; // @[Cat.scala 33:92]
  assign io_state_o_14 = {io_state_i_20[45:0],io_state_i_20[63:46]}; // @[Cat.scala 33:92]
  assign io_state_o_15 = {io_state_i_4[36:0],io_state_i_4[63:37]}; // @[Cat.scala 33:92]
  assign io_state_o_16 = {io_state_i_5[27:0],io_state_i_5[63:28]}; // @[Cat.scala 33:92]
  assign io_state_o_17 = {io_state_i_11[53:0],io_state_i_11[63:54]}; // @[Cat.scala 33:92]
  assign io_state_o_18 = {io_state_i_17[48:0],io_state_i_17[63:49]}; // @[Cat.scala 33:92]
  assign io_state_o_19 = {io_state_i_23[7:0],io_state_i_23[63:8]}; // @[Cat.scala 33:92]
  assign io_state_o_20 = {io_state_i_2[1:0],io_state_i_2[63:2]}; // @[Cat.scala 33:92]
  assign io_state_o_21 = {io_state_i_8[8:0],io_state_i_8[63:9]}; // @[Cat.scala 33:92]
  assign io_state_o_22 = {io_state_i_14[24:0],io_state_i_14[63:25]}; // @[Cat.scala 33:92]
  assign io_state_o_23 = {io_state_i_15[22:0],io_state_i_15[63:23]}; // @[Cat.scala 33:92]
  assign io_state_o_24 = {io_state_i_21[61:0],io_state_i_21[63:62]}; // @[Cat.scala 33:92]
endmodule
module ChiModule(
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
module IotaModule(
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
module DpathModule(
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
  wire [63:0] theta_io_state_i_0; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_1; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_2; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_3; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_4; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_5; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_6; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_7; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_8; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_9; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_10; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_11; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_12; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_13; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_14; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_15; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_16; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_17; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_18; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_19; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_20; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_21; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_22; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_23; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_i_24; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_0; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_1; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_2; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_3; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_4; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_5; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_6; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_7; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_8; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_9; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_10; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_11; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_12; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_13; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_14; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_15; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_16; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_17; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_18; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_19; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_20; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_21; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_22; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_23; // @[dpath.scala 24:21]
  wire [63:0] theta_io_state_o_24; // @[dpath.scala 24:21]
  wire [63:0] rhopi_io_state_i_0; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_1; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_2; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_3; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_4; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_5; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_6; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_7; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_8; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_9; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_10; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_11; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_12; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_13; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_14; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_15; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_16; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_17; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_18; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_19; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_20; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_21; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_22; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_23; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_i_24; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_0; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_1; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_2; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_3; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_4; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_5; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_6; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_7; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_8; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_9; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_10; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_11; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_12; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_13; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_14; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_15; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_16; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_17; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_18; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_19; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_20; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_21; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_22; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_23; // @[dpath.scala 25:21]
  wire [63:0] rhopi_io_state_o_24; // @[dpath.scala 25:21]
  wire [63:0] chi_io_state_i_0; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_1; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_2; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_3; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_4; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_5; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_6; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_7; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_8; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_9; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_10; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_11; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_12; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_13; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_14; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_15; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_16; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_17; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_18; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_19; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_20; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_21; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_22; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_23; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_i_24; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_0; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_1; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_2; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_3; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_4; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_5; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_6; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_7; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_8; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_9; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_10; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_11; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_12; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_13; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_14; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_15; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_16; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_17; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_18; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_19; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_20; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_21; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_22; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_23; // @[dpath.scala 26:19]
  wire [63:0] chi_io_state_o_24; // @[dpath.scala 26:19]
  wire [63:0] iota_io_state_i_0; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_1; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_2; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_3; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_4; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_5; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_6; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_7; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_8; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_9; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_10; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_11; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_12; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_13; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_14; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_15; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_16; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_17; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_18; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_19; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_20; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_21; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_22; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_23; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_i_24; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_0; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_1; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_2; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_3; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_4; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_5; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_6; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_7; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_8; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_9; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_10; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_11; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_12; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_13; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_14; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_15; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_16; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_17; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_18; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_19; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_20; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_21; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_22; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_23; // @[dpath.scala 27:20]
  wire [63:0] iota_io_state_o_24; // @[dpath.scala 27:20]
  wire [4:0] iota_io_round; // @[dpath.scala 27:20]
  ThetaModule theta ( // @[dpath.scala 24:21]
    .io_state_i_0(theta_io_state_i_0),
    .io_state_i_1(theta_io_state_i_1),
    .io_state_i_2(theta_io_state_i_2),
    .io_state_i_3(theta_io_state_i_3),
    .io_state_i_4(theta_io_state_i_4),
    .io_state_i_5(theta_io_state_i_5),
    .io_state_i_6(theta_io_state_i_6),
    .io_state_i_7(theta_io_state_i_7),
    .io_state_i_8(theta_io_state_i_8),
    .io_state_i_9(theta_io_state_i_9),
    .io_state_i_10(theta_io_state_i_10),
    .io_state_i_11(theta_io_state_i_11),
    .io_state_i_12(theta_io_state_i_12),
    .io_state_i_13(theta_io_state_i_13),
    .io_state_i_14(theta_io_state_i_14),
    .io_state_i_15(theta_io_state_i_15),
    .io_state_i_16(theta_io_state_i_16),
    .io_state_i_17(theta_io_state_i_17),
    .io_state_i_18(theta_io_state_i_18),
    .io_state_i_19(theta_io_state_i_19),
    .io_state_i_20(theta_io_state_i_20),
    .io_state_i_21(theta_io_state_i_21),
    .io_state_i_22(theta_io_state_i_22),
    .io_state_i_23(theta_io_state_i_23),
    .io_state_i_24(theta_io_state_i_24),
    .io_state_o_0(theta_io_state_o_0),
    .io_state_o_1(theta_io_state_o_1),
    .io_state_o_2(theta_io_state_o_2),
    .io_state_o_3(theta_io_state_o_3),
    .io_state_o_4(theta_io_state_o_4),
    .io_state_o_5(theta_io_state_o_5),
    .io_state_o_6(theta_io_state_o_6),
    .io_state_o_7(theta_io_state_o_7),
    .io_state_o_8(theta_io_state_o_8),
    .io_state_o_9(theta_io_state_o_9),
    .io_state_o_10(theta_io_state_o_10),
    .io_state_o_11(theta_io_state_o_11),
    .io_state_o_12(theta_io_state_o_12),
    .io_state_o_13(theta_io_state_o_13),
    .io_state_o_14(theta_io_state_o_14),
    .io_state_o_15(theta_io_state_o_15),
    .io_state_o_16(theta_io_state_o_16),
    .io_state_o_17(theta_io_state_o_17),
    .io_state_o_18(theta_io_state_o_18),
    .io_state_o_19(theta_io_state_o_19),
    .io_state_o_20(theta_io_state_o_20),
    .io_state_o_21(theta_io_state_o_21),
    .io_state_o_22(theta_io_state_o_22),
    .io_state_o_23(theta_io_state_o_23),
    .io_state_o_24(theta_io_state_o_24)
  );
  RhoPiModule rhopi ( // @[dpath.scala 25:21]
    .io_state_i_0(rhopi_io_state_i_0),
    .io_state_i_1(rhopi_io_state_i_1),
    .io_state_i_2(rhopi_io_state_i_2),
    .io_state_i_3(rhopi_io_state_i_3),
    .io_state_i_4(rhopi_io_state_i_4),
    .io_state_i_5(rhopi_io_state_i_5),
    .io_state_i_6(rhopi_io_state_i_6),
    .io_state_i_7(rhopi_io_state_i_7),
    .io_state_i_8(rhopi_io_state_i_8),
    .io_state_i_9(rhopi_io_state_i_9),
    .io_state_i_10(rhopi_io_state_i_10),
    .io_state_i_11(rhopi_io_state_i_11),
    .io_state_i_12(rhopi_io_state_i_12),
    .io_state_i_13(rhopi_io_state_i_13),
    .io_state_i_14(rhopi_io_state_i_14),
    .io_state_i_15(rhopi_io_state_i_15),
    .io_state_i_16(rhopi_io_state_i_16),
    .io_state_i_17(rhopi_io_state_i_17),
    .io_state_i_18(rhopi_io_state_i_18),
    .io_state_i_19(rhopi_io_state_i_19),
    .io_state_i_20(rhopi_io_state_i_20),
    .io_state_i_21(rhopi_io_state_i_21),
    .io_state_i_22(rhopi_io_state_i_22),
    .io_state_i_23(rhopi_io_state_i_23),
    .io_state_i_24(rhopi_io_state_i_24),
    .io_state_o_0(rhopi_io_state_o_0),
    .io_state_o_1(rhopi_io_state_o_1),
    .io_state_o_2(rhopi_io_state_o_2),
    .io_state_o_3(rhopi_io_state_o_3),
    .io_state_o_4(rhopi_io_state_o_4),
    .io_state_o_5(rhopi_io_state_o_5),
    .io_state_o_6(rhopi_io_state_o_6),
    .io_state_o_7(rhopi_io_state_o_7),
    .io_state_o_8(rhopi_io_state_o_8),
    .io_state_o_9(rhopi_io_state_o_9),
    .io_state_o_10(rhopi_io_state_o_10),
    .io_state_o_11(rhopi_io_state_o_11),
    .io_state_o_12(rhopi_io_state_o_12),
    .io_state_o_13(rhopi_io_state_o_13),
    .io_state_o_14(rhopi_io_state_o_14),
    .io_state_o_15(rhopi_io_state_o_15),
    .io_state_o_16(rhopi_io_state_o_16),
    .io_state_o_17(rhopi_io_state_o_17),
    .io_state_o_18(rhopi_io_state_o_18),
    .io_state_o_19(rhopi_io_state_o_19),
    .io_state_o_20(rhopi_io_state_o_20),
    .io_state_o_21(rhopi_io_state_o_21),
    .io_state_o_22(rhopi_io_state_o_22),
    .io_state_o_23(rhopi_io_state_o_23),
    .io_state_o_24(rhopi_io_state_o_24)
  );
  ChiModule chi ( // @[dpath.scala 26:19]
    .io_state_i_0(chi_io_state_i_0),
    .io_state_i_1(chi_io_state_i_1),
    .io_state_i_2(chi_io_state_i_2),
    .io_state_i_3(chi_io_state_i_3),
    .io_state_i_4(chi_io_state_i_4),
    .io_state_i_5(chi_io_state_i_5),
    .io_state_i_6(chi_io_state_i_6),
    .io_state_i_7(chi_io_state_i_7),
    .io_state_i_8(chi_io_state_i_8),
    .io_state_i_9(chi_io_state_i_9),
    .io_state_i_10(chi_io_state_i_10),
    .io_state_i_11(chi_io_state_i_11),
    .io_state_i_12(chi_io_state_i_12),
    .io_state_i_13(chi_io_state_i_13),
    .io_state_i_14(chi_io_state_i_14),
    .io_state_i_15(chi_io_state_i_15),
    .io_state_i_16(chi_io_state_i_16),
    .io_state_i_17(chi_io_state_i_17),
    .io_state_i_18(chi_io_state_i_18),
    .io_state_i_19(chi_io_state_i_19),
    .io_state_i_20(chi_io_state_i_20),
    .io_state_i_21(chi_io_state_i_21),
    .io_state_i_22(chi_io_state_i_22),
    .io_state_i_23(chi_io_state_i_23),
    .io_state_i_24(chi_io_state_i_24),
    .io_state_o_0(chi_io_state_o_0),
    .io_state_o_1(chi_io_state_o_1),
    .io_state_o_2(chi_io_state_o_2),
    .io_state_o_3(chi_io_state_o_3),
    .io_state_o_4(chi_io_state_o_4),
    .io_state_o_5(chi_io_state_o_5),
    .io_state_o_6(chi_io_state_o_6),
    .io_state_o_7(chi_io_state_o_7),
    .io_state_o_8(chi_io_state_o_8),
    .io_state_o_9(chi_io_state_o_9),
    .io_state_o_10(chi_io_state_o_10),
    .io_state_o_11(chi_io_state_o_11),
    .io_state_o_12(chi_io_state_o_12),
    .io_state_o_13(chi_io_state_o_13),
    .io_state_o_14(chi_io_state_o_14),
    .io_state_o_15(chi_io_state_o_15),
    .io_state_o_16(chi_io_state_o_16),
    .io_state_o_17(chi_io_state_o_17),
    .io_state_o_18(chi_io_state_o_18),
    .io_state_o_19(chi_io_state_o_19),
    .io_state_o_20(chi_io_state_o_20),
    .io_state_o_21(chi_io_state_o_21),
    .io_state_o_22(chi_io_state_o_22),
    .io_state_o_23(chi_io_state_o_23),
    .io_state_o_24(chi_io_state_o_24)
  );
  IotaModule iota ( // @[dpath.scala 27:20]
    .io_state_i_0(iota_io_state_i_0),
    .io_state_i_1(iota_io_state_i_1),
    .io_state_i_2(iota_io_state_i_2),
    .io_state_i_3(iota_io_state_i_3),
    .io_state_i_4(iota_io_state_i_4),
    .io_state_i_5(iota_io_state_i_5),
    .io_state_i_6(iota_io_state_i_6),
    .io_state_i_7(iota_io_state_i_7),
    .io_state_i_8(iota_io_state_i_8),
    .io_state_i_9(iota_io_state_i_9),
    .io_state_i_10(iota_io_state_i_10),
    .io_state_i_11(iota_io_state_i_11),
    .io_state_i_12(iota_io_state_i_12),
    .io_state_i_13(iota_io_state_i_13),
    .io_state_i_14(iota_io_state_i_14),
    .io_state_i_15(iota_io_state_i_15),
    .io_state_i_16(iota_io_state_i_16),
    .io_state_i_17(iota_io_state_i_17),
    .io_state_i_18(iota_io_state_i_18),
    .io_state_i_19(iota_io_state_i_19),
    .io_state_i_20(iota_io_state_i_20),
    .io_state_i_21(iota_io_state_i_21),
    .io_state_i_22(iota_io_state_i_22),
    .io_state_i_23(iota_io_state_i_23),
    .io_state_i_24(iota_io_state_i_24),
    .io_state_o_0(iota_io_state_o_0),
    .io_state_o_1(iota_io_state_o_1),
    .io_state_o_2(iota_io_state_o_2),
    .io_state_o_3(iota_io_state_o_3),
    .io_state_o_4(iota_io_state_o_4),
    .io_state_o_5(iota_io_state_o_5),
    .io_state_o_6(iota_io_state_o_6),
    .io_state_o_7(iota_io_state_o_7),
    .io_state_o_8(iota_io_state_o_8),
    .io_state_o_9(iota_io_state_o_9),
    .io_state_o_10(iota_io_state_o_10),
    .io_state_o_11(iota_io_state_o_11),
    .io_state_o_12(iota_io_state_o_12),
    .io_state_o_13(iota_io_state_o_13),
    .io_state_o_14(iota_io_state_o_14),
    .io_state_o_15(iota_io_state_o_15),
    .io_state_o_16(iota_io_state_o_16),
    .io_state_o_17(iota_io_state_o_17),
    .io_state_o_18(iota_io_state_o_18),
    .io_state_o_19(iota_io_state_o_19),
    .io_state_o_20(iota_io_state_o_20),
    .io_state_o_21(iota_io_state_o_21),
    .io_state_o_22(iota_io_state_o_22),
    .io_state_o_23(iota_io_state_o_23),
    .io_state_o_24(iota_io_state_o_24),
    .io_round(iota_io_round)
  );
  assign io_state_o_0 = iota_io_state_o_0; // @[dpath.scala 35:14]
  assign io_state_o_1 = iota_io_state_o_1; // @[dpath.scala 35:14]
  assign io_state_o_2 = iota_io_state_o_2; // @[dpath.scala 35:14]
  assign io_state_o_3 = iota_io_state_o_3; // @[dpath.scala 35:14]
  assign io_state_o_4 = iota_io_state_o_4; // @[dpath.scala 35:14]
  assign io_state_o_5 = iota_io_state_o_5; // @[dpath.scala 35:14]
  assign io_state_o_6 = iota_io_state_o_6; // @[dpath.scala 35:14]
  assign io_state_o_7 = iota_io_state_o_7; // @[dpath.scala 35:14]
  assign io_state_o_8 = iota_io_state_o_8; // @[dpath.scala 35:14]
  assign io_state_o_9 = iota_io_state_o_9; // @[dpath.scala 35:14]
  assign io_state_o_10 = iota_io_state_o_10; // @[dpath.scala 35:14]
  assign io_state_o_11 = iota_io_state_o_11; // @[dpath.scala 35:14]
  assign io_state_o_12 = iota_io_state_o_12; // @[dpath.scala 35:14]
  assign io_state_o_13 = iota_io_state_o_13; // @[dpath.scala 35:14]
  assign io_state_o_14 = iota_io_state_o_14; // @[dpath.scala 35:14]
  assign io_state_o_15 = iota_io_state_o_15; // @[dpath.scala 35:14]
  assign io_state_o_16 = iota_io_state_o_16; // @[dpath.scala 35:14]
  assign io_state_o_17 = iota_io_state_o_17; // @[dpath.scala 35:14]
  assign io_state_o_18 = iota_io_state_o_18; // @[dpath.scala 35:14]
  assign io_state_o_19 = iota_io_state_o_19; // @[dpath.scala 35:14]
  assign io_state_o_20 = iota_io_state_o_20; // @[dpath.scala 35:14]
  assign io_state_o_21 = iota_io_state_o_21; // @[dpath.scala 35:14]
  assign io_state_o_22 = iota_io_state_o_22; // @[dpath.scala 35:14]
  assign io_state_o_23 = iota_io_state_o_23; // @[dpath.scala 35:14]
  assign io_state_o_24 = iota_io_state_o_24; // @[dpath.scala 35:14]
  assign theta_io_state_i_0 = io_state_i_0; // @[dpath.scala 30:20]
  assign theta_io_state_i_1 = io_state_i_1; // @[dpath.scala 30:20]
  assign theta_io_state_i_2 = io_state_i_2; // @[dpath.scala 30:20]
  assign theta_io_state_i_3 = io_state_i_3; // @[dpath.scala 30:20]
  assign theta_io_state_i_4 = io_state_i_4; // @[dpath.scala 30:20]
  assign theta_io_state_i_5 = io_state_i_5; // @[dpath.scala 30:20]
  assign theta_io_state_i_6 = io_state_i_6; // @[dpath.scala 30:20]
  assign theta_io_state_i_7 = io_state_i_7; // @[dpath.scala 30:20]
  assign theta_io_state_i_8 = io_state_i_8; // @[dpath.scala 30:20]
  assign theta_io_state_i_9 = io_state_i_9; // @[dpath.scala 30:20]
  assign theta_io_state_i_10 = io_state_i_10; // @[dpath.scala 30:20]
  assign theta_io_state_i_11 = io_state_i_11; // @[dpath.scala 30:20]
  assign theta_io_state_i_12 = io_state_i_12; // @[dpath.scala 30:20]
  assign theta_io_state_i_13 = io_state_i_13; // @[dpath.scala 30:20]
  assign theta_io_state_i_14 = io_state_i_14; // @[dpath.scala 30:20]
  assign theta_io_state_i_15 = io_state_i_15; // @[dpath.scala 30:20]
  assign theta_io_state_i_16 = io_state_i_16; // @[dpath.scala 30:20]
  assign theta_io_state_i_17 = io_state_i_17; // @[dpath.scala 30:20]
  assign theta_io_state_i_18 = io_state_i_18; // @[dpath.scala 30:20]
  assign theta_io_state_i_19 = io_state_i_19; // @[dpath.scala 30:20]
  assign theta_io_state_i_20 = io_state_i_20; // @[dpath.scala 30:20]
  assign theta_io_state_i_21 = io_state_i_21; // @[dpath.scala 30:20]
  assign theta_io_state_i_22 = io_state_i_22; // @[dpath.scala 30:20]
  assign theta_io_state_i_23 = io_state_i_23; // @[dpath.scala 30:20]
  assign theta_io_state_i_24 = io_state_i_24; // @[dpath.scala 30:20]
  assign rhopi_io_state_i_0 = theta_io_state_o_0; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_1 = theta_io_state_o_1; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_2 = theta_io_state_o_2; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_3 = theta_io_state_o_3; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_4 = theta_io_state_o_4; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_5 = theta_io_state_o_5; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_6 = theta_io_state_o_6; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_7 = theta_io_state_o_7; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_8 = theta_io_state_o_8; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_9 = theta_io_state_o_9; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_10 = theta_io_state_o_10; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_11 = theta_io_state_o_11; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_12 = theta_io_state_o_12; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_13 = theta_io_state_o_13; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_14 = theta_io_state_o_14; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_15 = theta_io_state_o_15; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_16 = theta_io_state_o_16; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_17 = theta_io_state_o_17; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_18 = theta_io_state_o_18; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_19 = theta_io_state_o_19; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_20 = theta_io_state_o_20; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_21 = theta_io_state_o_21; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_22 = theta_io_state_o_22; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_23 = theta_io_state_o_23; // @[dpath.scala 31:20]
  assign rhopi_io_state_i_24 = theta_io_state_o_24; // @[dpath.scala 31:20]
  assign chi_io_state_i_0 = rhopi_io_state_o_0; // @[dpath.scala 32:18]
  assign chi_io_state_i_1 = rhopi_io_state_o_1; // @[dpath.scala 32:18]
  assign chi_io_state_i_2 = rhopi_io_state_o_2; // @[dpath.scala 32:18]
  assign chi_io_state_i_3 = rhopi_io_state_o_3; // @[dpath.scala 32:18]
  assign chi_io_state_i_4 = rhopi_io_state_o_4; // @[dpath.scala 32:18]
  assign chi_io_state_i_5 = rhopi_io_state_o_5; // @[dpath.scala 32:18]
  assign chi_io_state_i_6 = rhopi_io_state_o_6; // @[dpath.scala 32:18]
  assign chi_io_state_i_7 = rhopi_io_state_o_7; // @[dpath.scala 32:18]
  assign chi_io_state_i_8 = rhopi_io_state_o_8; // @[dpath.scala 32:18]
  assign chi_io_state_i_9 = rhopi_io_state_o_9; // @[dpath.scala 32:18]
  assign chi_io_state_i_10 = rhopi_io_state_o_10; // @[dpath.scala 32:18]
  assign chi_io_state_i_11 = rhopi_io_state_o_11; // @[dpath.scala 32:18]
  assign chi_io_state_i_12 = rhopi_io_state_o_12; // @[dpath.scala 32:18]
  assign chi_io_state_i_13 = rhopi_io_state_o_13; // @[dpath.scala 32:18]
  assign chi_io_state_i_14 = rhopi_io_state_o_14; // @[dpath.scala 32:18]
  assign chi_io_state_i_15 = rhopi_io_state_o_15; // @[dpath.scala 32:18]
  assign chi_io_state_i_16 = rhopi_io_state_o_16; // @[dpath.scala 32:18]
  assign chi_io_state_i_17 = rhopi_io_state_o_17; // @[dpath.scala 32:18]
  assign chi_io_state_i_18 = rhopi_io_state_o_18; // @[dpath.scala 32:18]
  assign chi_io_state_i_19 = rhopi_io_state_o_19; // @[dpath.scala 32:18]
  assign chi_io_state_i_20 = rhopi_io_state_o_20; // @[dpath.scala 32:18]
  assign chi_io_state_i_21 = rhopi_io_state_o_21; // @[dpath.scala 32:18]
  assign chi_io_state_i_22 = rhopi_io_state_o_22; // @[dpath.scala 32:18]
  assign chi_io_state_i_23 = rhopi_io_state_o_23; // @[dpath.scala 32:18]
  assign chi_io_state_i_24 = rhopi_io_state_o_24; // @[dpath.scala 32:18]
  assign iota_io_state_i_0 = chi_io_state_o_0; // @[dpath.scala 33:19]
  assign iota_io_state_i_1 = chi_io_state_o_1; // @[dpath.scala 33:19]
  assign iota_io_state_i_2 = chi_io_state_o_2; // @[dpath.scala 33:19]
  assign iota_io_state_i_3 = chi_io_state_o_3; // @[dpath.scala 33:19]
  assign iota_io_state_i_4 = chi_io_state_o_4; // @[dpath.scala 33:19]
  assign iota_io_state_i_5 = chi_io_state_o_5; // @[dpath.scala 33:19]
  assign iota_io_state_i_6 = chi_io_state_o_6; // @[dpath.scala 33:19]
  assign iota_io_state_i_7 = chi_io_state_o_7; // @[dpath.scala 33:19]
  assign iota_io_state_i_8 = chi_io_state_o_8; // @[dpath.scala 33:19]
  assign iota_io_state_i_9 = chi_io_state_o_9; // @[dpath.scala 33:19]
  assign iota_io_state_i_10 = chi_io_state_o_10; // @[dpath.scala 33:19]
  assign iota_io_state_i_11 = chi_io_state_o_11; // @[dpath.scala 33:19]
  assign iota_io_state_i_12 = chi_io_state_o_12; // @[dpath.scala 33:19]
  assign iota_io_state_i_13 = chi_io_state_o_13; // @[dpath.scala 33:19]
  assign iota_io_state_i_14 = chi_io_state_o_14; // @[dpath.scala 33:19]
  assign iota_io_state_i_15 = chi_io_state_o_15; // @[dpath.scala 33:19]
  assign iota_io_state_i_16 = chi_io_state_o_16; // @[dpath.scala 33:19]
  assign iota_io_state_i_17 = chi_io_state_o_17; // @[dpath.scala 33:19]
  assign iota_io_state_i_18 = chi_io_state_o_18; // @[dpath.scala 33:19]
  assign iota_io_state_i_19 = chi_io_state_o_19; // @[dpath.scala 33:19]
  assign iota_io_state_i_20 = chi_io_state_o_20; // @[dpath.scala 33:19]
  assign iota_io_state_i_21 = chi_io_state_o_21; // @[dpath.scala 33:19]
  assign iota_io_state_i_22 = chi_io_state_o_22; // @[dpath.scala 33:19]
  assign iota_io_state_i_23 = chi_io_state_o_23; // @[dpath.scala 33:19]
  assign iota_io_state_i_24 = chi_io_state_o_24; // @[dpath.scala 33:19]
  assign iota_io_round = io_round; // @[dpath.scala 34:17]
endmodule
module CtrlModule(
  input         clock,
  input         reset,
  input         io_message_val,
  output        io_message_rdy,
  output        io_hash_val,
  input         io_hash_rdy,
  input  [63:0] io_message_0,
  input  [63:0] io_message_1,
  input  [63:0] io_message_2,
  input  [63:0] io_message_3,
  input  [63:0] io_message_4,
  input  [63:0] io_message_5,
  input  [63:0] io_message_6,
  input  [63:0] io_message_7,
  input  [63:0] io_message_8,
  input  [63:0] io_message_9,
  input  [63:0] io_message_10,
  input  [63:0] io_message_11,
  input  [63:0] io_message_12,
  input  [63:0] io_message_13,
  input  [63:0] io_message_14,
  input  [63:0] io_message_15,
  input  [63:0] io_message_16,
  output [63:0] io_hash_0,
  output [63:0] io_hash_1,
  output [63:0] io_hash_2,
  output [63:0] io_hash_3
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] dpath_io_state_i_0; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_1; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_2; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_3; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_4; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_5; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_6; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_7; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_8; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_9; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_10; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_11; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_12; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_13; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_14; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_15; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_16; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_17; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_18; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_19; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_20; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_21; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_22; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_23; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_i_24; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_0; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_1; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_2; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_3; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_4; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_5; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_6; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_7; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_8; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_9; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_10; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_11; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_12; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_13; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_14; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_15; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_16; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_17; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_18; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_19; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_20; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_21; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_22; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_23; // @[ctrl.scala 29:21]
  wire [63:0] dpath_io_state_o_24; // @[ctrl.scala 29:21]
  wire [4:0] dpath_io_round; // @[ctrl.scala 29:21]
  reg  encryptReady; // @[ctrl.scala 24:29]
  reg  messageReady; // @[ctrl.scala 25:29]
  reg [63:0] temp_0; // @[ctrl.scala 30:21]
  reg [63:0] temp_1; // @[ctrl.scala 30:21]
  reg [63:0] temp_2; // @[ctrl.scala 30:21]
  reg [63:0] temp_3; // @[ctrl.scala 30:21]
  reg [63:0] temp_4; // @[ctrl.scala 30:21]
  reg [63:0] temp_5; // @[ctrl.scala 30:21]
  reg [63:0] temp_6; // @[ctrl.scala 30:21]
  reg [63:0] temp_7; // @[ctrl.scala 30:21]
  reg [63:0] temp_8; // @[ctrl.scala 30:21]
  reg [63:0] temp_9; // @[ctrl.scala 30:21]
  reg [63:0] temp_10; // @[ctrl.scala 30:21]
  reg [63:0] temp_11; // @[ctrl.scala 30:21]
  reg [63:0] temp_12; // @[ctrl.scala 30:21]
  reg [63:0] temp_13; // @[ctrl.scala 30:21]
  reg [63:0] temp_14; // @[ctrl.scala 30:21]
  reg [63:0] temp_15; // @[ctrl.scala 30:21]
  reg [63:0] temp_16; // @[ctrl.scala 30:21]
  reg [63:0] temp_17; // @[ctrl.scala 30:21]
  reg [63:0] temp_18; // @[ctrl.scala 30:21]
  reg [63:0] temp_19; // @[ctrl.scala 30:21]
  reg [63:0] temp_20; // @[ctrl.scala 30:21]
  reg [63:0] temp_21; // @[ctrl.scala 30:21]
  reg [63:0] temp_22; // @[ctrl.scala 30:21]
  reg [63:0] temp_23; // @[ctrl.scala 30:21]
  reg [63:0] temp_24; // @[ctrl.scala 30:21]
  reg [4:0] round; // @[ctrl.scala 31:22]
  reg  roundsDone; // @[ctrl.scala 32:27]
  wire  _GEN_25 = messageReady & io_message_val ? 1'h0 : messageReady; // @[ctrl.scala 42:41 51:18 25:29]
  wire  _GEN_26 = messageReady & io_message_val | encryptReady; // @[ctrl.scala 42:41 52:18 24:29]
  wire [4:0] _round_T_1 = round + 5'h1; // @[ctrl.scala 59:20]
  DpathModule dpath ( // @[ctrl.scala 29:21]
    .io_state_i_0(dpath_io_state_i_0),
    .io_state_i_1(dpath_io_state_i_1),
    .io_state_i_2(dpath_io_state_i_2),
    .io_state_i_3(dpath_io_state_i_3),
    .io_state_i_4(dpath_io_state_i_4),
    .io_state_i_5(dpath_io_state_i_5),
    .io_state_i_6(dpath_io_state_i_6),
    .io_state_i_7(dpath_io_state_i_7),
    .io_state_i_8(dpath_io_state_i_8),
    .io_state_i_9(dpath_io_state_i_9),
    .io_state_i_10(dpath_io_state_i_10),
    .io_state_i_11(dpath_io_state_i_11),
    .io_state_i_12(dpath_io_state_i_12),
    .io_state_i_13(dpath_io_state_i_13),
    .io_state_i_14(dpath_io_state_i_14),
    .io_state_i_15(dpath_io_state_i_15),
    .io_state_i_16(dpath_io_state_i_16),
    .io_state_i_17(dpath_io_state_i_17),
    .io_state_i_18(dpath_io_state_i_18),
    .io_state_i_19(dpath_io_state_i_19),
    .io_state_i_20(dpath_io_state_i_20),
    .io_state_i_21(dpath_io_state_i_21),
    .io_state_i_22(dpath_io_state_i_22),
    .io_state_i_23(dpath_io_state_i_23),
    .io_state_i_24(dpath_io_state_i_24),
    .io_state_o_0(dpath_io_state_o_0),
    .io_state_o_1(dpath_io_state_o_1),
    .io_state_o_2(dpath_io_state_o_2),
    .io_state_o_3(dpath_io_state_o_3),
    .io_state_o_4(dpath_io_state_o_4),
    .io_state_o_5(dpath_io_state_o_5),
    .io_state_o_6(dpath_io_state_o_6),
    .io_state_o_7(dpath_io_state_o_7),
    .io_state_o_8(dpath_io_state_o_8),
    .io_state_o_9(dpath_io_state_o_9),
    .io_state_o_10(dpath_io_state_o_10),
    .io_state_o_11(dpath_io_state_o_11),
    .io_state_o_12(dpath_io_state_o_12),
    .io_state_o_13(dpath_io_state_o_13),
    .io_state_o_14(dpath_io_state_o_14),
    .io_state_o_15(dpath_io_state_o_15),
    .io_state_o_16(dpath_io_state_o_16),
    .io_state_o_17(dpath_io_state_o_17),
    .io_state_o_18(dpath_io_state_o_18),
    .io_state_o_19(dpath_io_state_o_19),
    .io_state_o_20(dpath_io_state_o_20),
    .io_state_o_21(dpath_io_state_o_21),
    .io_state_o_22(dpath_io_state_o_22),
    .io_state_o_23(dpath_io_state_o_23),
    .io_state_o_24(dpath_io_state_o_24),
    .io_round(dpath_io_round)
  );
  assign io_message_rdy = roundsDone & io_hash_rdy | messageReady; // @[ctrl.scala 27:18 64:36 65:20]
  assign io_hash_val = roundsDone & io_hash_rdy; // @[ctrl.scala 64:20]
  assign io_hash_0 = temp_0; // @[ctrl.scala 35:16]
  assign io_hash_1 = temp_1; // @[ctrl.scala 35:16]
  assign io_hash_2 = temp_2; // @[ctrl.scala 35:16]
  assign io_hash_3 = temp_3; // @[ctrl.scala 35:16]
  assign dpath_io_state_i_0 = temp_0; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_1 = temp_1; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_2 = temp_2; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_3 = temp_3; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_4 = temp_4; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_5 = temp_5; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_6 = temp_6; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_7 = temp_7; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_8 = temp_8; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_9 = temp_9; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_10 = temp_10; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_11 = temp_11; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_12 = temp_12; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_13 = temp_13; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_14 = temp_14; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_15 = temp_15; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_16 = temp_16; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_17 = temp_17; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_18 = temp_18; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_19 = temp_19; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_20 = temp_20; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_21 = temp_21; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_22 = temp_22; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_23 = temp_23; // @[ctrl.scala 38:20]
  assign dpath_io_state_i_24 = temp_24; // @[ctrl.scala 38:20]
  assign dpath_io_round = ~roundsDone & encryptReady ? round : 5'h0; // @[ctrl.scala 37:18 57:38 58:20]
  always @(posedge clock) begin
    if (reset) begin // @[ctrl.scala 24:29]
      encryptReady <= 1'h0; // @[ctrl.scala 24:29]
    end else if (roundsDone & io_hash_rdy) begin // @[ctrl.scala 64:36]
      encryptReady <= 1'h0; // @[ctrl.scala 68:18]
    end else begin
      encryptReady <= _GEN_26;
    end
    messageReady <= reset | _GEN_25; // @[ctrl.scala 25:{29,29}]
    if (reset) begin // @[ctrl.scala 30:21]
      temp_0 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_0 <= io_message_0; // @[ctrl.scala 50:10]
    end else begin
      temp_0 <= dpath_io_state_o_0; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_1 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_1 <= io_message_1; // @[ctrl.scala 50:10]
    end else begin
      temp_1 <= dpath_io_state_o_1; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_2 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_2 <= io_message_2; // @[ctrl.scala 50:10]
    end else begin
      temp_2 <= dpath_io_state_o_2; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_3 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_3 <= io_message_3; // @[ctrl.scala 50:10]
    end else begin
      temp_3 <= dpath_io_state_o_3; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_4 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_4 <= io_message_4; // @[ctrl.scala 50:10]
    end else begin
      temp_4 <= dpath_io_state_o_4; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_5 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_5 <= io_message_5; // @[ctrl.scala 50:10]
    end else begin
      temp_5 <= dpath_io_state_o_5; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_6 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_6 <= io_message_6; // @[ctrl.scala 50:10]
    end else begin
      temp_6 <= dpath_io_state_o_6; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_7 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_7 <= io_message_7; // @[ctrl.scala 50:10]
    end else begin
      temp_7 <= dpath_io_state_o_7; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_8 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_8 <= io_message_8; // @[ctrl.scala 50:10]
    end else begin
      temp_8 <= dpath_io_state_o_8; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_9 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_9 <= io_message_9; // @[ctrl.scala 50:10]
    end else begin
      temp_9 <= dpath_io_state_o_9; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_10 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_10 <= io_message_10; // @[ctrl.scala 50:10]
    end else begin
      temp_10 <= dpath_io_state_o_10; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_11 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_11 <= io_message_11; // @[ctrl.scala 50:10]
    end else begin
      temp_11 <= dpath_io_state_o_11; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_12 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_12 <= io_message_12; // @[ctrl.scala 50:10]
    end else begin
      temp_12 <= dpath_io_state_o_12; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_13 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_13 <= io_message_13; // @[ctrl.scala 50:10]
    end else begin
      temp_13 <= dpath_io_state_o_13; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_14 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_14 <= io_message_14; // @[ctrl.scala 50:10]
    end else begin
      temp_14 <= dpath_io_state_o_14; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_15 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_15 <= io_message_15; // @[ctrl.scala 50:10]
    end else begin
      temp_15 <= dpath_io_state_o_15; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_16 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_16 <= io_message_16; // @[ctrl.scala 50:10]
    end else begin
      temp_16 <= dpath_io_state_o_16; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_17 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_17 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_17 <= dpath_io_state_o_17; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_18 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_18 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_18 <= dpath_io_state_o_18; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_19 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_19 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_19 <= dpath_io_state_o_19; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_20 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_20 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_20 <= dpath_io_state_o_20; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_21 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_21 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_21 <= dpath_io_state_o_21; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_22 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_22 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_22 <= dpath_io_state_o_22; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_23 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_23 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_23 <= dpath_io_state_o_23; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 30:21]
      temp_24 <= 64'h0; // @[ctrl.scala 30:21]
    end else if (messageReady & io_message_val) begin // @[ctrl.scala 42:41]
      temp_24 <= 64'h0; // @[ctrl.scala 50:10]
    end else begin
      temp_24 <= dpath_io_state_o_24; // @[ctrl.scala 39:8]
    end
    if (reset) begin // @[ctrl.scala 31:22]
      round <= 5'h0; // @[ctrl.scala 31:22]
    end else if (roundsDone & io_hash_rdy) begin // @[ctrl.scala 64:36]
      round <= 5'h0; // @[ctrl.scala 66:11]
    end else if (~roundsDone & encryptReady) begin // @[ctrl.scala 57:38]
      round <= _round_T_1; // @[ctrl.scala 59:11]
    end
    if (reset) begin // @[ctrl.scala 32:27]
      roundsDone <= 1'h0; // @[ctrl.scala 32:27]
    end else if (~roundsDone & encryptReady) begin // @[ctrl.scala 57:38]
      roundsDone <= _round_T_1 >= 5'h18; // @[ctrl.scala 60:16]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,
            "CTRL_out Round:%d - Vec(%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)\n"
            ,round,temp_0,temp_1,temp_2,temp_3,temp_4,temp_5,temp_6,temp_7,temp_8,temp_9,temp_10,temp_11,temp_12,temp_13
            ,temp_14,temp_15,temp_16,temp_17,temp_18,temp_19,temp_20,temp_21,temp_22,temp_23,temp_24); // @[ctrl.scala 40:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  encryptReady = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  messageReady = _RAND_1[0:0];
  _RAND_2 = {2{`RANDOM}};
  temp_0 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  temp_1 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  temp_2 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  temp_3 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  temp_4 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  temp_5 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  temp_6 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  temp_7 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  temp_8 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  temp_9 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  temp_10 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  temp_11 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  temp_12 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  temp_13 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  temp_14 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  temp_15 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  temp_16 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  temp_17 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  temp_18 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  temp_19 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  temp_20 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  temp_21 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  temp_22 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  temp_23 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  temp_24 = _RAND_26[63:0];
  _RAND_27 = {1{`RANDOM}};
  round = _RAND_27[4:0];
  _RAND_28 = {1{`RANDOM}};
  roundsDone = _RAND_28[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Sha3Accel(
  input         clock,
  input         reset,
  output        io_message_ready,
  input         io_message_valid,
  input  [63:0] io_message_bits_0,
  input  [63:0] io_message_bits_1,
  input  [63:0] io_message_bits_2,
  input  [63:0] io_message_bits_3,
  input  [63:0] io_message_bits_4,
  input  [63:0] io_message_bits_5,
  input  [63:0] io_message_bits_6,
  input  [63:0] io_message_bits_7,
  input  [63:0] io_message_bits_8,
  input  [63:0] io_message_bits_9,
  input  [63:0] io_message_bits_10,
  input  [63:0] io_message_bits_11,
  input  [63:0] io_message_bits_12,
  input  [63:0] io_message_bits_13,
  input  [63:0] io_message_bits_14,
  input  [63:0] io_message_bits_15,
  input  [63:0] io_message_bits_16,
  input         io_hash_ready,
  output        io_hash_valid,
  output [63:0] io_hash_bits_0,
  output [63:0] io_hash_bits_1,
  output [63:0] io_hash_bits_2,
  output [63:0] io_hash_bits_3
);
  wire  ctrl_clock; // @[sha3.scala 22:20]
  wire  ctrl_reset; // @[sha3.scala 22:20]
  wire  ctrl_io_message_val; // @[sha3.scala 22:20]
  wire  ctrl_io_message_rdy; // @[sha3.scala 22:20]
  wire  ctrl_io_hash_val; // @[sha3.scala 22:20]
  wire  ctrl_io_hash_rdy; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_0; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_1; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_2; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_3; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_4; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_5; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_6; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_7; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_8; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_9; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_10; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_11; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_12; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_13; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_14; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_15; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_message_16; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_hash_0; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_hash_1; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_hash_2; // @[sha3.scala 22:20]
  wire [63:0] ctrl_io_hash_3; // @[sha3.scala 22:20]
  CtrlModule ctrl ( // @[sha3.scala 22:20]
    .clock(ctrl_clock),
    .reset(ctrl_reset),
    .io_message_val(ctrl_io_message_val),
    .io_message_rdy(ctrl_io_message_rdy),
    .io_hash_val(ctrl_io_hash_val),
    .io_hash_rdy(ctrl_io_hash_rdy),
    .io_message_0(ctrl_io_message_0),
    .io_message_1(ctrl_io_message_1),
    .io_message_2(ctrl_io_message_2),
    .io_message_3(ctrl_io_message_3),
    .io_message_4(ctrl_io_message_4),
    .io_message_5(ctrl_io_message_5),
    .io_message_6(ctrl_io_message_6),
    .io_message_7(ctrl_io_message_7),
    .io_message_8(ctrl_io_message_8),
    .io_message_9(ctrl_io_message_9),
    .io_message_10(ctrl_io_message_10),
    .io_message_11(ctrl_io_message_11),
    .io_message_12(ctrl_io_message_12),
    .io_message_13(ctrl_io_message_13),
    .io_message_14(ctrl_io_message_14),
    .io_message_15(ctrl_io_message_15),
    .io_message_16(ctrl_io_message_16),
    .io_hash_0(ctrl_io_hash_0),
    .io_hash_1(ctrl_io_hash_1),
    .io_hash_2(ctrl_io_hash_2),
    .io_hash_3(ctrl_io_hash_3)
  );
  assign io_message_ready = ctrl_io_message_rdy; // @[sha3.scala 24:23]
  assign io_hash_valid = ctrl_io_hash_val; // @[sha3.scala 25:20]
  assign io_hash_bits_0 = ctrl_io_hash_0; // @[sha3.scala 30:16]
  assign io_hash_bits_1 = ctrl_io_hash_1; // @[sha3.scala 30:16]
  assign io_hash_bits_2 = ctrl_io_hash_2; // @[sha3.scala 30:16]
  assign io_hash_bits_3 = ctrl_io_hash_3; // @[sha3.scala 30:16]
  assign ctrl_clock = clock;
  assign ctrl_reset = reset;
  assign ctrl_io_message_val = io_message_valid; // @[sha3.scala 23:23]
  assign ctrl_io_hash_rdy = io_hash_ready; // @[sha3.scala 26:20]
  assign ctrl_io_message_0 = io_message_bits_0; // @[sha3.scala 29:19]
  assign ctrl_io_message_1 = io_message_bits_1; // @[sha3.scala 29:19]
  assign ctrl_io_message_2 = io_message_bits_2; // @[sha3.scala 29:19]
  assign ctrl_io_message_3 = io_message_bits_3; // @[sha3.scala 29:19]
  assign ctrl_io_message_4 = io_message_bits_4; // @[sha3.scala 29:19]
  assign ctrl_io_message_5 = io_message_bits_5; // @[sha3.scala 29:19]
  assign ctrl_io_message_6 = io_message_bits_6; // @[sha3.scala 29:19]
  assign ctrl_io_message_7 = io_message_bits_7; // @[sha3.scala 29:19]
  assign ctrl_io_message_8 = io_message_bits_8; // @[sha3.scala 29:19]
  assign ctrl_io_message_9 = io_message_bits_9; // @[sha3.scala 29:19]
  assign ctrl_io_message_10 = io_message_bits_10; // @[sha3.scala 29:19]
  assign ctrl_io_message_11 = io_message_bits_11; // @[sha3.scala 29:19]
  assign ctrl_io_message_12 = io_message_bits_12; // @[sha3.scala 29:19]
  assign ctrl_io_message_13 = io_message_bits_13; // @[sha3.scala 29:19]
  assign ctrl_io_message_14 = io_message_bits_14; // @[sha3.scala 29:19]
  assign ctrl_io_message_15 = io_message_bits_15; // @[sha3.scala 29:19]
  assign ctrl_io_message_16 = io_message_bits_16; // @[sha3.scala 29:19]
endmodule
