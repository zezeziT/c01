//像函数一样的宏 
//#define cube(x) ((x)*(x)*(x))  名称 空格 变量
#include  <stdio.h>

#define cube(x) ((x)*(x)*(x))
//一切都要有括号 参数出现的每个地方都有括号 整个值要括号 
#define RADTODEG1(X) (X*57.2958) //错误 
#define RADTODEG2(X) (X)*57.2958 //错误 

//可以带多个参数
#define  MIN(a,b) ((a)>(b)?(b):(a))
//也可以组合嵌套使用其他宏 

//不要带分号呀
#define PRETTY_PRINT(msg) printf(msg)

int main(int argc,char const *argv[])
{
//	printf("%d\n",cube(5));
//	printf("%f\n",RADTODEG1(5+2));
//	printf("%f\n",180/RADTODEG2(1));
	
	int n;
	scanf("%d",&n);
	if(n<10){
		PRETTY_PRINT("n is less than 10");
	}	
	else
		PRETTY_PRINT("n is at least 10");
	return 0;
		
} 

