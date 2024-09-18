//#include <stdio.h>
//#include <string.h> 
//int mycmp(char *s1,char *s2)
//{
//	int sum=0;
//	while(*s1!='\0'||*s2!='\0')
//	{
//		sum +=*s2-*s1;
//		*s1++;
//		*s2++;
//	
//	}
//	if(*s1==*s2){
//		return sum;
//	}
//	if(*s1='\0'){
//		do{
//			sum +=*s2-' ';
//			*s2++;		
//		}while(*s2!='\0');
//		return sum;
//	}
//	if(*s2='\0'){
//	do{
//		sum +=' '-*s1;	
//		*s1++;	
//		}while(*s1!='\0');
//		return sum;
//	}
//	return sum;
//}
//		 
//int main(int argc,char const *argv[])
//{
//	char s1[]="abc ";
//	char s2[]="Abc";
//	int result=0;
//	result=mycmp(s1,s2);
//	printf("%p %p",s1,s2);
//	printf("%p %p",&s1[0],&s2[0]) ;
//	printf("%d\n",result);
//	//printf("%d",s1[0]-s2[0]);
//	printf("%d\n",strcmp(s1,s2));
//	printf("%d %d",'a'-'A',' ');
//	char s3[]="abc4";
//	printf("%d",strlen (s3));
//	return 0;
//}



#include <stdio.h>
#include <string.h>
//int mycmp(char *s1,char *s2)
////{
////	while(*s1==*s2){
////		if(*s1=='\0'){
////			return *s1-*s2;
////		}
////		*s1++;
////		*s2++; 
////	}
////	return *s1-*s2;
////}
//{
//	while(*s1==*s2&&*s1!='\0'){
//		*s1++;
//		*s2++; 
//	}
//	return *s1-*s2;
//}
int main(int agrc,char const *agrv[])
{
	char s1[]="kjkb";
	char s2[]="Kjkbp";
//	int result;
//	result =mycmp(s1,s2);
//	printf("%d\n",result);
	printf("%d\n",strcmp(s1,s2));
}















