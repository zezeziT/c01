// strcchr ��߿�ʼ���� strcchr �ұ߿�ʼ����  ����ֵ��*char 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int agrc,char const *agrv[])
{
	char s[]="hello";	
	char*p= strchr(s,'l');	
	printf("%s\n",p);
	// mybefore  ���� �������ã����� 
//	char *before=(char*)malloc(strlen(s)-strlen(p)+1);
//	before=strcpy(before,s);
//	printf("%s\n",before);

	//���l ǰ��� ��ʱ��*p='\0'
	char c=*p;
	*p='\0';
	printf("%s\n",s); 
	*p=c; //��ԭ 
	
	//����ڶ���l��ʼ�� 
//	char *t=strchr(p+1,'l');
//	printf("%s\n",t);
//	free (t);


	char *t=(char *)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("%s\n",t);   //���һ�٣�������ֱ�����pҲ��һ����ѽ 
	return 0;
} 
