# 6.6.0默认 --target 是 systemverilog
# --target verilog
# 使用 --target生成的文件是verilog，但是里面有logic，综合报错

MAIN_CLASS = Main
# Counter  LFSR  RAM  FSM

all:
	rm -rf rtl 
	mill _.runMain $(MAIN_CLASS)
	# mill _.run --target-dir rtl --target verilog --disable-all-randomization --strip-debug-info
	# sed -i '/FILE "firrtl_black_box_resource_files.f"/,/End of list/d' rtl/*.v
	sh ./process_sv.sh

sim:
	mill _.test


clean:
	rm -rf out rtl test_run_dir target project

# 新版本出现各种layers，参考下面网站
# https://www.chisel-lang.org/docs/explanations/layers

# https://github.com/chipsalliance/chisel-template