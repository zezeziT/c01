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

////3x3棋游戏
//#include <stdio.h>
//int main()
//{
//	int a[3][3];
//	printf("请输入9个数,1表示x，0表示o");
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
//		if (a[i][0]==a[i][1]&&a[i][1]==a[i][2])//判断行有没有相等的 
//		{
//			if(a[i][0]){
//				printf("获胜一方为X"); 
//			}
//			else{
//				printf("获胜一方为O"); 
//			}
//			return 0;
//		}
//			
//	}
//	
//	for(i=0;i<3;i++)
//	{
//		if (a[0][i]==a[1][i]&&a[1][i]==a[2][i])//判断列有没有相等的
//		{
//		if(a[0][i]){
//			printf("获胜一方为X"); 
//		}
//		else{
//			printf("获胜一方为O"); 
//		}
//		return 0;
//		}
//	}
//	
//	if (a[0][0]==a[1][1]&&a[1][1]==a[2][2])//判断正对角线 
//	{
//		if(a[0][0]){
//			printf("获胜一方为X"); 
//		}
//		else{
//			printf("获胜一方为O"); 
//		}
//		return 0;
//	}
//	
//	if (a[0][2]==a[1][1]&&a[1][1]==a[2][0])//判断反对角线 
//	{
//		if(a[0][2]){
//			printf("获胜一方为X"); 
//		}
//		else{
//			printf("获胜一方为O"); 
//		}
//		return 0;
//	}
//	
//	printf("无人获胜"); 
//		
//	
//}


////行相等 列相等 正 反对角线相等 
//#include <stdio.h>
//int main()
//{
//
//	const int size=3; //用一个变量名表示比较方便 也便于后期修改 好多数组都定义长度变量 
//	int a[size][size];
//	printf("请输入9个数,1表示x，0表示o");
//	int i;
//	for(i=0;i<size;i++){
//		int j;
//		for(j=0;j<size;j++){
//			scanf("%d",&a[i][j]); //初始化数组 输入数据 
//		}
//	}
//
//	int j;
//	//行相等判断
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
//		printf("获胜方是X"); 
//		}else if(result==0){
//			printf("获胜方是O");
//		}else{
//			printf("没有获胜方");
//		}
//		return 0;
//	} 
//	
//	//判断列相等
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
//		printf("获胜方是X"); 
//		}else if(result==0){
//			printf("获胜方是O");
//		}else{
//			printf("没有获胜方");
//		}
//		return 0;
//	} 
// 
// 	numofO=numofX=0;
//	//判断正对角线相等
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
//		printf("获胜方是X"); 
//		}else if(result==0){
//			printf("获胜方是O");
//		}else{
//			printf("没有获胜方");
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
//		printf("获胜方是X"); 
//	}else if(result==0){
//		printf("获胜方是O");
//	}else{
//		printf("没有获胜方");
//	}
//
//
//}


#include <stdio.h>
int main()
{

	const int size=3; //用一个变量名表示比较方便 也便于后期修改 好多数组都定义长度变量 
	int a[size][size];
	printf("请输入9个数,1表示x，0表示o");
	int i;
	for(i=0;i<size;i++){
		int j;
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]); //初始化数组 输入数据 
		}
	}

	int j;
	//行相等判断
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
		
		//列判断 
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
			
			
		//判断正对角线相等
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
			printf("获胜方是X"); 
		}else if(result==0){
			printf("获胜方是O");
		}else{
			printf("没有获胜方");
		}
		
	} 

}




大错特错 


