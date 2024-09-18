#include <stdio.h>
#include "max.h"  把max.h里面的全部copy过来
 
#include "min.h"   把min.h的全部copy过来


//#include “某某某” 把某某某里面的copy过来 



//int max(int a,int b);


/*  不可重复 
struct Node{
	int a;
	char b;
};

struct Node{
	int a;
	char b;
};
*/


int main(void)
{
	int a=5;
	int b=6;
	printf("max=%d",max(a,gAll));
}


