VERSION = 1.0.0		#程序版本号

SOURCE = $(wildcard ./src/*.c)	#获取所有的.c文件
OBJ = $(patsubst %.c, %.o, $(SOURCE))	#将.c文件转为.o文件
INCLUDES = -I./h	#头文件路径

LIBS = -ldylib		#库文件名字
LIB_PATH = -L./lib	#库文件地址

DEBUG = -D_MACRO	#宏定义
CFLAGS = -Wall -c	#编译标志位

TARGET = app
CC = gcc

$(TARGET): $(OBJ)	
	@mkdir -p output/	#创建一个目录，用于存放已编译的目标
	$(CC) $(OBJ) $(LIB_PATH) $(LIBS) -o output/$(TARGET).$(VERSION)

%.o: %.c
	$(CC) $(INCLUDES) $(DEBUG) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ) output/ 
