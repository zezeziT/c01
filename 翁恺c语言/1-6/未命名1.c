


#include <stdio.h>
#include<math.h>		// n�η����� pow(m,n) m��n�η� 
#include <stdlib.h>    //����� rand() 
#include <time.h>    
int main()


//���������������������������Լ��

//���磺

//���룺20 40

//�����20
	 
/*	int a,b;
	scanf("%d %d",&a,&b);
	int min=a;
	if(a>b){
		a=b;
		b=min;
	}
	int i;
	int c=0;
	for(i=2;i<=a;i++){
		if(a%i==0&&b%i==0){
//			printf("%d",i);
			c=i;
			continue;
		}
	}
	printf("�������=%d",c);*/
	
/*	//9X9
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf("%d��%d=%d\t",j,i,i*j);
			if(i==j){
				printf("\n");
			}
		}
	}
*/


/*
{
	int a = 1;
	printf("%d\n",a);
	printf("%4d\n",a);
	printf("%.2d\n", a);
	printf("%-2d\n",a);
	printf("%02d\n",a);
	return 0;
}
*/

/*{
	int i = 0;
	//��������
	for(i=1; i<=9; i++)
	{
		//��ӡÿһ�����ݣ�ÿ����i�����ʽ
		int j = 0;
		for(j=1; j<=i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
*/

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

/*
{
	int i=1;
	float sum=0;
	float j=1.0;
	for(i=1;i<=100;i++){
//		j *=-1;
		sum +=j/i;
		j *=-1;
	} 
	printf("%f",sum);
}
*/


//�жϼ�λ�� 
//{
//	int a;
//	int count=0;
//	scanf("%d",&a);
//	int b=a;
//	while(a!=0){
//		a /=10;
//		count++;
//	}
//	printf("%d��%dλ��",b,count);
//	return 0;
//
//
//}


//{
//	int i;
//	int count=0;
//	scanf("%d",&i);
//
//	for(;i!=0;){
//		i /=10;
//		count++;
//	}
//	printf("%d��%dλ��",i,count);
//	return 0;
//		
//}

//{
//	int i;
//	int a=i;
//	int count=0;
//	scanf("%d",&i);
//	if (i>=00)
//	{
//	do{
//		i /=10;
//		count++;
//	}while(i!=0);
//	printf("shi%dweishu",count);
//	}
//	return 0;
//		
//}

//��log2x��x/=2����������x>1ʱ��


//�������һ�������û����£��²��ԵĻ������û����˻���С�ˣ��������˸����û����˶��ٴΡ�



// 
//{
//	int number=rand();
//	printf("�����,����Ŷ��");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;//��forѭ�� һ��ʼ������һ�������Ѿ��ǲ���һ�Σ�Ӧ��count��ʼΪ1�� ͬ�� 
//	for(;i!=number;){
//		if(i>number){
//			printf("���ִ���");
//		
//		}else{
//			printf("����С��");
//			
//		}
//		count++;
//		printf("���ٴ��������֣�") ;
//		scanf("%d",&i);
//		 
//	}
//	printf("��ϲ�¶��ˣ�����%d��",count);
//	return 0;
//}

//{
//	int number=rand();
//	printf("�����,����Ŷ��");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;
//	while(i!=number){
//		if(i>number){
//			printf("���ִ���");
//		
//		}else{
//			printf("����С��");
//			
//		}
//		count++;
//		printf("���ٴ��������֣�") ;
//		scanf("%d",&i);
//		 
//	}
//	printf("��ϲ�¶��ˣ�����%d��",count);
//	return 0;		
//	}	
//	


//{
//	int number=rand();
//	printf("�����,����Ŷ��");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;
////		if(i==number){
////			printf("��ϲ���ˣ�������1��");
////			return 0; 
//	do{
//	
//		
//		if(i>number){
//			printf("���ִ���");
//			count++;
//			printf("���ٴ��������֣�") ;
//			
//		scanf("%d",&i);
//		
//		}
//		if(i<number){
//			printf("����С��");
//			count++;
//			printf("���ٴ��������֣�") ;
//		scanf("%d",&i);
//			
//		} 
//	}while(i!=number);
////// 1����ȷ �������2�Σ�Ȼ���3����ȣ��������ѭ����count����++��������Ҫ�ֶ�++  int count=0; 
////	if (count==1){
////		count =1;
////	}else{
////		count++;
////	}
//	printf("��ϲ�¶��ˣ�����%d��",count);
//	return 0;	
//				
//}

