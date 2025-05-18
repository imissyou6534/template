// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_dequant_cell.h"

VL_ATTR_COLD void Vtop_dequant_cell___ctor_var_reset(Vtop_dequant_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_dequant_cell___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_en = VL_RAND_RESET_I(1);
    vlSelf->io_i_data = VL_RAND_RESET_I(8);
    vlSelf->io_scale = VL_RAND_RESET_I(32);
    vlSelf->io_o_data = VL_RAND_RESET_I(32);
    vlSelf->io_zero_point = VL_RAND_RESET_I(8);
    vlSelf->__PVT__convert_data_convert_io_i_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sub_module__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->__PVT__convert_data_convert__DOT__i_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__convert_data_convert__DOT__i_uint = VL_RAND_RESET_I(31);
    vlSelf->__PVT__convert_data_convert__DOT__float_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__convert_data_convert__DOT__float_exp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__convert_data_convert__DOT__float_frac = VL_RAND_RESET_I(23);
    vlSelf->__PVT__convert_data_convert__DOT___GEN_35 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__convert_data_convert__DOT___GEN_42 = VL_RAND_RESET_I(23);
    vlSelf->__PVT__fp32_data_muler__DOT__is_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fp32_data_muler__DOT___zf_0_T_2 = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__fp32_data_muler__DOT__zf_1 = VL_RAND_RESET_I(25);
    vlSelf->__PVT__fp32_data_muler__DOT__valid_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fp32_data_muler__DOT__carry_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fp32_data_muler__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fp32_data_muler__DOT__ze_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fp32_data_muler__DOT__out_z_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fp32_data_muler__DOT__io_z_r = VL_RAND_RESET_I(32);
}
