#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i=0;
	char *s="hello world";  //ֻ����д ʵ������const *s 
	
	printf("%c\n",s[0]);//����� ֻ����д 
	
//	s=(char*)malloc(100*1024*1024*1024);
	char *s2="hello world";
	char s3[]="hello world"; 
	printf("%p\n",&i);
	printf("s=%p\n",s);
	printf("s2=%p\n",s2);
	printf("s3=%p\n",s3);
	

	s3[0]='j';
	printf("%c\n",s3[0]);
	
	s[0]='i'; 
	printf("%c\n",s[0]);//sָ������ ����� ֻ����д ���ɸ��� 
	
	free(s);
	return 0;
}
 















