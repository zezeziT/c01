// printf
// %d[flags][width][.prec][hIL]type

//scanf
// %[flags]type

#include <stdio.h>

int main(int argc,char const *argv[])
{
	
	//flags 
	printf("%9d\n",123);
	printf("%-9d\n",123);  //"-"����� 
	printf("%-+9d\n",-123); //"+"��ǰ���+��- ǿ�����+�� 
  	//printf("%-09d\n",-123); //"0"��0���  ��-���͡�0�����ܽ�� 
	printf("%09d\n",-123);
	
	//"space"�������գ�������-�� 
	printf("% d\n",-123);
	printf("% d\n",123);
	
	
	
	
	//width .prec
	// number 	��С�ַ���
	// * 		��һ���������ַ���
	// .number	С��������λ��	 
	// .*		��һ��������С������λ�� 
	printf("%9.2f\n",123.0); //����Ϊ9 С�����2λ 
	printf("%*d\n",6,123); //6ռ��*��λ�� 6���ַ���λ�� ��%6dһ�� 
	int len=6;
	printf("%*d\n",len,123); 
	printf("%*.*f\n",13,len,123.0);
	
	
	
	
	
	//hIL
	// hh 	�����ֽ� 
	// h	short 
	// l	long
	// ll	longlong
	// L	long double
	printf("%hhd\n",12345);


	//n ����/д���ĸ���
//	int number=0;
//	printf("%d%n\n",12345,&number);
//	printf("%d\n",number); 
//	
	

	
//    int number = 0;
//    printf("%d%n", 12345, &number); // ������֣�����¼�ַ���
//    printf("Number of characters printed: %d\n", number); // �����¼���ַ���
    
//	 int number = 0;
//    printf("Hello, world!%n", &number);
//    printf("Number of characters printed: %d\n", number);
	
	int num;
	scanf("%*d%d",&num); //%*�������������� 
	printf("%d",num);
	
	int i1=scanf("%i",&num);// %i ���� Ҳ����Ϊ16����8���� ���Զ�ʶ����������ͽ���ת�� 
	int i2=printf("%d\n",num); 
	printf("%d:%d\n",i1,i2); //1:%nd ��1������������ַ����� ��������\n 
	
	return 0;
}
