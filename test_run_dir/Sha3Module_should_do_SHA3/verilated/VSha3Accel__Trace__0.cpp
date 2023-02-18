// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSha3Accel__Syms.h"


void VSha3Accel___024root__trace_chg_sub_0(VSha3Accel___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSha3Accel___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_chg_top_0\n"); );
    // Init
    VSha3Accel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSha3Accel___024root*>(voidSelf);
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSha3Accel___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSha3Accel___024root__trace_chg_sub_0(VSha3Accel___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hb1ac96fb__0;
    VlWide<3>/*95:0*/ __Vtemp_hf269d6c7__0;
    VlWide<3>/*95:0*/ __Vtemp_h7b6161fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h63f35153__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2ad4748__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_0),64);
        bufp->chgQData(oldp+2,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1),64);
        bufp->chgQData(oldp+4,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2),64);
        bufp->chgQData(oldp+6,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3),64);
        bufp->chgQData(oldp+8,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4),64);
        bufp->chgQData(oldp+10,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5),64);
        bufp->chgQData(oldp+12,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6),64);
        bufp->chgQData(oldp+14,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7),64);
        bufp->chgQData(oldp+16,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8),64);
        bufp->chgQData(oldp+18,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9),64);
        bufp->chgQData(oldp+20,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10),64);
        bufp->chgQData(oldp+22,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11),64);
        bufp->chgQData(oldp+24,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12),64);
        bufp->chgQData(oldp+26,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13),64);
        bufp->chgQData(oldp+28,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14),64);
        bufp->chgQData(oldp+30,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15),64);
        bufp->chgQData(oldp+32,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16),64);
        bufp->chgQData(oldp+34,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17),64);
        bufp->chgQData(oldp+36,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18),64);
        bufp->chgQData(oldp+38,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19),64);
        bufp->chgQData(oldp+40,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20),64);
        bufp->chgQData(oldp+42,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21),64);
        bufp->chgQData(oldp+44,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22),64);
        bufp->chgQData(oldp+46,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23),64);
        bufp->chgQData(oldp+48,(vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24),64);
        bufp->chgQData(oldp+50,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 
                                  ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1) 
                                     & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2)) 
                                 ^ ((0x17U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                     ? 0x8000000080008008ULL
                                     : ((0x16U == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                         ? 0x80000001ULL
                                         : ((0x15U 
                                             == (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round))
                                             ? 0x8000000000008080ULL
                                             : vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__iota__DOT___GEN_20))))),64);
        bufp->chgQData(oldp+52,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3))),64);
        bufp->chgQData(oldp+54,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4))),64);
        bufp->chgQData(oldp+56,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0))),64);
        bufp->chgQData(oldp+58,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1))),64);
        bufp->chgQData(oldp+60,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7))),64);
        bufp->chgQData(oldp+62,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8))),64);
        bufp->chgQData(oldp+64,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9))),64);
        bufp->chgQData(oldp+66,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5))),64);
        bufp->chgQData(oldp+68,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6))),64);
        bufp->chgQData(oldp+70,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12))),64);
        bufp->chgQData(oldp+72,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13))),64);
        bufp->chgQData(oldp+74,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14))),64);
        bufp->chgQData(oldp+76,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10))),64);
        bufp->chgQData(oldp+78,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11))),64);
        bufp->chgQData(oldp+80,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17))),64);
        bufp->chgQData(oldp+82,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18))),64);
        bufp->chgQData(oldp+84,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19))),64);
        bufp->chgQData(oldp+86,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15))),64);
        bufp->chgQData(oldp+88,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16))),64);
        bufp->chgQData(oldp+90,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22))),64);
        bufp->chgQData(oldp+92,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23))),64);
        bufp->chgQData(oldp+94,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24))),64);
        bufp->chgQData(oldp+96,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20))),64);
        bufp->chgQData(oldp+98,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24 
                                 ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20) 
                                    & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21))),64);
        bufp->chgCData(oldp+100,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath_io_round),5);
        bufp->chgBit(oldp+101,(vlSelf->Sha3Accel__DOT__ctrl__DOT__encryptReady));
        bufp->chgBit(oldp+102,(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady));
        bufp->chgCData(oldp+103,(vlSelf->Sha3Accel__DOT__ctrl__DOT__round),5);
        bufp->chgBit(oldp+104,(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone));
        bufp->chgQData(oldp+105,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0),64);
        bufp->chgQData(oldp+107,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_1 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
        bufp->chgQData(oldp+109,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_2 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
        bufp->chgQData(oldp+111,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_3 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
        bufp->chgQData(oldp+113,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_4 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
        bufp->chgQData(oldp+115,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_5 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
        bufp->chgQData(oldp+117,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_6 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
        bufp->chgQData(oldp+119,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_7 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
        bufp->chgQData(oldp+121,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_8 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
        bufp->chgQData(oldp+123,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_9 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
        bufp->chgQData(oldp+125,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_10 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
        bufp->chgQData(oldp+127,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_11 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
        bufp->chgQData(oldp+129,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_12 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
        bufp->chgQData(oldp+131,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_13 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
        bufp->chgQData(oldp+133,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_14 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
        bufp->chgQData(oldp+135,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_15 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
        bufp->chgQData(oldp+137,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_16 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
        bufp->chgQData(oldp+139,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_17 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
        bufp->chgQData(oldp+141,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_18 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
        bufp->chgQData(oldp+143,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_19 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
        bufp->chgQData(oldp+145,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_20 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp)),64);
        bufp->chgQData(oldp+147,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_21 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1)),64);
        bufp->chgQData(oldp+149,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_22 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2)),64);
        bufp->chgQData(oldp+151,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_23 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3)),64);
        bufp->chgQData(oldp+153,((vlSelf->Sha3Accel__DOT__ctrl__DOT__temp_24 
                                  ^ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4)),64);
        bufp->chgQData(oldp+155,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1),64);
        bufp->chgQData(oldp+157,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2),64);
        bufp->chgQData(oldp+159,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3),64);
        bufp->chgQData(oldp+161,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4),64);
        bufp->chgQData(oldp+163,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5),64);
        bufp->chgQData(oldp+165,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6),64);
        bufp->chgQData(oldp+167,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7),64);
        bufp->chgQData(oldp+169,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8),64);
        bufp->chgQData(oldp+171,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9),64);
        bufp->chgQData(oldp+173,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10),64);
        bufp->chgQData(oldp+175,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11),64);
        bufp->chgQData(oldp+177,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12),64);
        bufp->chgQData(oldp+179,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13),64);
        bufp->chgQData(oldp+181,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14),64);
        bufp->chgQData(oldp+183,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15),64);
        bufp->chgQData(oldp+185,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16),64);
        bufp->chgQData(oldp+187,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17),64);
        bufp->chgQData(oldp+189,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18),64);
        bufp->chgQData(oldp+191,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19),64);
        bufp->chgQData(oldp+193,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20),64);
        bufp->chgQData(oldp+195,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21),64);
        bufp->chgQData(oldp+197,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22),64);
        bufp->chgQData(oldp+199,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23),64);
        bufp->chgQData(oldp+201,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24),64);
        bufp->chgQData(oldp+203,((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0 
                                  ^ ((~ vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1) 
                                     & vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2))),64);
        bufp->chgQData(oldp+205,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0),64);
        bufp->chgQData(oldp+207,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1),64);
        bufp->chgQData(oldp+209,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2),64);
        bufp->chgQData(oldp+211,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3),64);
        bufp->chgQData(oldp+213,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4),64);
        VL_EXTEND_WI(65,1, __Vtemp_hb1ac96fb__0, (1U 
                                                  & (IData)(
                                                            (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
                                                             >> 0x3fU))));
        bufp->chgQData(oldp+215,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1 
                                   << 1U) | (((QData)((IData)(
                                                              __Vtemp_hb1ac96fb__0[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_hb1ac96fb__0[0U]))))),64);
        bufp->chgQData(oldp+217,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp),64);
        VL_EXTEND_WI(65,1, __Vtemp_hf269d6c7__0, (1U 
                                                  & (IData)(
                                                            (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
                                                             >> 0x3fU))));
        bufp->chgQData(oldp+219,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2 
                                   << 1U) | (((QData)((IData)(
                                                              __Vtemp_hf269d6c7__0[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_hf269d6c7__0[0U]))))),64);
        bufp->chgQData(oldp+221,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1),64);
        VL_EXTEND_WI(65,1, __Vtemp_h7b6161fe__0, (1U 
                                                  & (IData)(
                                                            (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
                                                             >> 0x3fU))));
        bufp->chgQData(oldp+223,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3 
                                   << 1U) | (((QData)((IData)(
                                                              __Vtemp_h7b6161fe__0[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_h7b6161fe__0[0U]))))),64);
        bufp->chgQData(oldp+225,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2),64);
        VL_EXTEND_WI(65,1, __Vtemp_h63f35153__0, (1U 
                                                  & (IData)(
                                                            (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
                                                             >> 0x3fU))));
        bufp->chgQData(oldp+227,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4 
                                   << 1U) | (((QData)((IData)(
                                                              __Vtemp_h63f35153__0[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_h63f35153__0[0U]))))),64);
        bufp->chgQData(oldp+229,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3),64);
        VL_EXTEND_WI(65,1, __Vtemp_ha2ad4748__0, (1U 
                                                  & (IData)(
                                                            (vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
                                                             >> 0x3fU))));
        bufp->chgQData(oldp+231,(((vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0 
                                   << 1U) | (((QData)((IData)(
                                                              __Vtemp_ha2ad4748__0[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp_ha2ad4748__0[0U]))))),64);
        bufp->chgQData(oldp+233,(vlSelf->Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4),64);
    }
    bufp->chgBit(oldp+235,(vlSelf->clock));
    bufp->chgBit(oldp+236,(vlSelf->reset));
    bufp->chgBit(oldp+237,(vlSelf->io_message_ready));
    bufp->chgBit(oldp+238,(vlSelf->io_message_valid));
    bufp->chgQData(oldp+239,(vlSelf->io_message_bits_0),64);
    bufp->chgQData(oldp+241,(vlSelf->io_message_bits_1),64);
    bufp->chgQData(oldp+243,(vlSelf->io_message_bits_2),64);
    bufp->chgQData(oldp+245,(vlSelf->io_message_bits_3),64);
    bufp->chgQData(oldp+247,(vlSelf->io_message_bits_4),64);
    bufp->chgQData(oldp+249,(vlSelf->io_message_bits_5),64);
    bufp->chgQData(oldp+251,(vlSelf->io_message_bits_6),64);
    bufp->chgQData(oldp+253,(vlSelf->io_message_bits_7),64);
    bufp->chgQData(oldp+255,(vlSelf->io_message_bits_8),64);
    bufp->chgQData(oldp+257,(vlSelf->io_message_bits_9),64);
    bufp->chgQData(oldp+259,(vlSelf->io_message_bits_10),64);
    bufp->chgQData(oldp+261,(vlSelf->io_message_bits_11),64);
    bufp->chgQData(oldp+263,(vlSelf->io_message_bits_12),64);
    bufp->chgQData(oldp+265,(vlSelf->io_message_bits_13),64);
    bufp->chgQData(oldp+267,(vlSelf->io_message_bits_14),64);
    bufp->chgQData(oldp+269,(vlSelf->io_message_bits_15),64);
    bufp->chgQData(oldp+271,(vlSelf->io_message_bits_16),64);
    bufp->chgBit(oldp+273,(vlSelf->io_hash_ready));
    bufp->chgBit(oldp+274,(vlSelf->io_hash_valid));
    bufp->chgQData(oldp+275,(vlSelf->io_hash_bits_0),64);
    bufp->chgQData(oldp+277,(vlSelf->io_hash_bits_1),64);
    bufp->chgQData(oldp+279,(vlSelf->io_hash_bits_2),64);
    bufp->chgQData(oldp+281,(vlSelf->io_hash_bits_3),64);
    bufp->chgBit(oldp+283,((((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                             & (IData)(vlSelf->io_hash_ready)) 
                            | (IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__messageReady))));
    bufp->chgBit(oldp+284,(((IData)(vlSelf->Sha3Accel__DOT__ctrl__DOT__roundsDone) 
                            & (IData)(vlSelf->io_hash_ready))));
}

void VSha3Accel___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSha3Accel___024root__trace_cleanup\n"); );
    // Init
    VSha3Accel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSha3Accel___024root*>(voidSelf);
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
