//���ر��ر����ĵ�ַ��Σ�յ�
//���� ȫ�ֱ����;�̬���ر�������  
#include <stdio.h>

int* f(void);
void g(void);
int main(int argc,char const *argv[])
{
	int *p=f();
	printf("*p=%d\n",*p);
	g();
	printf("*p=%d\n",*p);	
}
 
int *f(void)
{
	int i=12;
	printf("&i=%p\n",&i);
	return &i;
	//�����������ȥ�������ַ�ֱ�������һ������ 
}

void g(void)
{
	int k=24;
	printf("&k=%p\n",&k);
	printf("k=%d\n",k);
}








