//ÿ����һ������!=-1���ӵ�sum�cnt++,���sum/cnt �������ƽ�������� 
#include <stdio.h> 
int main()
{
	int number[100]; 
	int x;
	scanf("%d",&x);
	int sum=0;
	int cnt=0;
	while(x!=-1){
		number[cnt]=x;
		sum +=x;
		cnt++;
		scanf("%d",&x);
 
	} 
	printf("%f\n",1.0*sum/cnt);
	
	int i=0;
	for(number[i];i<cnt;i++){
		if(number[i]>1.0*sum/cnt){
			printf("%d\n",number[i]);
		}
	} 

}

