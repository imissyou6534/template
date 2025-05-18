# 获取 OpenCV 编译参数
OPENCV_CFLAGS := $(shell pkg-config --cflags opencv4)
OPENCV_LDFLAGS := $(shell pkg-config --libs opencv4)



# verilator
TOP_NAME = top
TOP_TYPE = .v
WAVE_MAIN = sim_fst
TOP_FILE = $(TOP_NAME)$(TOP_TYPE)

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

VERILATOR_FLAGS += --cc --exe --build -j 0
VERILATOR_FLAGS += --trace-fst -Irtl    # 生成FST波形文件
VERILATOR_FLAGS += -Irtl
VERILATOR_FLAGS += -Wno-fatal


# opencv
# 将 OpenCV 参数合并到 Verilator 的 CFLAGS 和 LDFLAGS 中
VERILATOR_FLAGS += -CFLAGS "$(USER_INCLUDE) $(OPENCV_CFLAGS)"
VERILATOR_FLAGS += -LDFLAGS "$(OPENCV_LDFLAGS)"
# -Wall 启用所有警告。
# VERILATOR_FLAGS += -Wall -Wno-UNUSED  # 开启警告选项

# 用户源文件配置
USER_SRCS = sim_fst/sim_main.cpp
USER_SRCS += $(wildcard sim_fst/src/*.cpp)
USER_INCLUDE = -I../sim_fst/include -I.  # 头文件搜索路径

# Verilog源文件
VERILOG_SRC = rtl/$(TOP_FILE)

# 将包含路径传递给C++编译器
VERILATOR_FLAGS += -CFLAGS "$(USER_INCLUDE)"

# 默认目标
all: compile run wave

compile:
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC) $(USER_SRCS)

run:
	@echo "Running simulation..."
	./obj_dir/Vtop

wave:
	@echo "-- DONE --------------------"
	@echo "-- GTKWAVE -----------------"
	gtkwave $(WAVE_MAIN)/simx.fst

clean:
	rm -rf obj_dir $(WAVE_MAIN)/*.fst

.PHONY: all compile run wave clean
