# 第一层: 显示规则
# 目标文件：依赖文件
# [TAB]指令

# 第一个目标文件是是我的终极目标：递归
# 第二层
# 	变量 =(替换) +=(追加) :=(恒等于)
cc := g++

hello:hello.o
	$(cc) hello.o -o hello

hello.o:hello.S
	$(cc) -c hello.S -o hello.o

hello.S:hello.i
	$(cc) -S hello.i -o hello.S

hello.i:hello.cpp
	$(cc) -E hello.cpp -o hello.i

.PHONY: # 伪目标
cleanall :
	rm hello.o hello.i hello.S 
clean :
	rm hello.o