//����һϵ��������������-1ʱ��ֹ��Ȼ��������ǵ�ƽ����
//{
//	int i=0;
//	int count=-1;
//	int sum=0;
////	scanf("%d",&i);
//	for(;i!=-1;){
//		sum +=i;
//		printf("�������������������-1��ʾ��ֹ��") ; 
//		scanf("%d",&i);
//		count++;
//	}
//	double j =0;
//	j=1.0*sum/count;
//	printf("%f",j);
//	return 0;
//}

//��������
//{
//	int i;
//	int k=0;
//	int j=0;
//	scanf("%d",&i);
//	while(i!=0){
//		k=i%10;
//	
//		j = j*10+k;
//		i /=10;
//	}
//	printf("%d",j);
//}
//


//n�� 
//{
//	int n;
//	
//	scanf("%d",&n);
//	int i=1;
//	int j=n;
//	for(;i<n;i++){
//		j *=i;
//	} 
//	printf("%d",j);
//}
//

//�磺���100�ڵ�������for����for����һ��for����1~100���ڶ�����������ǲ���������

//{
//	int i,j;
//	for(i=2;i<=100;i++){
//		for(j=2;j<=i;j++){
//
// 				if((i%j==0)&&(i!=j)){
//	
// 					break;}
// 				if((i%j==0)&&(i==j)){
//
//					printf("%d\n",i);
//					break;
//					
//				}}}}


//			if(i%j==1){   //̫Ҫ�� ��% ����/!!!!!!! 
//				break;
//			} 
//			}
//			if(i==j){
//				printf("%d\n",i);
//			}
//		}
//	}

//{
//	int i=8;
//	if(3>2){
//		printf("%d",i);
//	}else{
//		printf("%d",2i);
//	}
//}



//��1,2,5Ԫ�ճ�100
//{
//	int m;
//	scanf("%d",&m); 
//	int i,j,k;
//	int sum=0;
//	
//	int exit=0;
//	
////	int count=0;
//	for(i=0;i<=m;i++){
//		for(j=0;j<=m/2;j++){
//			for(k=0;k<=m/5;k++){
//				sum=i+j*2+k*5;
//				if(sum==m){
//					printf("%d��1Ԫ��%d��2Ԫ��%d��5Ԫ�ɴ�%dԪ\n",i,j,k,m);
//					
//					exit =1;
//					break;
//					}
//					
////					return 0;  //goto out Ҳ�������1������
//
////   ���count�����ݽ��� 
////				 count++;
////				 if(count==5){
////				 	return 0;
////				 } 
//
//
//				}
//				if(exit){
//					break;
//				}
//			}
//			if(exit){
//				break;
//			}
//		}
//	}	
//

//ǰn�����1+1/2+1/3+����+1/n. 
//{
//	int i,j;
//	int n;
//	scanf("%d",&n);
//	double sum=0;
//
////1-1/2+1/3-1/4+����
////��Ҫ��� 
//	int sign=1 ;         //-
//	for(i=1;i<=n;i++){
//		sum +=sign*1.0/i;
//		sign=-sign;      //--
//	}
//	printf("%f",sum);
//}
//




 
// //B:���м�λ����Ȼ�� i/10 һ��һ�������λ ������0����
// {
// 	//���м�λ�� ��ʲôʱ�����
//	 int i;
////	 int count =0;
//	int count =1;    //����Ҫ��count�ļ��η��������� ����ֱ�ӳ��� eg 123 count=1000
//	 scanf("%d",&i);
//	 int a=i;
//	 if(i==0){
//	 	printf("0");
//	 	return 0;
//	 }
//	 while(i!=0){
//	 	i /=10;
//	 	count *=10;
//	 } 
//
////	 count -=1
//
//	count /=10; 
//	 int b;
//	 for(a;count!=0;){   //�м� ���� count��=1������1ʱ������1λ 
//	 	b =a/count;
//	 	printf("%d",b);
//
////�ο�csdn  ���һλ������ÿ��ǿո� ����ȫ��û�д�	 	
//		if(count>=10){
//			printf(" ");    //ÿ������һλ�ʹ�ո����ۣ��������һ�����ֲ��ô�ո�������count=10��ʱ�����Ҫ��J�ո�
//		}
//
//	 	
//	 	a %=count;
//	 	count /=10;
//	 }
// } 


