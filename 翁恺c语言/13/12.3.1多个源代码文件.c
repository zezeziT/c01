#include <stdio.h>

int max(int a,int b);

int main(void)
{
	int a=5;
	int b=6;
	printf("max=%d",max(a,b));
}

int max(int a,int b)
{
	if(a<b){
		a=b;
	}
	return a;
}
