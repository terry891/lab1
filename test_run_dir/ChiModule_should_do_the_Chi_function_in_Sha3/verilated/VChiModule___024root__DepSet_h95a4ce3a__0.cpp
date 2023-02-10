// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiModule.h for the primary calling header

#include "verilated.h"

#include "VChiModule___024root.h"

VL_INLINE_OPT void VChiModule___024root___combo__TOP__0(VChiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiModule___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_state_o_0 = (vlSelf->io_state_i_0 ^ 
                            ((~ vlSelf->io_state_i_1) 
                             & vlSelf->io_state_i_2));
    vlSelf->io_state_o_1 = (vlSelf->io_state_i_1 ^ 
                            ((~ vlSelf->io_state_i_2) 
                             & vlSelf->io_state_i_3));
    vlSelf->io_state_o_2 = (vlSelf->io_state_i_2 ^ 
                            ((~ vlSelf->io_state_i_3) 
                             & vlSelf->io_state_i_4));
    vlSelf->io_state_o_3 = (vlSelf->io_state_i_3 ^ 
                            ((~ vlSelf->io_state_i_4) 
                             & vlSelf->io_state_i_0));
    vlSelf->io_state_o_4 = (vlSelf->io_state_i_4 ^ 
                            ((~ vlSelf->io_state_i_0) 
                             & vlSelf->io_state_i_1));
    vlSelf->io_state_o_5 = (vlSelf->io_state_i_5 ^ 
                            ((~ vlSelf->io_state_i_6) 
                             & vlSelf->io_state_i_7));
    vlSelf->io_state_o_6 = (vlSelf->io_state_i_6 ^ 
                            ((~ vlSelf->io_state_i_7) 
                             & vlSelf->io_state_i_8));
    vlSelf->io_state_o_7 = (vlSelf->io_state_i_7 ^ 
                            ((~ vlSelf->io_state_i_8) 
                             & vlSelf->io_state_i_9));
    vlSelf->io_state_o_8 = (vlSelf->io_state_i_8 ^ 
                            ((~ vlSelf->io_state_i_9) 
                             & vlSelf->io_state_i_5));
    vlSelf->io_state_o_9 = (vlSelf->io_state_i_9 ^ 
                            ((~ vlSelf->io_state_i_5) 
                             & vlSelf->io_state_i_6));
    vlSelf->io_state_o_10 = (vlSelf->io_state_i_10 
                             ^ ((~ vlSelf->io_state_i_11) 
                                & vlSelf->io_state_i_12));
    vlSelf->io_state_o_11 = (vlSelf->io_state_i_11 
                             ^ ((~ vlSelf->io_state_i_12) 
                                & vlSelf->io_state_i_13));
    vlSelf->io_state_o_12 = (vlSelf->io_state_i_12 
                             ^ ((~ vlSelf->io_state_i_13) 
                                & vlSelf->io_state_i_14));
    vlSelf->io_state_o_13 = (vlSelf->io_state_i_13 
                             ^ ((~ vlSelf->io_state_i_14) 
                                & vlSelf->io_state_i_10));
    vlSelf->io_state_o_14 = (vlSelf->io_state_i_14 
                             ^ ((~ vlSelf->io_state_i_10) 
                                & vlSelf->io_state_i_11));
    vlSelf->io_state_o_15 = (vlSelf->io_state_i_15 
                             ^ ((~ vlSelf->io_state_i_16) 
                                & vlSelf->io_state_i_17));
    vlSelf->io_state_o_16 = (vlSelf->io_state_i_16 
                             ^ ((~ vlSelf->io_state_i_17) 
                                & vlSelf->io_state_i_18));
    vlSelf->io_state_o_17 = (vlSelf->io_state_i_17 
                             ^ ((~ vlSelf->io_state_i_18) 
                                & vlSelf->io_state_i_19));
    vlSelf->io_state_o_18 = (vlSelf->io_state_i_18 
                             ^ ((~ vlSelf->io_state_i_19) 
                                & vlSelf->io_state_i_15));
    vlSelf->io_state_o_19 = (vlSelf->io_state_i_19 
                             ^ ((~ vlSelf->io_state_i_15) 
                                & vlSelf->io_state_i_16));
    vlSelf->io_state_o_20 = (vlSelf->io_state_i_20 
                             ^ ((~ vlSelf->io_state_i_21) 
                                & vlSelf->io_state_i_22));
    vlSelf->io_state_o_21 = (vlSelf->io_state_i_21 
                             ^ ((~ vlSelf->io_state_i_22) 
                                & vlSelf->io_state_i_23));
    vlSelf->io_state_o_22 = (vlSelf->io_state_i_22 
                             ^ ((~ vlSelf->io_state_i_23) 
                                & vlSelf->io_state_i_24));
    vlSelf->io_state_o_23 = (vlSelf->io_state_i_23 
                             ^ ((~ vlSelf->io_state_i_24) 
                                & vlSelf->io_state_i_20));
    vlSelf->io_state_o_24 = (vlSelf->io_state_i_24 
                             ^ ((~ vlSelf->io_state_i_20) 
                                & vlSelf->io_state_i_21));
}

void VChiModule___024root___eval(VChiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiModule___024root___eval\n"); );
    // Body
    VChiModule___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VChiModule___024root___eval_debug_assertions(VChiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
