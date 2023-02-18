// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSha3Accel.h"
#include "VSha3Accel__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSha3Accel::VSha3Accel(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSha3Accel__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_message_ready{vlSymsp->TOP.io_message_ready}
    , io_message_valid{vlSymsp->TOP.io_message_valid}
    , io_hash_ready{vlSymsp->TOP.io_hash_ready}
    , io_hash_valid{vlSymsp->TOP.io_hash_valid}
    , io_message_bits_0{vlSymsp->TOP.io_message_bits_0}
    , io_message_bits_1{vlSymsp->TOP.io_message_bits_1}
    , io_message_bits_2{vlSymsp->TOP.io_message_bits_2}
    , io_message_bits_3{vlSymsp->TOP.io_message_bits_3}
    , io_message_bits_4{vlSymsp->TOP.io_message_bits_4}
    , io_message_bits_5{vlSymsp->TOP.io_message_bits_5}
    , io_message_bits_6{vlSymsp->TOP.io_message_bits_6}
    , io_message_bits_7{vlSymsp->TOP.io_message_bits_7}
    , io_message_bits_8{vlSymsp->TOP.io_message_bits_8}
    , io_message_bits_9{vlSymsp->TOP.io_message_bits_9}
    , io_message_bits_10{vlSymsp->TOP.io_message_bits_10}
    , io_message_bits_11{vlSymsp->TOP.io_message_bits_11}
    , io_message_bits_12{vlSymsp->TOP.io_message_bits_12}
    , io_message_bits_13{vlSymsp->TOP.io_message_bits_13}
    , io_message_bits_14{vlSymsp->TOP.io_message_bits_14}
    , io_message_bits_15{vlSymsp->TOP.io_message_bits_15}
    , io_message_bits_16{vlSymsp->TOP.io_message_bits_16}
    , io_hash_bits_0{vlSymsp->TOP.io_hash_bits_0}
    , io_hash_bits_1{vlSymsp->TOP.io_hash_bits_1}
    , io_hash_bits_2{vlSymsp->TOP.io_hash_bits_2}
    , io_hash_bits_3{vlSymsp->TOP.io_hash_bits_3}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSha3Accel::VSha3Accel(const char* _vcname__)
    : VSha3Accel(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSha3Accel::~VSha3Accel() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSha3Accel___024root___eval_initial(VSha3Accel___024root* vlSelf);
void VSha3Accel___024root___eval_settle(VSha3Accel___024root* vlSelf);
void VSha3Accel___024root___eval(VSha3Accel___024root* vlSelf);
#ifdef VL_DEBUG
void VSha3Accel___024root___eval_debug_assertions(VSha3Accel___024root* vlSelf);
#endif  // VL_DEBUG
void VSha3Accel___024root___final(VSha3Accel___024root* vlSelf);

static void _eval_initial_loop(VSha3Accel__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSha3Accel___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSha3Accel___024root___eval_settle(&(vlSymsp->TOP));
        VSha3Accel___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSha3Accel::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSha3Accel::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSha3Accel___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSha3Accel___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VSha3Accel::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSha3Accel::final() {
    VSha3Accel___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSha3Accel::hierName() const { return vlSymsp->name(); }
const char* VSha3Accel::modelName() const { return "VSha3Accel"; }
unsigned VSha3Accel::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VSha3Accel::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSha3Accel___024root__trace_init_top(VSha3Accel___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSha3Accel___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSha3Accel___024root*>(voidSelf);
    VSha3Accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSha3Accel___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSha3Accel___024root__trace_register(VSha3Accel___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSha3Accel::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSha3Accel::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSha3Accel___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
