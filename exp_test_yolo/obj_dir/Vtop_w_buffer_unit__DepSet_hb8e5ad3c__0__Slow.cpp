// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_w_buffer_unit.h"

VL_ATTR_COLD void Vtop_w_buffer_unit___ctor_var_reset(Vtop_w_buffer_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_w_buffer_unit___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->io_write_addr_0 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_1 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_2 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_3 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_4 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_5 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_6 = VL_RAND_RESET_I(7);
    vlSelf->io_write_addr_7 = VL_RAND_RESET_I(7);
    vlSelf->io_write_en_0 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_1 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_2 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_3 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_4 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_5 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_6 = VL_RAND_RESET_I(1);
    vlSelf->io_write_en_7 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->io_weight_in);
    vlSelf->io_read_addr = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_0);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_1);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_2);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_3);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_4);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_5);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_6);
    VL_RAND_RESET_W(72, vlSelf->io_weight_out_7);
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_1__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_1__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_2__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_2__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_3__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_3__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_4__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_4__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_5__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_5__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_6__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_6__DOT__tpram__DOT__mem[__Vi0]);
    }
    VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_7__DOT__tpram_QA);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->__PVT__TPRAM_WRAP_7__DOT__tpram__DOT__mem[__Vi0]);
    }
}
