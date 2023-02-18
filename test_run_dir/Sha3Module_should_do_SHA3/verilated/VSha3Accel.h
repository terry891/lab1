// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSHA3ACCEL_H_
#define VERILATED_VSHA3ACCEL_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class VSha3Accel__Syms;
class VSha3Accel___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VSha3Accel VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VSha3Accel__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_message_ready,0,0);
    VL_IN8(&io_message_valid,0,0);
    VL_IN8(&io_hash_ready,0,0);
    VL_OUT8(&io_hash_valid,0,0);
    VL_IN64(&io_message_bits_0,63,0);
    VL_IN64(&io_message_bits_1,63,0);
    VL_IN64(&io_message_bits_2,63,0);
    VL_IN64(&io_message_bits_3,63,0);
    VL_IN64(&io_message_bits_4,63,0);
    VL_IN64(&io_message_bits_5,63,0);
    VL_IN64(&io_message_bits_6,63,0);
    VL_IN64(&io_message_bits_7,63,0);
    VL_IN64(&io_message_bits_8,63,0);
    VL_IN64(&io_message_bits_9,63,0);
    VL_IN64(&io_message_bits_10,63,0);
    VL_IN64(&io_message_bits_11,63,0);
    VL_IN64(&io_message_bits_12,63,0);
    VL_IN64(&io_message_bits_13,63,0);
    VL_IN64(&io_message_bits_14,63,0);
    VL_IN64(&io_message_bits_15,63,0);
    VL_IN64(&io_message_bits_16,63,0);
    VL_OUT64(&io_hash_bits_0,63,0);
    VL_OUT64(&io_hash_bits_1,63,0);
    VL_OUT64(&io_hash_bits_2,63,0);
    VL_OUT64(&io_hash_bits_3,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSha3Accel___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VSha3Accel(VerilatedContext* contextp, const char* name = "TOP");
    explicit VSha3Accel(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VSha3Accel();
  private:
    VL_UNCOPYABLE(VSha3Accel);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
