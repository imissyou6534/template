# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_h84412442__1 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_dequant_cell__DepSet_hbda9efb4__0 \
	Vtop_w_buffer_unit__DepSet_h71a8d5d1__0 \
	Vtop_conv_unit__DepSet_ha034d26c__0 \
	Vtop_compare_line_unit__DepSet_hffcf4e7b__0 \
	Vtop_activationFuncDataCell__DepSet_hf1e38852__0 \
	Vtop_activationFuncDataCell__DepSet_h51a2fde4__0 \
	Vtop_linebuf_unit_extend__DepSet_h6d92c807__0 \
	Vtop_linebuf_unit_extend__DepSet_h6d92c807__1 \
	Vtop_linebuf_unit_extend__DepSet_h6d92c807__2 \
	Vtop_conv_win_3_3__DepSet_habac0430__0 \
	Vtop_conv_win_3_3__DepSet_habac0430__1 \
	Vtop_FP32_Adder__DepSet_h82e57771__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_h84412442__1__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_dequant_cell__Slow \
	Vtop_dequant_cell__DepSet_hbda9efb4__0__Slow \
	Vtop_dequant_cell__DepSet_hf4e4b357__0__Slow \
	Vtop_w_buffer_unit__Slow \
	Vtop_w_buffer_unit__DepSet_hb8e5ad3c__0__Slow \
	Vtop_conv_unit__Slow \
	Vtop_conv_unit__DepSet_hb3901454__0__Slow \
	Vtop_compare_line_unit__Slow \
	Vtop_compare_line_unit__DepSet_h334314a6__0__Slow \
	Vtop_activationFuncDataCell__Slow \
	Vtop_activationFuncDataCell__DepSet_hf1e38852__0__Slow \
	Vtop_activationFuncDataCell__DepSet_h98efc507__0__Slow \
	Vtop_linebuf_unit_extend__Slow \
	Vtop_linebuf_unit_extend__DepSet_hc51f9aea__0__Slow \
	Vtop_conv_win_3_3__Slow \
	Vtop_conv_win_3_3__DepSet_hfee25edb__0__Slow \
	Vtop_FP32_Adder__Slow \
	Vtop_FP32_Adder__DepSet_ha3784544__0__Slow \
	Vtop_FP32_Adder__DepSet_h82e57771__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Trace__0 \
	Vtop__Trace__1 \
	Vtop__Trace__2 \
	Vtop__Trace__3 \
	Vtop__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \
	Vtop__Trace__0__Slow \
	Vtop__Trace__1__Slow \
	Vtop__Trace__2__Slow \
	Vtop__Trace__3__Slow \
	Vtop__Trace__4__Slow \
	Vtop__Trace__5__Slow \
	Vtop__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
