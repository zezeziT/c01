#include <stdio.h>

//��̬���ر��� �������뿪ʱ��ֵ���ٻ��������뿪ʱ��ֵ 

int f(void);

int gAll=12;

int main(int argc,char const *argv[]) 
{
	 
	f();
	f();
	f(); 
	return 0;
}
int f(void)
{
	int k=0;
	int o=999;
	static int all =1; //��̬���ر�����ʵ�������ȫ�ֱ��� ��ȫ�ֱ�������һ�� 
	printf("&gAll=%p\n",&gAll);
	printf("a&ll =%p\n",&all);
	printf("&k   =%p\n",&k);
	printf("&o   =%p\n",&o);
	printf("in %s all=%d\n",__func__,all);
	all +=2;
	printf("agn in %s all=%d\n",__func__,all);
	return all;
}
