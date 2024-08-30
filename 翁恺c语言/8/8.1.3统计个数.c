//不停输入0~9范围内的整数，读到-1停止，统计每种数字出现的次数。

//不需要存 直接计数就行了 存麻烦 
//#include <stdio.h>
//int main()
//{
//	int number[1000];
//	int x;
//	scanf("%d",&x);
//	int cnt=0;
//	while(x!=-1){
//		number[cnt]=x;
//		cnt++;
//		scanf("%d",&x);
//	} 
//
////统计每种数字出现的次数
//	int i;
//	for(i=0;i<=9;i++)
//	{
//		int j;
//		int a=0;
//		for(j=0;j<=cnt;j++){			
//			if(number[j]==i){
//				a++;	
//			}
//		}
//		printf("%d的数有%d个\n",i,a);
//	}
//	
//}

//#include <stdio.h>
//int main()
//{
//	int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int cnt[10]={0};
//	int x;
//	scanf("%d",&x);
//	while(x!=-1){
//		int i;
// 
//     cnt[x] 所在的位置刚好是x那个数在的位置 缭乱 我也不懂我写的啥 
//		for(i=0;i<=9;i++){
//			if(x==a[i]){
//				cnt[i]++;
//				break;
//			}
//		}
//		scanf("%d",&x);
//	}
//	int i;
//	for(i=0;i<=9;i++)
//	{
//		printf("%d的数有%d个\n",a[i],cnt[i]);
//	}
//}

#include <stdio.h>
int main()
{
	const int number =10;  //10一直在出现  数组的大小 

//定义数组 
	int cnt[number];
	
//初始化数组 
	int i;
	for(i=0;i<number;i++){
		cnt [i]=0;
	} 
	
//输入数字 
	int x;
	scanf("%d",&x);

//进行比对累加 
	while(x!=-1)
	{
		if(x>=0&&x<number)
		{
			cnt[x]++;      //数组参与运算 
		}			
	scanf("%d",&x);
	}
	
//输出 
	for(i=0;i<number;i++)
	{
		printf("%d的数有%d个\n",i,cnt[i]);
	}
}


