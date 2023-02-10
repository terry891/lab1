// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIotaModule.h for the primary calling header

#include "verilated.h"

#include "VIotaModule___024root.h"

VL_INLINE_OPT void VIotaModule___024root___combo__TOP__0(VIotaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root___combo__TOP__0\n"); );
    // Init
    QData/*63:0*/ IotaModule__DOT___GEN_20;
    // Body
    vlSelf->io_state_o_1 = vlSelf->io_state_i_1;
    vlSelf->io_state_o_2 = vlSelf->io_state_i_2;
    vlSelf->io_state_o_3 = vlSelf->io_state_i_3;
    vlSelf->io_state_o_4 = vlSelf->io_state_i_4;
    vlSelf->io_state_o_5 = vlSelf->io_state_i_5;
    vlSelf->io_state_o_6 = vlSelf->io_state_i_6;
    vlSelf->io_state_o_7 = vlSelf->io_state_i_7;
    vlSelf->io_state_o_8 = vlSelf->io_state_i_8;
    vlSelf->io_state_o_9 = vlSelf->io_state_i_9;
    vlSelf->io_state_o_10 = vlSelf->io_state_i_10;
    vlSelf->io_state_o_11 = vlSelf->io_state_i_11;
    vlSelf->io_state_o_12 = vlSelf->io_state_i_12;
    vlSelf->io_state_o_13 = vlSelf->io_state_i_13;
    vlSelf->io_state_o_14 = vlSelf->io_state_i_14;
    vlSelf->io_state_o_15 = vlSelf->io_state_i_15;
    vlSelf->io_state_o_16 = vlSelf->io_state_i_16;
    vlSelf->io_state_o_17 = vlSelf->io_state_i_17;
    vlSelf->io_state_o_18 = vlSelf->io_state_i_18;
    vlSelf->io_state_o_19 = vlSelf->io_state_i_19;
    vlSelf->io_state_o_20 = vlSelf->io_state_i_20;
    vlSelf->io_state_o_21 = vlSelf->io_state_i_21;
    vlSelf->io_state_o_22 = vlSelf->io_state_i_22;
    vlSelf->io_state_o_23 = vlSelf->io_state_i_23;
    vlSelf->io_state_o_24 = vlSelf->io_state_i_24;
    IotaModule__DOT___GEN_20 = ((0x14U == (IData)(vlSelf->io_round))
                                 ? 0x8000000080008081ULL
                                 : ((0x13U == (IData)(vlSelf->io_round))
                                     ? 0x800000008000000aULL
                                     : ((0x12U == (IData)(vlSelf->io_round))
                                         ? 0x800aULL
                                         : ((0x11U 
                                             == (IData)(vlSelf->io_round))
                                             ? 0x8000000000000080ULL
                                             : ((0x10U 
                                                 == (IData)(vlSelf->io_round))
                                                 ? 0x8000000000008002ULL
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->io_round))
                                                  ? 0x8000000000008003ULL
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->io_round))
                                                   ? 0x8000000000008089ULL
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->io_round))
                                                    ? 0x800000000000008bULL
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->io_round))
                                                     ? 0x8000808bULL
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->io_round))
                                                      ? 0x8000000aULL
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->io_round))
                                                       ? 0x80008009ULL
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->io_round))
                                                        ? 0x88ULL
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->io_round))
                                                         ? 0x8aULL
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->io_round))
                                                          ? 0x8000000000008009ULL
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->io_round))
                                                           ? 0x8000000080008081ULL
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->io_round))
                                                            ? 0x80000001ULL
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->io_round))
                                                             ? 0x808bULL
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->io_round))
                                                              ? 0x8000000080008000ULL
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_round))
                                                               ? 0x800000000000808aULL
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->io_round))
                                                                ? 0x8082ULL
                                                                : 1ULL))))))))))))))))))));
    vlSelf->io_state_o_0 = (vlSelf->io_state_i_0 ^ 
                            ((0x17U == (IData)(vlSelf->io_round))
                              ? 0x8000000080008008ULL
                              : ((0x16U == (IData)(vlSelf->io_round))
                                  ? 0x80000001ULL : 
                                 ((0x15U == (IData)(vlSelf->io_round))
                                   ? 0x8000000000008080ULL
                                   : IotaModule__DOT___GEN_20))));
}

void VIotaModule___024root___eval(VIotaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root___eval\n"); );
    // Body
    VIotaModule___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VIotaModule___024root___eval_debug_assertions(VIotaModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIotaModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIotaModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_round & 0xe0U))) {
        Verilated::overWidthError("io_round");}
}
#endif  // VL_DEBUG
