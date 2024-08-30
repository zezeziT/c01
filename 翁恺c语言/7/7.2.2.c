#include <stdio.h>

//类型自动转换 
//void cheer(int i)
//{
//	printf("%d",i);
// } 
// 
// int main()
// {
// 	cheer(2.7);
// }

//swap
//交换不了 swap中 a b的值输出不了 
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;

}
int main()
{
	int a,b;
	a=5;
	b=6;
	swap(a,b);
	printf("%d %d",a,b);
}
