#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum color {red,yellow,green};
void f(enum color c);
int main(void)
{
	enum color t=red;   //ֱ�ӾͿ��԰�enum color����һ���������� ����int float֮�� 
	printf("%d",t);
	scanf("%d",&t);
	f(t);
//	int i=9;
//	scanf("%d",&i);
//	printf("%d\n",i);
	return 0;
}
void f(enum color c)
{
	printf("%d\n",c);
}

