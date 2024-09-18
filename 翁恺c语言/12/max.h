//声明 
//头文件  一个桥梁 
//函数原型放在一个头文件“.h”结尾  相当于是一个连接 
// 源代码文件 “.c”文件 
//声明 声明在.h里 
//定义  定义在.c里 

#ifndef _MAX_H_    标准头文件 让不重复定义 
#define _MAX_H_

int max(int a,int b); //max 的原型 main函数出现max时会跑到这里看对不对 
extern int gAll; 
struct Node{
	int a;
	char b;
};

#endif
