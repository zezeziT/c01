#include <stdio.h>
#include <string.h>
int main()
{
	
	char word[8];
	char word2[8];
	scanf("%7s",word);  //%7s ����7��ֹͣ ���򵥶�%s���Ʋ��˶������ 
	scanf("%7s",word2);
	printf("%s##\n",word);
	printf("%s##\n",word2);
	printf("%s##%s##\n",word,word2);
	return 0;
	
}
