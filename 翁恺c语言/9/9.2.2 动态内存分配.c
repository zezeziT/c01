//int *a=(int*)malloc(n*sizeof(int))
//#include<stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int number;
//	int *a;
//	int i;
//	printf("s输入数量：");
//	scanf("%d",&number);
//	// int a[number];
//	a=(int*)malloc(number*sizeof(int)) ;
//	for(i=0;i<number;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=number-1;i!=-1;i--){
//		printf("%d\n",a[i]);
//	}
//	free(a);
//	return 0;
//	
//	
//	
////	int *p=a;
////
////	scanf("%d",&i);
////	for(*p=i;*p!=-1;*p++){
////		*p=i;
////		scanf("%d",&i);	
////	}
////	for(*p=i;*p!=-1;*p++){
////		printf("%d\n",i);
////	}
//}




//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	void *p;
//	int cnt=0;
//	while(p=malloc(100*1024*1024)){
//		cnt++;
//		
//	}
//	printf("分配了%d00MB的空间",cnt);
//	free(p);
//	return 0;
//}




#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	//void *p;
	//p=malloc(100*1024*1024);
	//p++;
	//free(p); //错误 只能free自己之前申请的 


//  void *p;	
//	int i;
//	p=&i;
//	free(p) ;//错误 只能free系统给自己分配的 不能free别人的 
	
	void *p=0;  //初始化为0地址，即便以后不赋值，也依然可以free 
	free(p); 
	free (p); //错误！！！！ free过后不能再free 已经没有了 那快已经不属于p了 
	free(NULL);//相当于free(0);但稳妥一点 所以指针定义时初始化为0，方便后续操作 
	
	return 0;
}





















