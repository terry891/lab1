// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VIotaModule__Syms.h"
#include "VIotaModule.h"
#include "VIotaModule___024root.h"

// FUNCTIONS
VIotaModule__Syms::~VIotaModule__Syms()
{
}

VIotaModule__Syms::VIotaModule__Syms(VerilatedContext* contextp, const char* namep, VIotaModule* modelp)
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
