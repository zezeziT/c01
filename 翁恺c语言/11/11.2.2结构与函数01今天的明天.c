//��֪���� ������
//#include <stdio.h>
//
//struct date{
//	int month;
//	int day;
//	int year;
//}; 
//
//int numofmonthdays(int month,int year);//ÿ������ 
//int numof2(int year);//2������
// 
//int main(int argc,char const *argv[])
//{
//	struct date today,tomorrow;
//	printf("���������ڣ�eg month day year��");
//	scanf("%d %d %d",&today.month,&today.day,&today.year);
//	//���� һ�����м��� 
//	if(today.day!=numofmonthdays(today.month,today.year)){
//		tomorrow.day=today.day+1;
//		tomorrow.month=today.month;
//		tomorrow.year=today.year;
//	}
//	//�µ� 
//	else if(today.month!=12){
//		tomorrow.day=1;
//		tomorrow.month=today.month+1;
//		tomorrow.year=today.year;	
//	}
//	//��� 
//	else{
//		tomorrow.day=1;
//		tomorrow.month=1;
//		tomorrow.year=today.year+1;
//	} 
//	printf("tomorrow's date is %i-%i-%i.",tomorrow.month,tomorrow.day,tomorrow.year);
//	return 0; 
//}
//
////ÿ������
//int numofmonthdays(int month,int year)
//{
//	int monthdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	if(month==2){
//		monthdays[month]=numof2(year);
//		//�ж���29�컹��28��   ����ƽ��28�� ����29��		 
//	}
//	return monthdays[month];
//}
//
////2������ 
////int numof2(int year)
////{
////	int ret=28;
////	if(year%4==0&&year%100!=0)  
////	{
////		ret=29;
////	}else if(year%400==0)    //���߼������� �ǻ� ����else if   ��Ȼ��������Ҳû�� 
////	{
////		ret=29;
////	}
////	return ret;	
////	
////}
//
////�ж���29�컹��28��   ƽ��28�� ����29��
//int numof2(int year){
//	if((year%4==0&&year%100!=0)||year%400==0) {
//		return 29;
//	}
//	return 28;
//} 









////��ʦ 
//
//#include <stdio.h>
//
//#include <stdbool.h>
//struct date{
//	int month;
//	int day;
//	int year;
//}; 
//
////int numofmonthdays(int month,int year);//ÿ������  
//int numofmonthdays(struct date today);//y�Խṹ�������ʹ��� �����Ǳ����Ĵ�������Ա 
////int numof2(int year);//2������
//int numof2(struct date today);
//
//bool isleap (struct date today);
//
//int main(int argc,char const *argv[])
//{
//	struct date today,tomorrow;
//	printf("���������ڣ�eg month day year��");
//	scanf("%d %d %d",&today.month,&today.day,&today.year);
//	//���� һ�����м��� 
//	if(today.day!=numofmonthdays(today)){
//		tomorrow.day=today.day+1;
//		tomorrow.month=today.month;
//		tomorrow.year=today.year;
//	}
//	//�µ� 
//	else if(today.month!=12){
//		tomorrow.day=1;
//		tomorrow.month=today.month+1;
//		tomorrow.year=today.year;	
//	}
//	//��� 
//	else{
//		tomorrow.day=1;
//		tomorrow.month=1;
//		tomorrow.year=today.year+1;
//	} 
//	printf("tomorrow's date is %i-%i-%i.",tomorrow.month,tomorrow.day,tomorrow.year);
//	return 0; 
//}
//
////ÿ������
//int numofmonthdays(struct date today)
//{
//	int days=0;
//	const int monthdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	//if(today.month==2){
//	//	monthdays[today.month]=numof2(today);
//	if (today.month==2&&isleap (today)){
//		days=29;
//		
//		//�ж���29�컹��28��   ����ƽ��28�� ����29��		 
//	}
//	else {
//		days=monthdays[today.month];
//	}
//	return days;
//}
//
//
//
////�ж���29�컹��28��   ƽ��28�� ����29��
////int numof2(struct date today){
////	if((today.year%4==0&&today.year%100!=0)||today.year%400==0) {
////		return 29;
////	}
////	return 28;
////} 
//
//bool isleap (struct date today){
//	bool leap=false;
//	if((today.year%4==0&&today.year%100!=0)||today.year%400==0) {
//		leap=true;
//	}
//	return leap;
//}
//





//�Լ�дһ������ṹ�ĺ���
#include <stdio.h>
struct data{
	int x;
	int y; 
}; 
int main(int argc,char const *argv[] )
{
	struct data myget;
	scanf("%d %d"��)
}





















