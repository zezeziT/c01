//#include<stdio.h>
//int main()
//{
//	//ָ����const 
//	//��ʾһ���õ���ĳ��ַ��������ָ���������� 
//	
//	int i;
//	int *const q=&i; //q��const 
//	*q=26; //OK 
//	q++; //error
//	
//	
//	//��ָ��const
//	//��ʾ����ͨ�����ָ��pȥ�޸��Ǹ��������������ǵ��Ǹ�������Ϊconst�� 
//	const int *p=&i;
//	*p=26;//ERROR! (*P)��const
//	i=26;//OK
//	p=&j;//OK 
//	
//	
//	int i;
//	const int* p1=&i; // *p1 *p���ܱ� ������ͨ��p�ı�i��ֵ  ����  i��ֵ�Լ��ǿ��Ըı�� 
//	int const* p2=&i;
//	
//	int *const p3=&i; // p3�����ֵ���ܱ� ��p3��ָ��ַһֱ��&i 
//	
//	
////	 const int i=9;
////	//i=18;
////	printf("%d",i);
//	
//}


//ת��
//���ǿ��԰�һ����const��ֵ����const�� 
#include<stdio.h>
void f(const int*x);  //��һ��ָ�� ���ᶯָ����ָ������ֵ ��*x���� 
int main()
{
	int a=15;
	
	f(&a);//ok
	printf("%d",a); 
	
	
	const int b=a;  //bֵ���ɸ� 
	f(&b);//ok
	b=a+1;//error! 
	//��Ҫ���ݵĲ��������ͱȵ�ַ���ʱ�����ǳ��õ��ֶΣ�
	//�����ý��ٵ��ֽ�������ֵ�����������ܱ��⺯��������ı������޸� 
	
 } 
void f(const int*x){
	*x=9; //error!
}


