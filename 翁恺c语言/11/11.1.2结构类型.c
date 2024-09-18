//声明结构类型 struct
//数组成员用[]访问  结构变量成员用'.'访问 

//结构指针
//和数组不同，结构变量的名字并不是结构变量的地址
//struct date *pDate=&today;    char *s=a;  a[]; 

#include <stdio.h>
struct date  //声明结构类型  结构类型名  结构体date  里面放它包含的成员 
{
	int month;
	int day;
	int year;
}; //放外面让在所有函数中都可以使用 而非only main函数 
int main(int argc,char const *argv[]) 
{
	
//	struct date today;//定义一个结构变量 
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
	day = today;//结构变量可以随意变 数组不行 不能数组a【】=数组b【】 
	day.year=2015;  
	struct date  thismonth={.month=7,.year=2014};
	printf("Today's date is %i-%i-%i.\n",
		today.month,today.day,today.year);
	printf("Today's date is %i-%i-%i.\n",
		thismonth.month,thismonth.day,thismonth.year);
	printf("day's date is %i-%i-%i.\n",
		day.month,day.day,day.year);
	printf("*pDate=%p\n",pDate);
	printf("*pDate+1=%p\n",pDate+1); //加了一个struct的字长 3个int=12 
	printf("*pDate1=%p\n",&today.month);
	printf("*pDate2=%p\n",&today.day);
	printf("*pDate3=%p\n",&today.year);
	return 0;
}









////列出结构变量每一个成员的地址 
//#include <stdio.h>
//
//struct date { // 声明结构类型
//    int month;
//    int day;
//    int year;
//}; // 结构体定义
//
//int main(int argc, char const *argv[]) {
//    struct date today = {7, 31, 2014}; // 初始化结构体变量
//    struct date day;
//    int *pDate1 = &today.month;
//    int *pDate2 = &today.day;
//    int *pDate3 = &today.year;
//    day = today; // 结构体变量赋值
//    day.year = 2015; // 修改 day 的 year 成员
//
//    struct date thismonth = {7, 0, 2014}; // 初始化结构体变量，注意 day 默认为 0
//    printf("Today's date is %d-%d-%d.\n", today.month, today.day, today.year);
//    printf("This month's date is %d-%d-%d.\n", thismonth.month, thismonth.day, thismonth.year);
//    printf("Day's date is %d-%d-%d.\n", day.month, day.day, day.year);
//    printf("Address of today: %p\n", (void*)&today);
//    printf("Address of today.month: %p\n", (void*)pDate1);
//    printf("Address of today.day: %p\n", (void*)pDate2);
//    printf("Address of today.year: %p\n", (void*)pDate3);
//    return 0;
//}