//�����Լ��

//��ͨһ��һ���Ӵ������� 
//{
//	int i,j;
//	scanf("%d  %d",&i,&j);
//	int max=i;
//	
//	if(i<j){
//		max=j;
//		j=i;
//		i=max;
//	}
//	int k=j;
//	for(;j!=0;j--){
//		if((i%j==0)&&(k%j==0)){
//			printf("���Լ��λ%d",j);
//			break;
//		}
//	}
//}

//շת��� m��n �Լ�m��n������ӵ����ͬ�����Լ�� 
//{
//	int i,j;
//	int k;
//	scanf("%d %d",&i,&j); 
//	if((i&&j)==0){
//		printf("�����Լ��");
//		return 0;
//	}
//	do{
//	k=i%j;
//	i=j;
//	j=k;
//	}while(j!=0);
//	printf("%d",i);
//	
//}
//

//����ϸ���������������
//����<=6��������A����A��ʼ�������ĸ����֣������������������ɵ����ظ����ֵ���λ����
//���������������λ������С������ÿ��6����������ĩ�޶���ո�

//{
//	int m;
//	scanf("%d",&m);
//	int i=m;
//	int k=m;
//	int j=m;
//	int a=0;
//	int count=0;
//	for(;i<=m+3;i++){
////		j=m;//��Ϊ��Ҫ�ٴν���ѭ�������Գ�ʼ��k��j��Ҳ���Է��ڳ�ʼѭ����ǰ�� 
//		for(;j<=m+3;j++){
//			if(i!=j){
////				k=m;//
//				for(;k<=m+3;k++){
//					if((j!=k)&&(k!=i)){
//						a=i*100+j*10+k;
//						count++;
//						printf("%d ",a);
//						�����д�Ӧ�����ж��Ƿ��У��ȿո񡰡���6����������һ���ո� 
//						if (count%6==0){
//						printf("\n");
//					}
//				}
//			}
//			k=m; //��Ϊ��Ҫ�ٴν���ѭ�������Գ�ʼ��k��j��Ҳ���Է��ڳ�ʼѭ����ǰ�� 
//			
//		}
//	}
//	j=m;
//}
//}

// 

//{
//	int m;
//	scanf("%d",&m);
//	int i=m;
//	int k=m;
//	int j=m;
//	int a=0;
//	int count=0;
//	while(i<=m+3){
//		j=m;
//		while(j<=m+3){
//			k=m;
//			while(k<=m+3){
//				if((i!=j)&&(j!=k)&&(k!=i)){
////					a=i*100+j*10+k;//Ҳ������������ijk�Ͳ��ü����ˣ���
//					printf("%d%d%d",i,j,k);				 	
//					count++;					
//					if (count%6==0){
//						printf("\n");	
//					}
//					else{
//						printf(" ");
//					}
//				
//				
//			}
//			k++;//�ڽ�����һ��ѭ��ǰ��Ҫk+1��ѭ����䣡���� 
//		}
//		j++;// 
//		}
//		i++;//
//	}	
//}


//
//{
//	int m;
//	scanf("%d",&m);
//	int i=m;
//	int k=m;
//	int j=m;
//	int a=0;
//	int count=0;
//	for(;i<=m+3;i++){
//		j=m;
//		for(;j<=m+3;j++){
//			k=m;
//			for(;k<=m+3;k++){
//				if((i!=j)&&(j!=k)&&(k!=i)){
////				a=i*100+j*10+k;//Ҳ������������ijk�Ͳ��ü����ˣ���
//				printf("%d%d%d",i,j,k);				 	
//				count++;					
//				if (count%6==0){
//					printf("\n");	
//				}
//				else{
//					printf(" ");
//				}	
//				
//			}
//				
//			}
//		}
//	} 
//}


//�ɻ���ˮָһ��Nλ��������N>=3)������ÿλ�ϵ����ֵ�N����֮�͵������Լ����磺153=13+33+53;
//����һ��N��3<=N<=7������˳���������Nλˮ�ɻ�����
//{
//	int N;
//	scanf("%d",&N);
//	int n=N;

