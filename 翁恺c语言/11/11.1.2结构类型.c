//�����ṹ���� struct
//�����Ա��[]����  �ṹ������Ա��'.'���� 

//�ṹָ��
//�����鲻ͬ���ṹ���������ֲ����ǽṹ�����ĵ�ַ
//struct date *pDate=&today;    char *s=a;  a[]; 

#include <stdio.h>
struct date  //�����ṹ����  �ṹ������  �ṹ��date  ������������ĳ�Ա 
{
	int month;
	int day;
	int year;
}; //�������������к����ж�����ʹ�� ����only main���� 
int main(int argc,char const *argv[]) 
{
	
//	struct date today;//����һ���ṹ���� 
//	today.month=07;
//	today.day=31;
//	today.year=2014;
	
	struct date today;
	today=(struct date){7,31,2014};
	struct date day;
	struct date *pDate=&today;
//	struct date *pDate1=&today.month;
//	struct date *pDate2=&today.day;
//	struct date *pDate3=&today.year;
	day = today;//�ṹ������������� ���鲻�� ��������a����=����b���� 
	day.year=2015;  
	struct date  thismonth={.month=7,.year=2014};
	printf("Today's date is %i-%i-%i.\n",
		today.month,today.day,today.year);
	printf("Today's date is %i-%i-%i.\n",
		thismonth.month,thismonth.day,thismonth.year);
	printf("day's date is %i-%i-%i.\n",
		day.month,day.day,day.year);
	printf("*pDate=%p\n",pDate);
	printf("*pDate+1=%p\n",pDate+1); //����һ��struct���ֳ� 3��int=12 
	printf("*pDate1=%p\n",&today.month);
	printf("*pDate2=%p\n",&today.day);
	printf("*pDate3=%p\n",&today.year);
	return 0;
}









////�г��ṹ����ÿһ����Ա�ĵ�ַ 
//#include <stdio.h>
//
//struct date { // �����ṹ����
//    int month;
//    int day;
//    int year;
//}; // �ṹ�嶨��
//
//int main(int argc, char const *argv[]) {
//    struct date today = {7, 31, 2014}; // ��ʼ���ṹ�����
//    struct date day;
//    int *pDate1 = &today.month;
//    int *pDate2 = &today.day;
//    int *pDate3 = &today.year;
//    day = today; // �ṹ�������ֵ
//    day.year = 2015; // �޸� day �� year ��Ա
//
//    struct date thismonth = {7, 0, 2014}; // ��ʼ���ṹ�������ע�� day Ĭ��Ϊ 0
//    printf("Today's date is %d-%d-%d.\n", today.month, today.day, today.year);
//    printf("This month's date is %d-%d-%d.\n", thismonth.month, thismonth.day, thismonth.year);
//    printf("Day's date is %d-%d-%d.\n", day.month, day.day, day.year);
//    printf("Address of today: %p\n", (void*)&today);
//    printf("Address of today.month: %p\n", (void*)pDate1);
//    printf("Address of today.day: %p\n", (void*)pDate2);
//    printf("Address of today.year: %p\n", (void*)pDate3);
//    return 0;
//}
