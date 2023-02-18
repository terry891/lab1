// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSha3Accel.h for the primary calling header

#ifndef VERILATED_VSHA3ACCEL___024ROOT_H_
#define VERILATED_VSHA3ACCEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VSha3Accel__Syms;

class VSha3Accel___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_message_ready,0,0);
        VL_IN8(io_message_valid,0,0);
        VL_IN8(io_hash_ready,0,0);
        VL_OUT8(io_hash_valid,0,0);
        CData/*4:0*/ Sha3Accel__DOT__ctrl__DOT__dpath_io_round;
        CData/*0:0*/ Sha3Accel__DOT__ctrl__DOT__encryptReady;
        CData/*0:0*/ Sha3Accel__DOT__ctrl__DOT__messageReady;
        CData/*4:0*/ Sha3Accel__DOT__ctrl__DOT__round;
        CData/*0:0*/ Sha3Accel__DOT__ctrl__DOT__roundsDone;
        CData/*0:0*/ Sha3Accel__DOT__ctrl__DOT___GEN_25;
        CData/*0:0*/ Sha3Accel__DOT__ctrl__DOT___GEN_26;
        CData/*4:0*/ Sha3Accel__DOT__ctrl__DOT___round_T_1;
        CData/*0:0*/ __Vclklast__TOP__clock;
        VL_IN64(io_message_bits_0,63,0);
        VL_IN64(io_message_bits_1,63,0);
        VL_IN64(io_message_bits_2,63,0);
        VL_IN64(io_message_bits_3,63,0);
        VL_IN64(io_message_bits_4,63,0);
        VL_IN64(io_message_bits_5,63,0);
        VL_IN64(io_message_bits_6,63,0);
        VL_IN64(io_message_bits_7,63,0);
        VL_IN64(io_message_bits_8,63,0);
        VL_IN64(io_message_bits_9,63,0);
        VL_IN64(io_message_bits_10,63,0);
        VL_IN64(io_message_bits_11,63,0);
        VL_IN64(io_message_bits_12,63,0);
        VL_IN64(io_message_bits_13,63,0);
        VL_IN64(io_message_bits_14,63,0);
        VL_IN64(io_message_bits_15,63,0);
        VL_IN64(io_message_bits_16,63,0);
        VL_OUT64(io_hash_bits_0,63,0);
        VL_OUT64(io_hash_bits_1,63,0);
        VL_OUT64(io_hash_bits_2,63,0);
        VL_OUT64(io_hash_bits_3,63,0);
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_0;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_1;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_2;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_3;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_4;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_5;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_6;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_7;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_8;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_9;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_10;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_11;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_12;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_13;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_14;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_15;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_16;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_17;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_18;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_19;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_20;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_21;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_22;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_23;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__temp_24;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta_io_state_o_0;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_1;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_2;
    };
    struct {
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_3;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_4;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_5;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_6;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_7;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_8;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_9;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_10;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_11;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_12;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_13;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_14;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_15;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_16;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_17;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_18;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_19;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_20;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_21;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_22;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_23;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__rhopi_io_state_o_24;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_0;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_1;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_2;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_3;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__bc_4;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_1;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_2;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_3;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__theta__DOT__tmp_4;
        QData/*63:0*/ Sha3Accel__DOT__ctrl__DOT__dpath__DOT__iota__DOT___GEN_20;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VSha3Accel__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSha3Accel___024root(VSha3Accel__Syms* symsp, const char* name);
    ~VSha3Accel___024root();
    VL_UNCOPYABLE(VSha3Accel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
