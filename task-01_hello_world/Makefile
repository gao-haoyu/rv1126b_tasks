# =========================
# 基本配置
# =========================
TARGET := task_01_hello_world
SRC_DIR := src
INC_DIR := include
OUT_DIR := output

CC := gcc
CFLAGS := -Wall -Wextra -O2 -I$(INC_DIR)
LDFLAGS :=

# 自动查找 src 目录下所有 .c 文件
SRCS := $(wildcard $(SRC_DIR)/*.c)

# 生成对应的目标文件，放到 output 目录
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OUT_DIR)/%.o,$(SRCS))

# 最终可执行文件
TARGET_FILE := $(OUT_DIR)/$(TARGET)

# =========================
# 默认目标
# =========================
.PHONY: all clean

all: $(TARGET_FILE)

# 链接
$(TARGET_FILE): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# 编译
$(OUT_DIR)/%.o: $(SRC_DIR)/%.c | $(OUT_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# 创建输出目录
$(OUT_DIR):
	mkdir -p $(OUT_DIR)

# 清理
clean:
	rm -rf $(OUT_DIR)