////��nλ���ķ�Χ��	min<=i<max    max-1��������� 
//	int min=1;
//	int max=10;	
//	do{
//		min *=10;
//		max *=10;
//		N--;
//	}while(N>=2);
//
//	int i;
//	
//	for(i=min;i<max;i++){
//		int sum =0;
//		int j=i;		



////����ÿ��λ����ӵĺ� 

//////����ÿ��λ����n�η�	���취 
//
////		while(j>0){
////			int count =n;				
////			int a= j%10;
////			int b=a; //b=1�Ļ� count>=1 doѭ����Ҫ��ѭ��һ��  bÿ�λḴλΪ��a ֮ǰb��n�η���sum���� 	
////			do{
////			
////				b *=a;
//////				a *=a;//������� eg��a=3; a=a*a=9; a=9; a*a=9x9=81�� ����Ӧ����3x3x3=27 a��ֵ���ˣ����� 
//////				ע�����a��n�η��� ��Ҫ������				 
////				count--;
////			}while(count>1);
////			sum +=b;
////			j /=10; //����ֱ����i����i�ᵼ�������sum�Ƚ�ʱiֻʣ0��������ǰ��i���� 
//////�ж��Ƿ��� 
////			
////		}
////		if(i==sum){
////			printf("%d\n",i);
////			}
////	}	




////���ôη����� ��Ҫͷ���� 	#include<math.h>	pow(m, n);	m��n�η� 
//		while(j>0){
//			sum +=pow(j%10,n);
//			j /=10;
//		}				
//
////�ж��Ƿ���		
//		if(i==sum){
//		printf("%d\n",i);
//		}
//	}
//
//}



//��ӡ�˷��ھ���
//a*b��a��b����ѭ����
//��Ҫע��������⡣��������һλ������������ո���λ�����һ���ո�
// ��������  \tռ8������  %2d 2������ �Ҷ��� %-2d 2������ �����

//{
//	int i,j;
//	for(i=1;i<=9;i++){
//		for(j=1;j<=i;j++){
//			
//	//\tռ8������  %2d 2������ �Ҷ��� %-2d 2������ ����� 
//			printf("%d��%d=%d-2d",j,i,i*j);
//			if(i==j){
//				printf("\n");
//			}
//			else{
//				printf(" ") ;
//			} 
//		
//		}
//	}
//}


//ͳ�����������
//����M��N�����ڵ������ĸ�������������͡�

//{
//	int m,n;
//	scanf("%d %d",&m,&n);
//	int i,j;
//	int min =m;
//	if(m>n){
//		n=m;
//		m=min;
//	} 
//	
////��m=1ʱ���������Ļ���1����Ϊ�������֣�������ǰ�ų� ����imprise��־�� 
//	if(m==1){
//		m=2;
//	}
//	
//    int count =0;
//    int sum=0;		
//	
//	
//	for(i=m;i<=n;i++){
////		for(j=m;j<=i;j++)���� j=2ѽ����2��ʼ���������� 
//		for(j=2;j<=i;j++)
//		
////		{
//			
////���Ի���һ�£�Ҫ��i%j==0��ֱ����������ȥ�ж��Ƿ���ȣ��Ͳ���else��break�ˣ� 
////			if(i%j==0){
////				if(i==j){
////					count++;
////					printf("%d\n",i);
////					sum +=i;
////				}
////				else{
////					break;
////				}
////			}
////		}
//			
//			
//			
//		{
//				
//			if(i%j==0){
//				break; //������ǰ�Գ���ѭ�� 
//			} 
//		
//		}
////�Ƚ��Ƿ�������� ���� 
//		if(i==j){
//			sum +=i;
//			count++;
//		}
//		
//	}
//	printf("%d����������Ϊ%d",count,sum);
//}

