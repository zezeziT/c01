#include <stdio.h>

//�����Զ�ת�� 
//void cheer(int i)
//{
//	printf("%d",i);
// } 
// 
// int main()
// {
// 	cheer(2.7);
// }

//swap
//�������� swap�� a b��ֵ������� 
void swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;

}
int main()
{
	int a,b;
	a=5;
	b=6;
	swap(a,b);
	printf("%d %d",a,b);
}
