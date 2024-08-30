//#include <stdio.h>
//void swap(int m,int n,int *p,int *q);
//int main(void)
//{
//	int m=5,n=9;
//	swap(m,n,&m,&n); 
//	printf("%d %d",m,n);
//}
//void swap(int m,int n,int *p,int *q)   //多此一举的 根据地址就知道m，n了 不用再传 
//{
//	int k=m;
//	*p=n;
//	*q=k;
//}







//交换两个数的值  函数需要返回多个值 改变多个值 只能用指针来做  

//#include <stdio.h>
//void swap(int *pm,int *pn);
//int main(void)
//{
//	int m=5,n=9;
//	swap(&m,&n); 
//	printf("m=%d n=%d",m,n);
//}
//void swap(int *pm,int *pn)   
//{
//	int k=*pm;
//	*pm=*pn;
//	*pn=k;
//}







//输出数组的min max
//#include <stdio.h>
//void minmax(int a[],int len,int *pmin,int *pmax);
//int main()
//{
//	int a[]={99,10,3,4,5,6,99,8,9,12,13,14,16,17,21,7,109};
//	int min,max;
//	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
//	printf("min=%d,max=%d",min,max);
//	return 0;
//} 
//
////void minmax(int a[],int len,int *pmin,int *pmax)
////{
////	int max,min;
////	max=min=a[0];
////	int i;
////	for(i=1;i<len;i++){
////		if(a[i]<min){
////			min=a[i];
////		} 
////		if(a[i]>max){
////			max=a[i];
////		}
////	}
////	*pmin=min;
////	*pmax=max;
////}
//
//
//void minmax(int a[],int len,int *pmin,int *pmax)
//{
//	
//	*pmax=*pmin=a[0];
//	int i;
//	for(i=1;i<len;i++){
//		if(a[i]<*pmin){
//			*pmin=a[i];
//		} 
//		if(a[i]>*pmax){
//			*pmax=a[i];
//		}
//	}
//
//}






//两个整数做除法的函数
//#include <stdio.h>
//int s(int m,int n,double *pshang);
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m,&n);
//	double shang;
//	if (divide(m,n,&shang)){
//		printf("%d/%d=%f",m,n,shang);
//	}
//	
//	return 0;
//}
//
//int divide(int m,int n,double *pshang)
//{
//	if(n==0){
//		printf("输入无效，无法计算") ;
//		return 0; 
//	}
//	*pshang =1.0*m/n;
//	return 1;
//}


//
#include <stdio.h>
int main()
{
	int i=0;
	printf("&i=%p\n",&i);
	int *p;
	*p=9; 
	
	printf("%x",i);
	
	return 0;
 } 
















