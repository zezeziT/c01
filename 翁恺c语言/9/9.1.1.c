#include <stdio.h>
int main()
{
//	int i=0;
//	printf("%p\n",&i); //%p �����ַ����16���� �� 
//	printf("0x%x\n",&i);   //0x��ʾ��ַ %x ��16�������  %d ��int��� %f ��float double ��� 
//	int j=0;
//	printf("0x%x\n",&j); 
//	
//	int p=(int)&i;
//	printf("0x%x\n",p) ;
//	printf("%lu\n",sizeof(p));   
//	printf("%lu\n",sizeof(&i));
//	
//	//��ַ �� ��ַ������  ������Զ��ͬ 32λ�ܹ���ͬ 
//	//32λ�ܹ��У�int ��&i ��ռ����4�ֽ� ǿ��ת��������ʧ   
//	//64λ�ܹ��� int��4�ֽ� &i ��ַ��8�ֽ�
//	 
//	printf("%p",&(i) );


	int a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	printf("%p\n",&a[9]);
}
