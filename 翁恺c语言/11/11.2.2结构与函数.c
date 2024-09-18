//已知今天 求明天
//#include <stdio.h>
//
//struct date{
//	int month;
//	int day;
//	int year;
//}; 
//
//int numofmonthdays(int month,int year);//每月天数 
//int numof2(int year);//2月天数
// 
//int main(int argc,char const *argv[])
//{
//	struct date today,tomorrow;
//	printf("请输入日期：eg month day year：");
//	scanf("%d %d %d",&today.month,&today.day,&today.year);
//	//月中 一个月有几天 
//	if(today.day!=numofmonthdays(today.month,today.year)){
//		tomorrow.day=today.day+1;
//		tomorrow.month=today.month;
//		tomorrow.year=today.year;
//	}
//	//月底 
//	else if(today.month!=12){
//		tomorrow.day=1;
//		tomorrow.month=today.month+1;
//		tomorrow.year=today.year;	
//	}
//	//年底 
//	else{
//		tomorrow.day=1;
//		tomorrow.month=1;
//		tomorrow.year=today.year+1;
//	} 
//	printf("tomorrow's date is %i-%i-%i.",tomorrow.month,tomorrow.day,tomorrow.year);
//	return 0; 
//}
//
////每月天数
//int numofmonthdays(int month,int year)
//{
//	int monthdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	if(month==2){
//		monthdays[month]=numof2(year);
//		//判断是29天还是28天   正常平年28天 闰年29天		 
//	}
//	return monthdays[month];
//}
//
////2月天数 
////int numof2(int year)
////{
////	int ret=28;
////	if(year%4==0&&year%100!=0)  
////	{
////		ret=29;
////	}else if(year%400==0)    //我逻辑有问题 是或 不是else if   虽然好像这样也没错 
////	{
////		ret=29;
////	}
////	return ret;	
////	
////}
//
////判断是29天还是28天   平年28天 闰年29天
//int numof2(int year){
//	if((year%4==0&&year%100!=0)||year%400==0) {
//		return 29;
//	}
//	return 28;
//} 









////老师 
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
////int numofmonthdays(int month,int year);//每月天数  
//int numofmonthdays(struct date today);//y以结构变量类型传入 而不是笨笨的传入多个成员 
////int numof2(int year);//2月天数
//int numof2(struct date today);
//
//bool isleap (struct date today);
//
//int main(int argc,char const *argv[])
//{
//	struct date today,tomorrow;
//	printf("请输入日期：eg month day year：");
//	scanf("%d %d %d",&today.month,&today.day,&today.year);
//	//月中 一个月有几天 
//	if(today.day!=numofmonthdays(today)){
//		tomorrow.day=today.day+1;
//		tomorrow.month=today.month;
//		tomorrow.year=today.year;
//	}
//	//月底 
//	else if(today.month!=12){
//		tomorrow.day=1;
//		tomorrow.month=today.month+1;
//		tomorrow.year=today.year;	
//	}
//	//年底 
//	else{
//		tomorrow.day=1;
//		tomorrow.month=1;
//		tomorrow.year=today.year+1;
//	} 
//	printf("tomorrow's date is %i-%i-%i.",tomorrow.month,tomorrow.day,tomorrow.year);
//	return 0; 
//}
//
////每月天数
//int numofmonthdays(struct date today)
//{
//	int days=0;
//	const int monthdays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	//if(today.month==2){
//	//	monthdays[today.month]=numof2(today);
//	if (today.month==2&&isleap (today)){
//		days=29;
//		
//		//判断是29天还是28天   正常平年28天 闰年29天		 
//	}
//	else {
//		days=monthdays[today.month];
//	}
//	return days;
//}
//
//
//
////判断是29天还是28天   平年28天 闰年29天
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





//自己写一个输入结构的函数
#include <stdio.h>
struct data{
	int x;
	int y; 
}; 
int main(int argc,char const *argv[] )
{
	struct data myget;
	scanf("%d %d"，)
}





















