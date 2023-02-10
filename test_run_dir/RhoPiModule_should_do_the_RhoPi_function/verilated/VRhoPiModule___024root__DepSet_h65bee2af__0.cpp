// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRhoPiModule.h for the primary calling header

#include "verilated.h"

#include "VRhoPiModule___024root.h"

VL_INLINE_OPT void VRhoPiModule___024root___combo__TOP__0(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_state_o_0 = vlSelf->io_state_i_0;
    vlSelf->io_state_o_1 = (((QData)((IData)((0xfffffU 
                                              & (IData)(vlSelf->io_state_i_6)))) 
                             << 0x2cU) | (vlSelf->io_state_i_6 
                                          >> 0x14U));
    vlSelf->io_state_o_2 = (((QData)((IData)((0x1fffffU 
                                              & (IData)(vlSelf->io_state_i_12)))) 
                             << 0x2bU) | (vlSelf->io_state_i_12 
                                          >> 0x15U));
    vlSelf->io_state_o_3 = ((vlSelf->io_state_i_18 
                             << 0x15U) | (QData)((IData)(
                                                         (0x1fffffU 
                                                          & (IData)(
                                                                    (vlSelf->io_state_i_18 
                                                                     >> 0x2bU))))));
    vlSelf->io_state_o_4 = ((vlSelf->io_state_i_24 
                             << 0xeU) | (QData)((IData)(
                                                        (0x3fffU 
                                                         & (IData)(
                                                                   (vlSelf->io_state_i_24 
                                                                    >> 0x32U))))));
    vlSelf->io_state_o_5 = ((vlSelf->io_state_i_3 << 0x1cU) 
                            | (QData)((IData)((0xfffffffU 
                                               & (IData)(
                                                         (vlSelf->io_state_i_3 
                                                          >> 0x24U))))));
    vlSelf->io_state_o_6 = ((vlSelf->io_state_i_9 << 0x14U) 
                            | (QData)((IData)((0xfffffU 
                                               & (IData)(
                                                         (vlSelf->io_state_i_9 
                                                          >> 0x2cU))))));
    vlSelf->io_state_o_7 = ((vlSelf->io_state_i_10 
                             << 3U) | (QData)((IData)(
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->io_state_i_10 
                                                                  >> 0x3dU))))));
    vlSelf->io_state_o_8 = (((QData)((IData)((0x7ffffU 
                                              & (IData)(vlSelf->io_state_i_16)))) 
                             << 0x2dU) | (vlSelf->io_state_i_16 
                                          >> 0x13U));
    vlSelf->io_state_o_9 = (((QData)((IData)((7U & (IData)(vlSelf->io_state_i_22)))) 
                             << 0x3dU) | (vlSelf->io_state_i_22 
                                          >> 3U));
    vlSelf->io_state_o_10 = ((vlSelf->io_state_i_1 
                              << 1U) | (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->io_state_i_1 
                                                                   >> 0x3fU))))));
    vlSelf->io_state_o_11 = ((vlSelf->io_state_i_7 
                              << 6U) | (QData)((IData)(
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->io_state_i_7 
                                                                   >> 0x3aU))))));
    vlSelf->io_state_o_12 = ((vlSelf->io_state_i_13 
                              << 0x19U) | (QData)((IData)(
                                                          (0x1ffffffU 
                                                           & (IData)(
                                                                     (vlSelf->io_state_i_13 
                                                                      >> 0x27U))))));
    vlSelf->io_state_o_13 = ((vlSelf->io_state_i_19 
                              << 8U) | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->io_state_i_19 
                                                                   >> 0x38U))))));
    vlSelf->io_state_o_14 = ((vlSelf->io_state_i_20 
                              << 0x12U) | (QData)((IData)(
                                                          (0x3ffffU 
                                                           & (IData)(
                                                                     (vlSelf->io_state_i_20 
                                                                      >> 0x2eU))))));
    vlSelf->io_state_o_15 = ((vlSelf->io_state_i_4 
                              << 0x1bU) | (QData)((IData)(
                                                          (0x7ffffffU 
                                                           & (IData)(
                                                                     (vlSelf->io_state_i_4 
                                                                      >> 0x25U))))));
    vlSelf->io_state_o_16 = (((QData)((IData)((0xfffffffU 
                                               & (IData)(vlSelf->io_state_i_5)))) 
                              << 0x24U) | (vlSelf->io_state_i_5 
                                           >> 0x1cU));
    vlSelf->io_state_o_17 = ((vlSelf->io_state_i_11 
                              << 0xaU) | (QData)((IData)(
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlSelf->io_state_i_11 
                                                                     >> 0x36U))))));
    vlSelf->io_state_o_18 = ((vlSelf->io_state_i_17 
                              << 0xfU) | (QData)((IData)(
                                                         (0x7fffU 
                                                          & (IData)(
                                                                    (vlSelf->io_state_i_17 
                                                                     >> 0x31U))))));
    vlSelf->io_state_o_19 = (((QData)((IData)((0xffU 
                                               & (IData)(vlSelf->io_state_i_23)))) 
                              << 0x38U) | (vlSelf->io_state_i_23 
                                           >> 8U));
    vlSelf->io_state_o_20 = (((QData)((IData)((3U & (IData)(vlSelf->io_state_i_2)))) 
                              << 0x3eU) | (vlSelf->io_state_i_2 
                                           >> 2U));
    vlSelf->io_state_o_21 = (((QData)((IData)((0x1ffU 
                                               & (IData)(vlSelf->io_state_i_8)))) 
                              << 0x37U) | (vlSelf->io_state_i_8 
                                           >> 9U));
    vlSelf->io_state_o_22 = (((QData)((IData)((0x1ffffffU 
                                               & (IData)(vlSelf->io_state_i_14)))) 
                              << 0x27U) | (vlSelf->io_state_i_14 
                                           >> 0x19U));
    vlSelf->io_state_o_23 = (((QData)((IData)((0x7fffffU 
                                               & (IData)(vlSelf->io_state_i_15)))) 
                              << 0x29U) | (vlSelf->io_state_i_15 
                                           >> 0x17U));
    vlSelf->io_state_o_24 = ((vlSelf->io_state_i_21 
                              << 2U) | (QData)((IData)(
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->io_state_i_21 
                                                                   >> 0x3eU))))));
}

void VRhoPiModule___024root___eval(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___eval\n"); );
    // Body
    VRhoPiModule___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VRhoPiModule___024root___eval_debug_assertions(VRhoPiModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRhoPiModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRhoPiModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
