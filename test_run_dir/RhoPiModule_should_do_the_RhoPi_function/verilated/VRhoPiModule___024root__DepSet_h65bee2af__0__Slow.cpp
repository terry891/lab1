// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRhoPiModule.h for the primary calling header

#include "verilated.h"

#include "VRhoPiModule___024root.h"

VL_ATTR_COLD void VRhoPiModule___024root___eval_initial(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___eval_initial\n"); );
}

void VRhoPiModule___024root___combo__TOP__0(VRhoPiModule___024root* vlSelf);

VL_ATTR_COLD void VRhoPiModule___024root___eval_settle(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___eval_settle\n"); );
    // Body
    VRhoPiModule___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VRhoPiModule___024root___final(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___final\n"); );
}

VL_ATTR_COLD void VRhoPiModule___024root___ctor_var_reset(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_state_i_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_i_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_state_o_24 = VL_RAND_RESET_Q(64);
}

VL_ATTR_COLD void VRhoPiModule___024root___configure_coverage(VRhoPiModule___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
