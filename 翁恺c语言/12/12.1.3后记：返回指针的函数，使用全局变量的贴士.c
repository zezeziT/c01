//返回本地变量的地址是危险的
//返回 全局变量和静态本地变量可以  
#include <stdio.h>

int* f(void);
void g(void);
int main(int argc,char const *argv[])
{
	int *p=f();
	printf("*p=%d\n",*p);
	g();
	printf("*p=%d\n",*p);	
}
 
int *f(void)
{
	int i=12;
	printf("&i=%p\n",&i);
	return &i;
	//从这个函数出去后这个地址又被发给下一个人用 
}

void g(void)
{
	int k=24;
	printf("&k=%p\n",&k);
	printf("k=%d\n",k);
}








