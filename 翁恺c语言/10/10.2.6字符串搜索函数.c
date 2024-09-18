// strcchr 左边开始查找 strcchr 右边开始查找  返回值是*char 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int agrc,char const *agrv[])
{
	char s[]="hello";	
	char*p= strchr(s,'l');	
	printf("%s\n",p);
	// mybefore  错误 毫无卵用！！！ 
//	char *before=(char*)malloc(strlen(s)-strlen(p)+1);
//	before=strcpy(before,s);
//	printf("%s\n",before);

	//输出l 前面的 临时让*p='\0'
	char c=*p;
	*p='\0';
	printf("%s\n",s); 
	*p=c; //复原 
	
	//输出第二个l开始的 
//	char *t=strchr(p+1,'l');
//	printf("%s\n",t);
//	free (t);


	char *t=(char *)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("%s\n",t);   //多此一举？？？？直接输出p也是一样的呀 
	return 0;
} 
