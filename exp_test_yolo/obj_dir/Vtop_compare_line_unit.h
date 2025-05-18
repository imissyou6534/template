// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_COMPARE_LINE_UNIT_H_
#define VERILATED_VTOP_COMPARE_LINE_UNIT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_compare_line_unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_input,7,0);
        VL_IN8(io_last_data_of_row,0,0);
        VL_OUT8(io_output,7,0);
        VL_OUT8(io_outdata_valid,0,0);
        CData/*0:0*/ __PVT__start;
        CData/*0:0*/ __PVT__last_up_REG;
        CData/*0:0*/ __PVT__last_r;
        CData/*0:0*/ __PVT__last;
        CData/*2:0*/ __PVT__cnt;
        CData/*0:0*/ __PVT___start_T_1;
        CData/*0:0*/ __PVT___start_T_2;
        CData/*2:0*/ __PVT___cnt_T_2;
        CData/*0:0*/ __PVT__valid_delay1;
        CData/*0:0*/ __PVT__valid_delay2;
        CData/*0:0*/ __PVT__valid_delay3;
        CData/*7:0*/ __PVT__temp_0;
        CData/*7:0*/ __PVT__temp_1;
        CData/*7:0*/ __PVT__temp_2;
        CData/*7:0*/ __PVT__temp_3;
        CData/*7:0*/ __PVT__cmp__DOT__temp_0;
        CData/*7:0*/ __PVT__cmp__DOT__temp;
        CData/*7:0*/ __PVT__cmp__DOT__cmp_0__DOT__out;
        CData/*7:0*/ __PVT__cmp__DOT__cmp_1__DOT__out;
        CData/*7:0*/ __PVT__cmp__DOT__cmp_2__DOT__out;
        CData/*7:0*/ __PVT__cmp__DOT__cmp_3__DOT__out;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_1;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_2;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_3;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_4;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_5;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_6;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_7;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_8;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_9;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_10;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_11;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_12;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_13;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_14;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_15;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_16;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_17;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1_r_18;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_1;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_1;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_2;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_3;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_4;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_5;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_6;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_7;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_8;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_9;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_10;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_11;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_12;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_13;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_14;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_15;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_16;
    };
    struct {
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_17;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2_r_18;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_2;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_1;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_2;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_3;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_4;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_5;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_6;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_7;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_8;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_9;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_10;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_11;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_12;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_13;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_14;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_15;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_16;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_17;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3_r_18;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_3;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_1;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_2;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_3;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_4;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_5;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_6;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_7;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_8;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_9;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_10;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_11;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_12;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_13;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_14;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_15;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_16;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_17;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4_r_18;
        CData/*7:0*/ __PVT__pool_column__DOT__line_shift_4;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__temp_0;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__temp;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__cmp_0__DOT__out;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__cmp_1__DOT__out;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__cmp_2__DOT__out;
        CData/*7:0*/ __PVT__pool_column__DOT__cmp__DOT__cmp_3__DOT__out;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_compare_line_unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_compare_line_unit();
    VL_UNCOPYABLE(Vtop_compare_line_unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
