//#include <stdio.h>//预处理 
//
//// 有值的宏 
////const double PI = 3.14159;
//#define PI 3.14159  //pi是宏的名字 3.xx是宏的值   预处理让所有pi都替换成3.xxx 
//#define PI2 2*PI //!!!不要“；” 这是预处理 不是句子 
//#define PRT printf("%f ",PI);\
//			printf("%f\n",PI2)   			
////  "\"表示没完还 
//
////没有值的宏
//#define _DEBUG 
//
//int main(int argc,char const *argv[])
//{
//	//printf("%f\n",2*PI*3);
//	printf("%f\n",PI2*3);
//	//printf("%f\n",2*3.14159*3.0);
//	PRT;
//	
//	return 0;
//}


//__FILE__,  	该文件目录 
//__LINE__	所执行语句所在行 
//__DATE__,	日期 月 日 年 
//__TIME__	时间 
//__STDC__ 当编译器以 ANSI 标准编译时，则定义为 1；判断该文件是不是标准 C 程序。

#include <stdio.h>
int main(int argc,char const *argv[])
{
	printf("%s:%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	printf("%d\n",__STDC__);
	return 0;
}










