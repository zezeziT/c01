//��ͣ����0~9��Χ�ڵ�����������-1ֹͣ��ͳ��ÿ�����ֳ��ֵĴ�����

//����Ҫ�� ֱ�Ӽ��������� ���鷳 
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
////ͳ��ÿ�����ֳ��ֵĴ���
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
//		printf("%d������%d��\n",i,a);
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
//     cnt[x] ���ڵ�λ�øպ���x�Ǹ����ڵ�λ�� ���� ��Ҳ������д��ɶ 
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
//		printf("%d������%d��\n",a[i],cnt[i]);
//	}
//}

#include <stdio.h>
int main()
{
	const int number =10;  //10һֱ�ڳ���  ����Ĵ�С 

//�������� 
	int cnt[number];
	
//��ʼ������ 
	int i;
	for(i=0;i<number;i++){
		cnt [i]=0;
	} 
	
//�������� 
	int x;
	scanf("%d",&x);

//���бȶ��ۼ� 
	while(x!=-1)
	{
		if(x>=0&&x<number)
		{
			cnt[x]++;      //����������� 
		}			
	scanf("%d",&x);
	}
	
//��� 
	for(i=0;i<number;i++)
	{
		printf("%d������%d��\n",i,cnt[i]);
	}
}


