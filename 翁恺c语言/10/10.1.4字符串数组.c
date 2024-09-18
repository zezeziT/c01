//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char englishmonth[][11]={
//		"0",
//	    "January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"August",
//		"September",
//		"October",
//		"November",
//		"Decembe"
//	} ;
//	int month;
//	scanf("%d",&month);
//	
//	printf("%s", englishmonth[month]);
//	return 0;
//	
//}



#include <stdio.h>
#include <string.h>
int main(int argc,char const *argv[]){
	int i=0;
	for(i;i<argc;i++){
		printf("%d :%s\n",i,argv[i]);
		return 0;
	}
}

















