#include <stdio.h>
int search(int x,int a[],int length);
int main()
{
	int a[8]={12,3,4,6,89,44,55,78};
	int x;
	scanf("%d",&x);
	int loc;
	
//search(x,a,sizeof(a)/sizeof(a[0]));
//����ret=** ����loc=** ʱ��search�����е�ret������ֵ�޷���ʼ�����޷���ʼ��Ϊ1 
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	
	if(loc!=-1)
	{
		printf("%d���ڣ��ڵ�%d��λ��",x,loc); 
	}
	else
	{
		printf("%d������",x); 
	}
}

int search(int x,int a[],int length) {
	
	int ret=-1;

	int i;	
	for(i=0;i<length;i++)
	{
		if(x==a[i]){
			ret=i;
			break;
		}
	}
	return ret;

}
