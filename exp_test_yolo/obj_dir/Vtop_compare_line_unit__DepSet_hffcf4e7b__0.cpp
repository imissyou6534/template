// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop_compare_line_unit.h"

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_0__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_1__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 8U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 8U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_2__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x10U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x10U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_3__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x18U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x18U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_4__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x20U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x20U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_5__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x28U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x28U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_6__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x30U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x30U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}

VL_INLINE_OPT void Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7__0(Vtop_compare_line_unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_compare_line_unit___nba_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__pool__DOT__pool_7__0\n"); );
    // Body
    vlSelf->__PVT__valid_delay3 = vlSelf->__PVT__valid_delay2;
    vlSelf->__PVT__valid_delay2 = vlSelf->__PVT__valid_delay1;
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out 
        = ((IData)(vlSymsp->TOP.reset) ? 0U : (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out) 
                                                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp))
                                                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp)
                                                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out)));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp 
        = vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0;
    vlSelf->__PVT__valid_delay1 = (0U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT__pool_column__DOT__cmp__DOT__temp_0 
        = vlSelf->__PVT__pool_column__DOT__line_shift_4;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_4_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_3_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_2_r = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 = 0U;
        vlSelf->__PVT__pool_column__DOT__line_shift_1_r = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 0U;
        vlSelf->__PVT__cnt = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 0U;
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 0U;
        vlSelf->__PVT__temp_0 = 0U;
        vlSelf->__PVT__temp_1 = 0U;
        vlSelf->__PVT__temp_2 = 0U;
        vlSelf->__PVT__temp_3 = 0U;
    } else {
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out)
                : (IData)(vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out 
            = (((IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_1)
                : (IData)(vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out));
        vlSelf->__PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out 
            = (((IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2) 
                < (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3))
                ? (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_3)
                : (IData)(vlSelf->__PVT__pool_column__DOT__line_shift_2));
        if ((0U == (IData)(vlSelf->__PVT__cnt))) {
            vlSelf->__PVT__pool_column__DOT__line_shift_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_4_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_4_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_3_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_3_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_2_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_2_r 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_18 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_17 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_16 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_15 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_14 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_13 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_12 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_11 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_10 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_9 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_8 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_7 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_6 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_5 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_4 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_3 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_2 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r_1 
                = vlSelf->__PVT__pool_column__DOT__line_shift_1_r;
            vlSelf->__PVT__pool_column__DOT__line_shift_1_r 
                = vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out;
        }
        vlSelf->__PVT__cmp__DOT__cmp_3__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__temp))
              ? (IData)(vlSelf->__PVT__cmp__DOT__temp)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out));
        if (vlSelf->__PVT__start) {
            vlSelf->__PVT__cnt = ((IData)(vlSelf->__PVT___start_T_1)
                                   ? 0U : (IData)(vlSelf->__PVT___cnt_T_2));
        }
        vlSelf->__PVT__cmp__DOT__cmp_2__DOT__out = 
            (((IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out) 
              < (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out))
              ? (IData)(vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out)
              : (IData)(vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out));
        vlSelf->__PVT__cmp__DOT__cmp_1__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_2) < (IData)(vlSelf->__PVT__temp_3))
              ? (IData)(vlSelf->__PVT__temp_3) : (IData)(vlSelf->__PVT__temp_2));
        vlSelf->__PVT__cmp__DOT__cmp_0__DOT__out = 
            (((IData)(vlSelf->__PVT__temp_0) < (IData)(vlSelf->__PVT__temp_1))
              ? (IData)(vlSelf->__PVT__temp_1) : (IData)(vlSelf->__PVT__temp_0));
        vlSelf->__PVT__temp_0 = vlSelf->__PVT__temp_1;
        vlSelf->__PVT__temp_1 = vlSelf->__PVT__temp_2;
        vlSelf->__PVT__temp_2 = vlSelf->__PVT__temp_3;
        vlSelf->__PVT__temp_3 = (0xffU & (IData)((vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                  >> 0x38U)));
    }
    vlSelf->__PVT__cmp__DOT__temp = vlSelf->__PVT__cmp__DOT__temp_0;
    vlSelf->__PVT___start_T_1 = (4U == (IData)(vlSelf->__PVT__cnt));
    vlSelf->__PVT___cnt_T_2 = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
    vlSelf->__PVT__start = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & ((IData)(vlSelf->__PVT__last) 
                               | (IData)(vlSelf->__PVT___start_T_2)));
    vlSelf->__PVT__cmp__DOT__temp_0 = (0xffU & (IData)(
                                                       (vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__pool_in_data 
                                                        >> 0x38U)));
    vlSelf->__PVT___start_T_2 = ((4U != (IData)(vlSelf->__PVT__cnt)) 
                                 & (IData)(vlSelf->__PVT__start));
    vlSelf->__PVT__last = ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (IData)(vlSelf->__PVT__last_r));
    vlSelf->__PVT__last_r = ((~ (IData)(vlSymsp->TOP.reset)) 
                             & ((~ (IData)(vlSelf->__PVT__last_up_REG)) 
                                & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG)));
    vlSelf->__PVT__last_up_REG = ((~ (IData)(vlSymsp->TOP.reset)) 
                                  & (IData)(vlSymsp->TOP.top__DOT__u_Accel_all__DOT__accel_top__DOT__pool_ctrl__DOT__io_last_data_of_row_REG));
}
