//��������min max
#include <stdio.h>
void minmax(int *a,int len,int *pmin,int *pmax);
//void minmax(int *a,int len,int *pmin,int *pmax);
int main()
{
	int a[]={99,10,3,4,5,6,99,8,9,12,13,14,16,17,21,7,109};
	
	
	printf("sizeof a=%d\n",sizeof(a)) ;	
	printf("&a=%p\n",a);
	
	
	
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	
	printf("%p\n",&min);
	int *p=&min;
	printf("*p=%d\n",*p);  //*p��ֵ pָ��min ��ν==min��ֵ 
	printf("p[0]=%d\n",p[0]);
	printf("%p\n",p);//p�ǵ�ֵַ ��min�ĵ�ַ 
	
	*a=99 ;   //Ī��ָ�������1��Ԫ�� 
	printf("a[0]=%d",a[0]); 
	
	return 0;
} 


void minmax(int *a ,int len,int *pmin,int *pmax)      //a[]�൱��ָ��1 ��������д������  Ҳ����*a���� 
//void minmax(int *a ,int len,int *pmin,int *pmax)
{
	
	printf("sizeof a=%d\n",sizeof(a)) ;    //sizeof(a)==sizeof(*int)

	printf("&a=%p\n",a);
	a[0]=999;
	*pmax=*pmin=a[0];
	int i;
	for(i=1;i<len;i++){
		if(a[i]<*pmin){
			*pmin=a[i];
		} 
		if(a[i]>*pmax){
			*pmax=a[i];
		}
	}

}

