#include <stdio.h>
#include <string.h>
int mylen(const char *a)
{
	int cnt=0; 
	while(*a!='\0'){
		cnt++;
		*a++;
	}
//	int i;
//	for(i=0;a[i]!='\0';i++){
//		cnt++;
//	}
	return cnt;	
}
int main(int argc,char const *argv[])
{
	char line[]="hello";
	int len;
	len=mylen(line);
	printf("mylen=%d\n",len);
	printf("myszie=%d\n",len+1);
	printf("strlen=%lu\n",strlen(line));
	printf("sizeof=%lu\n",sizeof(line));
	return 0;
 } 
