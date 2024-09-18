//cahr *dst=(char*)malloc(strlen(src)+1);
//strcpy(dat,src); 
//不能重叠 计算机多核处理会冲突 
//同时复制\0",所以要在字符串内容长度strlen基础上+1; 
//#include <stdio.h>
//#include <stdlib.h> 
//#include <string.h>
//char* mycpy(char *src,char *dst)   //用char*返回dst 不是void 
//{
//
//	char *ret=dst; 
//	do{
//		*dst=*src;
//		*dst++;
//		*src++;	
//	}while(*(src-1)!='\0');    //错误 不是*src-1 指向的值-1 应该是*（src-1） 地址-1   
////	*dst=*src;
//	return ret; //错误 dst不断++  字符串首地址早已经变化 指向了'\0' 跟原来不一样  需要提前记录指针位置 
//
//}
////char* mycpy(char *src,char *dst)
////{
////
////	int i=0;
////	   
////	do{
////		dst[i]=src[i];
////		i++;
////	}while(src[i-1]!='\0');   //用src[i--]会错 会改变i的值 最好用src[i] 然后再额外赋值\0" 
////	
////	return dst;
////}
//int main(int argc,char const *argv[] )
//{
//	char src[]="hellowo";
//	char *dst=(char*)malloc(strlen(src)+1);	
//	dst=mycpy(src,dst);
//	printf("%s\n",dst);
//	
//	//*dst-1!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	printf("%s\n",dst+1);
//	printf("%p\n",dst);
//	printf("%p\n",&dst[0]);
//	printf("%p\n",dst+3);
//	printf("%p\n",&dst[3]);
//	
//	free(dst);
//	return 0;
//	
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* mycpy(char *dst,char const *src)
{
	char *ret=dst;
//	while(*src!='\0')
	while(*dst++=*src++)//可以合并  
	{
//		*dst++=*src++;
//		*dst++;
//		*src++;
	}
	*dst=*src;
//	return dst; //错误 此时dst指向地址早都变了  应提前记录 
	return ret;
}
int main(int agrc,char const *agrv[])
{
	char src[]="hellowo";
	char *dst=(char*)malloc(strlen(src)+1);
	dst=mycpy(dst,src);	
	printf("%s",dst);
	free(dst);
	return 0; 
}

















