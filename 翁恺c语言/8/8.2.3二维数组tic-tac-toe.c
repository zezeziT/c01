//#include <stdio.h>
//int main()
//{
//	int a[3][5];
//	int i;
//	for(i=0;i<3;i++){
//		int j;
//		for(j=0;j<5;j++){
//			a[i][j]=i*j;
//			printf("%d",a[i][j]);
//			if((j+1)%5==0){
//				printf("\n");
//			}else{
//				printf("\t"); 
//			}
//		}
//	}
//}

////3x3����Ϸ
//#include <stdio.h>
//int main()
//{
//	int a[3][3];
//	printf("������9����,1��ʾx��0��ʾo");
//	int i;
//	for(i=0;i<3;i++){
//		int j;
//		for(j=0;j<3;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//
//	
//	for(i=0;i<3;i++) 
//	{
//		if (a[i][0]==a[i][1]&&a[i][1]==a[i][2])//�ж�����û����ȵ� 
//		{
//			if(a[i][0]){
//				printf("��ʤһ��ΪX"); 
//			}
//			else{
//				printf("��ʤһ��ΪO"); 
//			}
//			return 0;
//		}
//			
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		if (a[0][i]==a[1][i]&&a[1][i]==a[2][i])//�ж�����û����ȵ�
//		{
//		if(a[0][i]){
//			printf("��ʤһ��ΪX"); 
//		}
//		else{
//			printf("��ʤһ��ΪO"); 
//		}
//		return 0;
//		}
//	}
//	
//	if (a[0][0]==a[1][1]&&a[1][1]==a[2][2])//�ж����Խ��� 
//	{
//		if(a[0][0]){
//			printf("��ʤһ��ΪX"); 
//		}
//		else{
//			printf("��ʤһ��ΪO"); 
//		}
//		return 0;
//	}
//	
//	if (a[0][2]==a[1][1]&&a[1][1]==a[2][0])//�жϷ��Խ��� 
//	{
//		if(a[0][2]){
//			printf("��ʤһ��ΪX"); 
//		}
//		else{
//			printf("��ʤһ��ΪO"); 
//		}
//		return 0;
//	}
//	
//	printf("���˻�ʤ"); 
//		
//	
//}


////����� ����� �� ���Խ������ 
//#include <stdio.h>
//int main()
//{
//
//	const int size=3; //��һ����������ʾ�ȽϷ��� Ҳ���ں����޸� �ö����鶼���峤�ȱ��� 
//	int a[size][size];
//	printf("������9����,1��ʾx��0��ʾo");
//	int i;
//	for(i=0;i<size;i++){
//		int j;
//		for(j=0;j<size;j++){
//			scanf("%d",&a[i][j]); //��ʼ������ �������� 
//		}
//	}
//
//	int j;
//	//������ж�
//	int numofO,numofX;
//	int result=-1;	
//	for(i=0;i<size&&result==-1;i++){
//		numofO=numofX=0;
//	
//		for(j=0;j<size;j++){
//			if(a[i][j]==1){
//				numofX++;
//			}else{
//				numofO++; 
//			}
//		}
//		if(numofX==size){
//			result=1;
//		}else if(numofO==size){
//			result=0;
//		}
//		
//	}
//	if(numofX==size||numofO==size){
//			if(result==1){
//		printf("��ʤ����X"); 
//		}else if(result==0){
//			printf("��ʤ����O");
//		}else{
//			printf("û�л�ʤ��");
//		}
//		return 0;
//	} 
//	
//	//�ж������
//	for(j=0;j<size&&result==-1;j++){
//		numofO=numofX=0;
//		for(i=0;i<size;i++){
//			if(a[i][j]==1){
//				numofX++;
//			}else{
//				numofO++; 
//			}
//		}
//		if(numofX==size){
//			result=1;
//		}else if(numofO==size){
//			result=0;
//		}
//		
//	} 
//	if(numofX==size||numofO==size){
//			if(result==1){
//		printf("��ʤ����X"); 
//		}else if(result==0){
//			printf("��ʤ����O");
//		}else{
//			printf("û�л�ʤ��");
//		}
//		return 0;
//	} 
// 
// 	numofO=numofX=0;
//	//�ж����Խ������
//	for(i=0;i<size;i++){
//		
//		if (a[i][i]==1){
//			numofX++;
//		}else{
//			numofO++;
//		}
//	} 
//	if(numofX==size){
//			result=1;
//		}else if(numofO==size){
//			result=0;
//		}
//	if(numofX==size||numofO==size){
//			if(result==1){
//		printf("��ʤ����X"); 
//		}else if(result==0){
//			printf("��ʤ����O");
//		}else{
//			printf("û�л�ʤ��");
//		}
//		return 0;
//	} 
//		
//	numofO=numofX=0;	
//    for(i=0;i<size;i++){
//    	
//		if (a[i][size-i-1]==1){
//			numofX++;
//		}else{
//			numofO++;
//		}
//	} 
//	if(numofX==size){
//			result=1;
//		}else if(numofO==size){
//			result=0;
//		}
//		
//	if(result==1){
//		printf("��ʤ����X"); 
//	}else if(result==0){
//		printf("��ʤ����O");
//	}else{
//		printf("û�л�ʤ��");
//	}
//
//
//}


#include <stdio.h>
int main()
{

	const int size=3; //��һ����������ʾ�ȽϷ��� Ҳ���ں����޸� �ö����鶼���峤�ȱ��� 
	int a[size][size];
	printf("������9����,1��ʾx��0��ʾo");
	int i;
	for(i=0;i<size;i++){
		int j;
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]); //��ʼ������ �������� 
		}
	}

	int j;
	//������ж�
	int numofO,numofX;
	int result=-1;	
	for(i=0;i<size&&result==-1;i++){
		numofO=numofX=0;	
		for(j=0;j<size;j++){
			if(a[i][j]==1){
				numofX++;
			}else{
				numofO++; 
			}
		}
		
		//���ж� 
		if(numofX!=size&&numofO!=size){
			numofO=numofX=0;	
			for(j=0;j<size;j++){
				if(a[j][i]==1){
					numofX++;
				}else{
					numofO++; 
				}
			}
		}
		
		if(numofX==size){
			result=1;
		}else if(numofO==size){
			result=0;
		}
			
			
		//�ж����Խ������
		numofO=numofX=0;
		for(i=0;i<size;i++){
			
			if (a[i][i]==1){
				numofX++;
			}else{
				numofO++;
			}
		} 
		if(numofX==size){
				result=1;
			}else if(numofO==size){
				result=0;
			}
			
		numofO=numofX=0;	
	    for(i=0;i<size;i++){
	    	
			if (a[i][size-i-1]==1){
				numofX++;
			}else{
				numofO++;
			}
		} 
		if(numofX==size){
				result=1;
			}else if(numofO==size){
				result=0;
			}
			
		if(result==1){
			printf("��ʤ����X"); 
		}else if(result==0){
			printf("��ʤ����O");
		}else{
			printf("û�л�ʤ��");
		}
		
	} 

}




����ش� 


