//cahr *dst=(char*)malloc(strlen(src)+1);
//strcpy(dat,src); 
//�����ص� �������˴�����ͻ 
//ͬʱ����\0",����Ҫ���ַ������ݳ���strlen������+1; 
//#include <stdio.h>
//#include <stdlib.h> 
//#include <string.h>
//char* mycpy(char *src,char *dst)   //��char*����dst ����void 
//{
//
//	char *ret=dst; 
//	do{
//		*dst=*src;
//		*dst++;
//		*src++;	
//	}while(*(src-1)!='\0');    //���� ����*src-1 ָ���ֵ-1 Ӧ����*��src-1�� ��ַ-1   
////	*dst=*src;
//	return ret; //���� dst����++  �ַ����׵�ַ���Ѿ��仯 ָ����'\0' ��ԭ����һ��  ��Ҫ��ǰ��¼ָ��λ�� 
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
////	}while(src[i-1]!='\0');   //��src[i--]��� ��ı�i��ֵ �����src[i] Ȼ���ٶ��⸳ֵ\0" 
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
	while(*dst++=*src++)//���Ժϲ�  
	{
//		*dst++=*src++;
//		*dst++;
//		*src++;
	}
	*dst=*src;
//	return dst; //���� ��ʱdstָ���ַ�綼����  Ӧ��ǰ��¼ 
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

















