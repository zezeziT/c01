//#include<stdio.h>
//int main()
//{
//	//指针是const 
//	//表示一旦得到了某地址，不能再指向其他变量 
//	
//	int i;
//	int *const q=&i; //q是const 
//	*q=26; //OK 
//	q++; //error
//	
//	
//	//所指是const
//	//表示不能通过这个指针p去修改那个变量（并不能是得那个变量成为const） 
//	const int *p=&i;
//	*p=26;//ERROR! (*P)是const
//	i=26;//OK
//	p=&j;//OK 
//	
//	
//	int i;
//	const int* p1=&i; // *p1 *p不能变 即不能通过p改变i的值  但！  i的值自己是可以改变的 
//	int const* p2=&i;
//	
//	int *const p3=&i; // p3里面的值不能变 即p3所指地址一直是&i 
//	
//	
////	 const int i=9;
////	//i=18;
////	printf("%d",i);
//	
//}


//转换
//总是可以把一个非const的值换成const的 
#include<stdio.h>
void f(const int*x);  //给一个指针 不会动指针所指变量的值 即*x不变 
int main()
{
	int a=15;
	
	f(&a);//ok
	printf("%d",a); 
	
	
	const int b=a;  //b值不可改 
	f(&b);//ok
	b=a+1;//error! 
	//当要传递的参数的类型比地址大的时候，这是常用的手段：
	//即能用较少的字节数传递值给参数，又能避免函数对外面的变量的修改 
	
 } 
void f(const int*x){
	*x=9; //error!
}


