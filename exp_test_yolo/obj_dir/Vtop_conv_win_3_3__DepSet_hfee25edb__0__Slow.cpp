// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop_conv_win_3_3.h"

VL_ATTR_COLD void Vtop_conv_win_3_3___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_0__0(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___stl_sequent__TOP__top__DOT__u_Accel_all__DOT__accel_top__DOT__conv__DOT__conv_unit_0__conv_33_0__0\n"); );
    // Body
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = (0xffffU 
                                                 & ((IData)(
                                                            (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                             >> 0x10U)) 
                                                    + 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT 
                                                                >> 0xfU)))));
}

VL_ATTR_COLD void Vtop_conv_win_3_3___ctor_var_reset(Vtop_conv_win_3_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_conv_win_3_3___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_ifm_win_33_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_4 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_5 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_6 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_7 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_ifm_win_33_8 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_4 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_5 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_6 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_7 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch1_8 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_3 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_4 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_5 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_6 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_7 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_weight_win_33_ch2_8 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__io_o_conv_ch1 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__io_o_conv_ch2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_0__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_1__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_2__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_3__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_4__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_5__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_6__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_7__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__D_PORT_REG = VL_RAND_RESET_I(24);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__B_PORT_REG_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__A_Plus_D = VL_RAND_RESET_I(25);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__MULT_RES = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__mult_8__DOT__cal_mult__DOT__DOUT = VL_RAND_RESET_Q(41);
    vlSelf->__PVT__addtree_0__DOT__addtree_a1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a4 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a6 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a7 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a8 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_a9 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__addtree_0__DOT__addtree_dout = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b1_d2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b2_d2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_0__DOT__addtree__DOT__b3_d2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_1__DOT__addtree_dout = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b1_d2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b2_d2 = VL_RAND_RESET_I(18);
    vlSelf->__PVT__addtree_1__DOT__addtree__DOT__b3_d2 = VL_RAND_RESET_I(18);
}
