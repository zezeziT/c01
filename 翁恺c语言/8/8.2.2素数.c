//���� ������֮������� �����
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
//		//�ж�����
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
////�������� 
//	int i;
//	for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
//		int k;
//		k=isprime(a[i]) ;  //�����ж��������� 
//		if(k){
//			printf("%d\n",a[i]);
//		}
//	}
//	
//}
//
////�ж��������� 
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


//����=����x����x����...
// ���� ���� �ж��Ƿ�����С����������
//�ð���֮ǰ������������

// 1.������С������
// 2.����ƽ���� sqrt��x��
// 3.�ų�ż�� ����һ�������� 

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
//	for(i=3;i<=n;i+=2)  //ż���϶��������� ֻ������ 
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
//		int limit=sqrt(x);//ֻ��Ҫ��鵽sqrt��x�� 
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
	


//������˹����ɸ��
//2�ı��� 3�ı��� ..... ���� ������з�����
// if�������� ����
//#include <stdio.h>
//int main()
//{
//	int m,n;
//	scanf("%d %d",&m,&n);
//	if(m<2){
//		m=2;//С��2������������ �ų�ֱ�� 
//	}else if(m%2==0){
//		m++; //������Ȼ����ż������������ʼ�Ƚ� 
//	}
//	int is_prime[10000];  //һ��0 1 ---9999������ ��Ӧÿ��λ�õ���Ϊ0 1 ---9999 
//	int i;
//	for(i=0;i<10000;i++){
//		is_prime[i]=1;    //Ĭ�϶������� 
//	}
//	is_prime[0] =is_prime[1]=0; //0��1�������� 
//	
//	// ������˹����ɸ��
//	int limit=10000; 
//	for(i=2;i*i<limit;i++)  //i*i<limit �൱�� i<sqrt(10000) 
//	{
//		if(is_prime[i])//���i������ 
//		{
//			int j;
//			for( j=i*i;j<limit;j +=i)//j=i*i��ʼ������ j=iʱ��isprime��j��Ϊ���� ��*i��ʼ���� 
//			{
//				is_prime[j]=0;//i�ı����������� eg.2�ı����������� 3�ı��ٲ������� 
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
		m=2;   //0��1������������2��ʼ 
	}	
	int number=n;
	int is_prime[number];//��ʼ�����飬�������n���� ������  
	is_prime[0]=2;
 //���������1����ʱ2�� cnt=1 ������һ������ 
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
	}//�������������� С��n�������� 
	
	int k=0;
	for(i=0;i<cnt;i++){     //���С��n������ 
		if(is_prime[i]>=m){  //������ڵ���m������ 
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



















