#include <stdio.h>
int main()
{
//	int i=0;
//	printf("%p\n",&i); //%p 输出地址，以16进制 ， 
//	printf("0x%x\n",&i);   //0x表示地址 %x 以16进制输出  %d 以int输出 %f 以float double 输出 
//	int j=0;
//	printf("0x%x\n",&j); 
//	
//	int p=(int)&i;
//	printf("0x%x\n",p) ;
//	printf("%lu\n",sizeof(p));   
//	printf("%lu\n",sizeof(&i));
//	
//	//地址 和 地址的整数  并不永远相同 32位架构相同 
//	//32位架构中，int 和&i 所占都是4字节 强制转换不会损失   
//	//64位架构中 int是4字节 &i 地址是8字节
//	 
//	printf("%p",&(i) );


	int a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	printf("%p\n",&a[9]);
}
