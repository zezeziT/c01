#include <stdio.h>
int f(void);

int gAll=12;
//ȫ�ֱ����������ֵ�����Զ���ʼ��Ϊ0.  ���ر������ᣬ���ҷ� 
//ָ��Ҳ��0ֵ���� NULL 

//ֻ���ñ���ʱ����֪������ʼ��ȫ�ֱ��� 
//int gAll=f(); ���� 
//int gAll=12; int g2 =gAll; g2����
// const int gAll=12; int g2 =gAll;��ȷ  
//������ ����gAll�͸Ĳ�����  ��Ҫ������ȫ�ֱ�����ϵ��һ�� 
//�ڸ�С�ĵط���������ȫ�ֱ��� ���������ֻص�ȫ�ֱ��� 

int main(int argc,char const *argv[]) 
{
	printf("in %s gAll=%d\n",__func__,gAll);
	f();
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return 0;
}
int f(void)
{
	printf("in %s gAll=%d\n",__func__,gAll);
	gAll +=2;
	printf("agn in %s gAll=%d\n",__func__,gAll);
	return gAll;
}
