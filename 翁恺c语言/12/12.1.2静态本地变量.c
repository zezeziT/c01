#include <stdio.h>

//静态本地变量 保持在离开时的值，再回来还是离开时的值 

int f(void);

int gAll=12;

int main(int argc,char const *argv[]) 
{
	 
	f();
	f();
	f(); 
	return 0;
}
int f(void)
{
	int k=0;
	int o=999;
	static int all =1; //静态本地变量其实是特殊的全局变量 和全局变量放在一起 
	printf("&gAll=%p\n",&gAll);
	printf("a&ll =%p\n",&all);
	printf("&k   =%p\n",&k);
	printf("&o   =%p\n",&o);
	printf("in %s all=%d\n",__func__,all);
	all +=2;
	printf("agn in %s all=%d\n",__func__,all);
	return all;
}
