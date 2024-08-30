#include <stdio.h>
 
 int max(int a,int b);  //函数原型声明 
  
 int main()
 {
 	int a,b,c;
 	a=5;
 	b=6;
 	c=max(10,12);
 	c=max(a,b);
 	c=max(c,23);
 	printf("%d\n",max(a,b));
 	return 0;
 }
 
 //函数定义 
 int max(int a,int b)
 {
 	int max=0;
 	if(a>b){
 		max=a;
	 }
	 else{
	 	max=b;
	 }
	 return max;
 }
