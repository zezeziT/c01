//int *a=(int*)malloc(n*sizeof(int))
//#include<stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int number;
//	int *a;
//	int i;
//	printf("s����������");
//	scanf("%d",&number);
//	// int a[number];
//	a=(int*)malloc(number*sizeof(int)) ;
//	for(i=0;i<number;i++){
//		scanf("%d",&a[i]);
//	}
//	for(i=number-1;i!=-1;i--){
//		printf("%d\n",a[i]);
//	}
//	free(a);
//	return 0;
//	
//	
//	
////	int *p=a;
////
////	scanf("%d",&i);
////	for(*p=i;*p!=-1;*p++){
////		*p=i;
////		scanf("%d",&i);	
////	}
////	for(*p=i;*p!=-1;*p++){
////		printf("%d\n",i);
////	}
//}




//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	void *p;
//	int cnt=0;
//	while(p=malloc(100*1024*1024)){
//		cnt++;
//		
//	}
//	printf("������%d00MB�Ŀռ�",cnt);
//	free(p);
//	return 0;
//}




#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	
	//void *p;
	//p=malloc(100*1024*1024);
	//p++;
	//free(p); //���� ֻ��free�Լ�֮ǰ����� 


//  void *p;	
//	int i;
//	p=&i;
//	free(p) ;//���� ֻ��freeϵͳ���Լ������ ����free���˵� 
	
	void *p=0;  //��ʼ��Ϊ0��ַ�������Ժ󲻸�ֵ��Ҳ��Ȼ����free 
	free(p); 
	free (p); //���󣡣����� free��������free �Ѿ�û���� �ǿ��Ѿ�������p�� 
	free(NULL);//�൱��free(0);������һ�� ����ָ�붨��ʱ��ʼ��Ϊ0������������� 
	
	return 0;
}





















