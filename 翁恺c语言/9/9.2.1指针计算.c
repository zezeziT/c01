//#include<stdio.h>
//int main()
//{
//	//*p+1取决于指针类型所占字节的大小 
//	
//	printf("sizeof(char)=%zu\n",sizeof(char));
//	printf("sizeof(int)=%zu\n",sizeof(int));
//	printf("sizeof(double)=%zu\n",sizeof(double));
//	printf("sizeof(float)=%d\n",sizeof(float));
//	printf("sizeof(long double)=%d\n",sizeof(long double));
//
//
//	
//	char ar[]={0,1,2,3,4,5,6,7,8,9};
//	char *p=ar;
//	char *p1=&ar[5]; 
//	printf("p=%p\n",p);
//	printf("p+1=%p\n",p+1);	
//	printf("*p1-*p=%d\n",*p1-*p);
//	printf("p1-p=%d\n",p1-p);
//	//*p<<-->> ar[0]
//	//*（p+1）<<-->>ar[1]
//	
//	//+1 +的是一个指针字节大写 即 跳到下一个单元的地址 a[i]-->>a[i+1] 
//	// 如果不是指向一篇连续的空间 +1没有意义！！！ 
//	printf("*(p+1)=%d\n",*(p+1)) ;  //(p+1)要带()，*运算符高于+ 
//	printf("*p+1=%d\n",*p+1) ;
//	//*(p+n)<->ar[n] 
//	
//	
//	
//	
//	int ac[]={0,88,2,3,4,5,6,7,8,9};
//	int *q=ac;
//	int *q1=&ac[6];
//	printf("q=%p\n",q);
//	printf("q+1=%p\n",q+1);
//	printf("*(q+1)=%d\n",*(q+1)) ;
//	printf("*q+1=%d\n",*q+1) ;
//	printf("*q1-*q=%d\n",*q1-*q);
//	
//	//指针“-”的值 不是两个地址减 而是两个地址的差/sizeof（类型）
//	// 即 相减结果是中间差几个数 
//	printf("q1-q=%d\n",q1-q);   
//	
//	
//	
//	
//	
//	double aa[]={0,1,2,3,4,5,6,7,8,9};
//	double *m=aa;
//	printf("m=%p\n",m);
//	printf("m+1=%p\n",m+1);
//} 




#include<stdio.h>
int main()
{

	char ar[]={0,1,2,3,4,5,6,7,8,9,-1};
	char *p=ar;
	int i;
	for(i=0;i<sizeof(ar)/sizeof(ar[0]);i++){
		printf("ar[%d]=%d\n",i,ar[i]);
	} 
	
	
//	for(p=ar;p<=&ar[9];*p++){
//		printf("%d\n",*p);
//	}
//	for(p=ar;*p!=-1;){
//		printf("%d\n",*p++);
//	}
	//p=ar也已经有了 可以改while循环 
	while(*p!=-1){
		printf("%d\n",*p++);
	}
	



	int ac[]={0,88,2,3,4,5,6,7,8,9};
	int *q=ac;
	for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
		printf("ac[%d]=%d\n",i,ac[i]);
	} 
	for(q=ac;q<=&ac[9];*q++){
		printf("%d\n",*q);
	}


}






