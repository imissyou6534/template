// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_conv_unit.h"
#include "Vtop_conv_win_3_3.h"

VL_INLINE_OPT void Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__0(Vtop_conv_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_0__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_0__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_0__DOT__temp_2));
    vlSelf->__PVT__addtree_1__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_1__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_1__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_1__DOT__temp_2));
    vlSelf->__PVT__addtree_0__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_0__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP__DOT__tpram_QA
                                                    : 0U)));
    vlSelf->__PVT__addtree_1__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_1__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_1__DOT__tpram_QA
                                                    : 0U)));
}

VL_INLINE_OPT void Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__0(Vtop_conv_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_1__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_0__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_0__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_0__DOT__temp_2));
    vlSelf->__PVT__addtree_1__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_1__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_1__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_1__DOT__temp_2));
    vlSelf->__PVT__addtree_0__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_0__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_2__DOT__tpram_QA
                                                    : 0U)));
    vlSelf->__PVT__addtree_1__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_1__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_3__DOT__tpram_QA
                                                    : 0U)));
}

VL_INLINE_OPT void Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__0(Vtop_conv_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_2__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_0__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_0__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_0__DOT__temp_2));
    vlSelf->__PVT__addtree_1__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_1__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_1__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_1__DOT__temp_2));
    vlSelf->__PVT__addtree_0__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_0__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_4__DOT__tpram_QA
                                                    : 0U)));
    vlSelf->__PVT__addtree_1__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_1__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_5__DOT__tpram_QA
                                                    : 0U)));
}

VL_INLINE_OPT void Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__0(Vtop_conv_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_conv_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_3__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_0__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_0__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_0__DOT__temp_2));
    vlSelf->__PVT__addtree_1__DOT__temp_3 = (0x3ffffU 
                                             & ((vlSelf->__PVT__addtree_1__DOT__temp_0 
                                                 + vlSelf->__PVT__addtree_1__DOT__temp_1) 
                                                + vlSelf->__PVT__addtree_1__DOT__temp_2));
    vlSelf->__PVT__addtree_0__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_0__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_0__DOT__addtree_dout));
    vlSelf->__PVT__addtree_0__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_0__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_0__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_6__DOT__tpram_QA
                                                    : 0U)));
    vlSelf->__PVT__addtree_1__DOT__temp_0 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_0->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_1->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_2->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_1 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_3->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_4->__PVT__addtree_1__DOT__addtree_dout) 
                                                + vlSelf->__PVT__conv_33_5->__PVT__addtree_1__DOT__addtree_dout));
    vlSelf->__PVT__addtree_1__DOT__temp_2 = (0x3ffffU 
                                             & ((vlSelf->__PVT__conv_33_6->__PVT__addtree_1__DOT__addtree_dout 
                                                 + vlSelf->__PVT__conv_33_7->__PVT__addtree_1__DOT__addtree_dout) 
                                                + (
                                                   (0x80U 
                                                    & vlSymsp->TOP.top__DOT__u_Accel_all__DOT__control__DOT__reg_t_0)
                                                    ? vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__bias_buf__DOT__TPRAM_WRAP_7__DOT__tpram_QA
                                                    : 0U)));
}