// isprime �����־ �����2��i-1���������� ˵���������� �ñ�־Ϊ0 Ϊ1��ʱ���� ��һЩ����ͼ��� 
//{
//	int m,n;
//	int i,j;
//
//	int count=0;
//	int sum=0;
//	scanf("%d %d",&m,&n);
//	if(m==1){
//		m++;
//	}
//	for(i=m;i<=n;i++){
//		int isprime=1;//��Ҫ���ж�ѭ��ǰ ��Ϊ��һ��for����ܻ�ʹisprime��0  
//
//		for(j=2;j<i;j++){
//			if(i%j==0){
//				isprime=0;
//				break;
//			}
//		}
//		if(isprime){
//			count++;
//			sum +=i;
//		}
//	}
//	printf("%d %d",count,sum);
//	return 0;		
//}

//������Ϸ
//����Ҫ�µ����ֺͲµ����������������too big,С�����too small��ֱ���¶Ի��ߴ����ù�����û����븺��Ϊֹ
//���о���ע�ⲻͬ�����µ���������Ҳ������
//һ�βµ���BINGO��
//���βµ���LUCKY YOU��
//�������ϲµ���GOOD GUESS!


//{
//	int cnt;
//	printf("������Ҫ�µ���������") ; 
//	scanf("%d",&cnt); 
//	int b ;
//	b=rand();
//	int j=0;
//	int a;
//	int isprime=0;
//	do{
//		printf("������µ����� "); 
//		scanf("%d",&a);
//		if(a<0){
//			break;
//		}
//		j++;
//		if(a==b){
//			isprime =1;
//			break;
//		}
//		if(a>b){
//			printf("too big\n");
//		}
//		if(a<b){
//			printf("too small\n");
//		}
//
//	}while(j<cnt);
//	
////�¶Ե���� isprime==1��Ϊ�ж�	
//	if(isprime){
//		if(j==1){
//			printf("BINGO��");
//		}
//		else if(j<=3){
//			printf("LUCKY YOU��");
//		}
//		else  {
//			printf("GOOD GUESS!");
//		}	
//	}
//	else{
//		printf("game over");
//	}
//	
//}

//n�����
//2/1+3/2+5/3+8/5+������ǰn��֮�ͣ�
//�ӵڶ��ʼ��ÿһ��ķ�����ǰһ��ķ��Ӻͷ�ĸ֮�ͣ���ĸ��ǰһ��ķ��ӣ�
//{
//	int n,k;   //���� ��int��ΧС ����i/j��� ���־ͱ为 ���Բ�ֹsum��double i��jҲҪ�� 
//	scanf("%d",&n);
//	int i=2,j=1;	
//	double sum=1.0*i/j;
//	int cnt=1;
//	do{
//	
//		k=i;
//		i=i+j;
//		j=k;
//		sum +=1.0*i/j;
//		cnt++;
//	}while(cnt<n);
//	printf("%f",sum);
//}


//Լ������ʽ
//����һ����ʽ����32/45����������ʽ��
//�����Լ��
//շת�����
//{
//	int i,j,k;
//	scanf("%d %d",&i,&j);
//	int i1=i;
//	int j1=j;
////�и������ 
//	int isprime=1;    
//	if(i<0){
//		i=-i;
//		isprime=-isprime;
//	}
//	if(j<0){
//		j=-j;
//		isprime=-isprime;
//	}
//	do{
//	k=i%j;
//	i=j;
//	j=k;
//	}while(j>0);
//		
//	printf("%d/%d=%d/%d",i1,j1,i1/i,j1/i);
//
//	
// } 

//��a��������
//����a,n������a+aa+aaa+����+n��a�ĺ�
//ѭ����ÿһ��a1=a1*10+a��
//{
//	int a,n;
//	scanf("%d %d",&a,&n);
//	int k=0;
//	int sum=0;
//	int i;
//	
//	for(i=1;i<=n;i++){
//		k =k*10+a;
//		sum +=k;
//	}
//	
//	printf("%d",sum);
//}


//  a++ ���ȼ��� ��+1�� ++a����+1.�ټ��� 
//{
//	int a=9;
//	int b=9;
//
//	
//	printf("a=%d b=%d",++a,b++);
//} 

//{
//	int a=0,b=1;
//	while(++a>0);
//	printf("int�������͵�������ǣ�%d\n",a-1);
//	while((a/=10)!=0)b++;
//	printf("int������������������λ��:%d",b);
//}

{
	float a,b,c;
	a=1.345f;
	b=1.123f;
	c=a+b;
	if(c==2.468)printf("���");
	else printf("����ȣ�c=%.10f����%f",c,c);
}















