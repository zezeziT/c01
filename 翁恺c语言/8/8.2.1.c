#include <stdio.h>
int search(int x,int a[],int length);
int main()
{
	int a[8]={12,3,4,6,89,44,55,78};
	int x;
	scanf("%d",&x);
	int loc;
	
//search(x,a,sizeof(a)/sizeof(a[0]));
//不加ret=** 或者loc=** 时，search函数中的ret（返回值无法初始化）无法初始化为1 
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	
	if(loc!=-1)
	{
		printf("%d存在，在第%d个位置",x,loc); 
	}
	else
	{
		printf("%d不存在",x); 
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
