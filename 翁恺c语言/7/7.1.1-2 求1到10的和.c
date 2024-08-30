//求出1-10；20-30；35-45的三个和
#include <stdio.h>

//有问题
//求和函数
//int sum(int i) {
//	int j;
//	scanf("%d %d",&i,&j);
//	int sum=0;
//	for(; i<=j; i++) {
//		sum +=i;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int sum(i);
//	printf("%d",sum);
//
//}

//int main()
//{
//	int i,sum;
//	for(i=1,sum=0; i<=10; i++) {
//		sum +=i;
//	}
//	printf("1到10的和是%d\n",sum);
//
//	for(i=20,sum=0; i<=30; i++) {
//		sum +=i;
//	}
//	printf("1到10的和是%d\n",sum);
//
//	for(i=35,sum=0; i<=45; i++) {
//		sum +=i;
//	}
//	printf("1到10的和是%d\n",sum);
//}






void sum(int begin,int end)
{
	int i,sum;
	for(i=begin,sum=0; i<=end; i++) {
		sum +=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}

int main()
{
	
	sum (1,10);
	sum (20,30);
	sum (35,45);
	return 0;
}
