#include <stdio.h>
int f(void);

int gAll=12;
//全局变量如果不赋值，会自动初始化为0.  本地变量不会，会乱飞 
//指针也是0值，即 NULL 

//只能用编译时刻已知的量初始化全局变量 
//int gAll=f(); 错误 
//int gAll=12; int g2 =gAll; g2错误
// const int gAll=12; int g2 =gAll;正确  
//不建议 这样gAll就改不了了  不要把两个全局变量联系在一起 
//在更小的地方可以隐藏全局变量 但出来就又回到全局变量 

int main(int argc,char const *argv[]) 
{
	printf("in %s gAll=%d\n",__func__,gAll);
	f();
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return 0;
}
int f(void)
{
	printf("in %s gAll=%d\n",__func__,gAll);
	gAll +=2;
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return gAll;
}
