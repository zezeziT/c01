//����һ���ĺ� 
//#define cube(x) ((x)*(x)*(x))  ���� �ո� ����
#include  <stdio.h>

#define cube(x) ((x)*(x)*(x))
//һ�ж�Ҫ������ �������ֵ�ÿ���ط��������� ����ֵҪ���� 
#define RADTODEG1(X) (X*57.2958) //���� 
#define RADTODEG2(X) (X)*57.2958 //���� 

//���Դ��������
#define  MIN(a,b) ((a)>(b)?(b):(a))
//Ҳ�������Ƕ��ʹ�������� 

//��Ҫ���ֺ�ѽ
#define PRETTY_PRINT(msg) printf(msg)

int main(int argc,char const *argv[])
{
//	printf("%d\n",cube(5));
//	printf("%f\n",RADTODEG1(5+2));
//	printf("%f\n",180/RADTODEG2(1));
	
	int n;
	scanf("%d",&n);
	if(n<10){
		PRETTY_PRINT("n is less than 10");
	}	
	else
		PRETTY_PRINT("n is at least 10");
	return 0;
		
} 

