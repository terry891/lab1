// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSha3Accel__Syms.h"
#include "VSha3Accel.h"
#include "VSha3Accel___024root.h"

// FUNCTIONS
VSha3Accel__Syms::~VSha3Accel__Syms()
{
}

VSha3Accel__Syms::VSha3Accel__Syms(VerilatedContext* contextp, const char* namep, VSha3Accel* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
