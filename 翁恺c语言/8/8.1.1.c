//每读到一个数（!=-1）加到sum里，cnt++,最后sum/cnt 输出大于平均数的数 
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

