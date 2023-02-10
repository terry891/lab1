module RhoPiModule(
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
