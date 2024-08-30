#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int i=0;
	char *s="hello world";  //只读不写 实际上是const *s 
	
	printf("%c\n",s[0]);//有输出 只读不写 
	
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
	printf("%c\n",s[0]);//s指向代码段 无输出 只读不写 不可更改 
	
	free(s);
	return 0;
}
 















