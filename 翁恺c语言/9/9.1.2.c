#include<stdio.h>
void f(int *p);
void g(int k);
int main()
//{
//	//p指针用来存储变量的地址 
//	int i;
//	int* p=&i;   //*表示p是一个 指针，它指向的是1个int  p指向了i  p里面的值是i的地址 
//	
//	//* p=*p *找靠近它的那个 跟q无关 跟int 无关  下面两个是一个意思 p指针指向int 类型的q 
//	//指针变量不会放别的值 只会放指向值的地址  相当于p指针里是用来存储地址的  
//	int* p,q;
//	int *p,q;
//}


{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	
}
void f(int *p) //表明f函数 括号里面放的是一个指针 是一个变量的地址
{
	printf("%x\n",p);	//p里的值是i的地址 
	
	printf("p=%p\n",p);		//p的值是i的地址 用%p输出 
	
	printf("*p=%d\n",*p); // *p的值是i的值 
	printf("*p=%d\n",p);  //输出是i的地址 因为p里面的值是i的地址 
	
	*p=26;  //让p指针指向地址i的值改变为26 即 p指向的i的值==26  改变i的值 
	
	
}

void g(int k)
{
	printf("k=%d\n",k);
	printf("&k=%p\n",&k);
}

































