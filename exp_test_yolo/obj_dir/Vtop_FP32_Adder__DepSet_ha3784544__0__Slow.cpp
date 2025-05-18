// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_FP32_Adder.h"

VL_ATTR_COLD void Vtop_FP32_Adder___ctor_var_reset(Vtop_FP32_Adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_FP32_Adder___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_x = VL_RAND_RESET_I(32);
    vlSelf->io_y = VL_RAND_RESET_I(32);
    vlSelf->io_z = VL_RAND_RESET_I(32);
    vlSelf->io_valid_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__y_gt_x_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___xf1_0_T_1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT___xf1_0_T_3 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__zs_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ze_a = VL_RAND_RESET_I(8);
    vlSelf->__PVT__xf1_a = VL_RAND_RESET_I(24);
    vlSelf->__PVT__yf1_a = VL_RAND_RESET_I(24);
    vlSelf->__PVT__xe_ye_a = VL_RAND_RESET_I(8);
    vlSelf->__PVT__xs_ys_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__yf2_a0 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__yf2_a1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__yf2_a2 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__yf2_a3 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xs_ys_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__xf1_1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__yf2_1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__ze_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zs_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ze_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zs_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zf_2 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ze_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__zs_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__zf_3 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__offset_3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__underflow_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_z_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__off0__DOT___io_off_T_35 = VL_RAND_RESET_I(4);
}
