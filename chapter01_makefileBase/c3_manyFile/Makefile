# 第一个目标文件是是我的终极目标：递归
# 第二层
# 	变量 =(替换) +=(追加) :=(恒等于)
# 第三层:隐含规则 
#   %.c %.o 任意的.c文件 
#   *.c *.o 所有的 .c .o 文件
# 第四层: 通配符 $^所有的依赖文件 $< 第一个依赖文件 $@ 表示目标集(即 foo.o bar.o)
cc := g++
INCUDES = -I ./res
objects = circle.o cube.o main.o
TAR = main
RMRF := rm -rf
# 第一个目标文件是是我的终极目标：递归
# main:circle.o cube.o main.o
# 	$(cc) circle.o cube.o main.o -o main

# circle.o:circle.cpp
# 	$(cc) -c circle.cpp -o circle.o 

# cube.o:cube.cpp
# 	$(cc) -c cube.cpp -o cube.o

# main.o:main.cpp
# 	$(cc) -c main.cpp -o main.o

# $(TAR):$(objects)
# 	$(cc) $(objects) -o $(TAB)

# # 第三层
# %.o:%.cpp
# 	$(cc) -c %*.cpp -o %*.o

# 第四层
$(TAR):$(objects)
	$(cc)  $^ -o $@

# 第三层
%.o:%.cpp
ifeq ($(cc),g++)
	$(cc) -c $^ -o $@
else 
	$(cc) -c $^ -o $@

.PHONY: clean # 伪目标
cleanall :
	$(RMRF) $(objects) main
clean :
	$(RMRF) $(objects)