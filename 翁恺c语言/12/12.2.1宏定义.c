//#include <stdio.h>//Ԥ���� 
//
//// ��ֵ�ĺ� 
////const double PI = 3.14159;
//#define PI 3.14159  //pi�Ǻ������ 3.xx�Ǻ��ֵ   Ԥ����������pi���滻��3.xxx 
//#define PI2 2*PI //!!!��Ҫ������ ����Ԥ���� ���Ǿ��� 
//#define PRT printf("%f ",PI);\
//			printf("%f\n",PI2)   			
////  "\"��ʾû�껹 
//
////û��ֵ�ĺ�
//#define _DEBUG 
//
//int main(int argc,char const *argv[])
//{
//	//printf("%f\n",2*PI*3);
//	printf("%f\n",PI2*3);
//	//printf("%f\n",2*3.14159*3.0);
//	PRT;
//	
//	return 0;
//}


//__FILE__,  	���ļ�Ŀ¼ 
//__LINE__	��ִ����������� 
//__DATE__,	���� �� �� �� 
//__TIME__	ʱ�� 
//__STDC__ ���������� ANSI ��׼����ʱ������Ϊ 1���жϸ��ļ��ǲ��Ǳ�׼ C ����

#include <stdio.h>
int main(int argc,char const *argv[])
{
	printf("%s:%d\n",__FILE__,__LINE__);
	printf("%s,%s\n",__DATE__,__TIME__);
	printf("%d\n",__STDC__);
	return 0;
}










