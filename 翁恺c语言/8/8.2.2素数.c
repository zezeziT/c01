//素数 两个数之间的素数 并输出
//#include <stdio.h>
//int ret(int j);
//int main()
//
//{
//	int m,n;
//	scanf("%d %d",&m,&n);
//	if(m<2){
//		m=2;
//	}
//	int number=(n-m+1);
//	int a[number];
//	int i;
//	int j;
//	for(i=0,j=m;j<=n;i++,j++){
//		a[i]=j;
//		int k;
//		k=ret(j) ;
//		if(k){
//			printf("%d\n",j);
//		}
//	}
//	
//}
//
//
//int ret(int j)
//{
//		//判断素数
//	int ret =1;
//	int i;
//	for(i=2;i<j;i++){
//		if(j%i==0){
//			ret =0;
//		}
//	} 
//	return ret;
//}


//
//#include <stdio.h>
//int isprime(int j);
//int main()
//
//{
//
//
//	int a[]={2,3,4,5,6,7,4,66,44,87,91,34,37,47,83,90};
//	
////遍历数组 
//	int i;
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		int k;
//		k=isprime(a[i]) ;  //调用判断素数函数 
//		if(k){
//			printf("%d\n",a[i]);
//		}
//	}
//	
//}
//
////判断素数函数 
//int isprime(int j)
//{
//		
//	int ret =1;
//	int i;
//	for(i=2;i<j;i++){
//		if(j%i==0){
//			ret =0;
//		}
//	} 
//	return ret;
//}


//合数=素数x素数x素数...
// 所以 素数 判断是否整除小于他的素数
//得把它之前的素数存起来

// 1.除比它小的质数
// 2.除到平方根 sqrt（x）
// 3.排除偶数 质数一定是奇数 

//#include <stdio.h>
//#include <math.h>
////int firstisprime(int x );
//int isprime(int x,int cnt,int a[]);
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m,&n);
////	for(i=m;i<=n;i++)
////	{
////		int ret;
////		ret =firstisprime(i);
////		if(ret)
////		{
////			break;
////		}
////		
////	}
//	if(m<=2)
//	{
//		printf("%d\n",2);
//	} 
//	int a[n-1];
//	a[0]=2;
//	int i;
//	int cnt=1;
//	for(i=3;i<=n;i+=2)  //偶数肯定不是质数 只看奇数 
//	{
//		int ret=1;
//		ret=isprime(i,cnt,a);
//			
//		if(ret)
//		{	
//			a[cnt]=i;
//			cnt++;
//			if(i>=m)
//			{
//				printf("%d\n",i);	
//			}
//			
//		}
//	}
//
//
//	 
//} 
//
////int firstisprime(int x )
////{
////	int ret=1;
////	int j;
////	for(j=2;j<x;j++)
////	{
////		if(x%j==0);
////		ret =0;
////	}
////	return ret;
////}
//
//
//int isprime(int x,int cnt,int a[])
//{
//		int limit=sqrt(x);//只需要检查到sqrt（x） 
//		int i;
//		int ret=1;
//		for(i=0;i<cnt&&a[i]<=limit;i++)
//		{
//			if(x%a[i]==0)
//			{
//				ret =0;	
//				break;		
//			}
//		}
//	
//		return ret;	
//	
//}
	


//埃拉托斯特尼筛法
//2的倍数 3的倍数 ..... 依次 标记所有非质数
// if不是质数 素数
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m,&n);
//	if(m<2){
//		m=2;//小于2的数不是质数 排除直接 
//	}else if(m%2==0){
//		m++; //质数必然不是偶数，从奇数开始比较 
//	}
//	int is_prime[10000];  //一个0 1 ---9999的数组 对应每个位置的数为0 1 ---9999 
//	int i;
//	for(i=0;i<10000;i++){
//		is_prime[i]=1;    //默认都是质数 
//	}
//	is_prime[0] =is_prime[1]=0; //0，1不是质数 
//	
//	// 埃拉托斯特尼筛法
//	int limit=10000; 
//	for(i=2;i*i<limit;i++)  //i*i<limit 相当于 i<sqrt(10000) 
//	{
//		if(is_prime[i])//如果i是质数 
//		{
//			int j;
//			for( j=i*i;j<limit;j +=i)//j=i*i开始！！！ j=i时，isprime【j】为质数 从*i开始算起 
//			{
//				is_prime[j]=0;//i的倍数不是质数 eg.2的倍数不是质数 3的倍速不是质数 
////				int k;
////				for( k=0;k<j;k++){
////					printf("%d ",is_prime[k]);
////				} 
//			}
//		}
//	} 
//	
//	for(i=m;i<=n;i++){
//		if(is_prime[i]){
//			printf("%d\n",i);
//		}
//	}
//	
//	 
//	
//}
 

#include <stdio.h>
#include <math.h>
int isprime(int x,int cnt,int is_prime[]);
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<2){
		m=2;   //0和1不是质数，从2开始 
	}	
	int number=n;
	int is_prime[number];//初始化数组，里面包含n个数 都多了  
	is_prime[0]=2;
 //素数数组第1个数时2， cnt=1 表明有一个数； 
	int cnt=1;
	
	int i;
	for(i=3;i<=number;i++){
		if(isprime(i,cnt,is_prime)){
			is_prime[cnt++]=i;
		}
		{
	int j;
	printf("\t\t\t\t");
	for(j=0;<number;i++){
		printf("%d\t",i);
	}
	printf("\n");
}
	}//构造了素数数组 小于n的所有数 
	
	int k=0;
	for(i=0;i<cnt;i++){     //输出小于n的素数 
		if(is_prime[i]>=m){  //输出大于等于m的素数 
			k++;
			printf("%d",is_prime[i]);
			if(k%5!=0){
				printf("\t");
			}else{
				printf("\n");
			}
		}
		
	} 
}
int isprime(int x,int cnt,int is_prime[])
{
	int i;
	for(i=0;i<cnt;i++){
		if(x%is_prime[i]==0){
		return 0;
		break;
		}
	}
	
	return 1;	
}



















