// printf
// %d[flags][width][.prec][hIL]type

//scanf
// %[flags]type

#include <stdio.h>

int main(int argc,char const *argv[])
{
	
	//flags 
	printf("%9d\n",123);
	printf("%-9d\n",123);  //"-"左对齐 
	printf("%-+9d\n",-123); //"+"在前面放+或- 强制输出+号 
  	//printf("%-09d\n",-123); //"0"用0填充  “-”和”0“不能结合 
	printf("%09d\n",-123);
	
	//"space"正数留空，负数是-号 
	printf("% d\n",-123);
	printf("% d\n",123);
	
	
	
	
	//width .prec
	// number 	最小字符数
	// * 		下一个参数是字符数
	// .number	小数点后面的位数	 
	// .*		下一个参数是小数点后的位数 
	printf("%9.2f\n",123.0); //长度为9 小数点后2位 
	printf("%*d\n",6,123); //6占据*的位置 6个字符的位置 和%6d一样 
	int len=6;
	printf("%*d\n",len,123); 
	printf("%*.*f\n",13,len,123.0);
	
	
	
	
	
	//hIL
	// hh 	单个字节 
	// h	short 
	// l	long
	// ll	longlong
	// L	long double
	printf("%hhd\n",12345);


	//n 读入/写出的个数
//	int number=0;
//	printf("%d%n\n",12345,&number);
//	printf("%d\n",number); 
//	
	

	
//    int number = 0;
//    printf("%d%n", 12345, &number); // 输出数字，并记录字符数
//    printf("Number of characters printed: %d\n", number); // 输出记录的字符数
    
//	 int number = 0;
//    printf("Hello, world!%n", &number);
//    printf("Number of characters printed: %d\n", number);
	
	int num;
	scanf("%*d%d",&num); //%*跳过输入的这个数 
	printf("%d",num);
	
	int i1=scanf("%i",&num);// %i 整数 也可能为16或者8进制 会自动识别输入的类型进行转换 
	int i2=printf("%d\n",num); 
	printf("%d:%d\n",i1,i2); //1:%nd 即1：输出的数的字符长度 包括换行\n 
	
	return 0;
}
