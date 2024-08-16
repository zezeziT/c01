


#include <stdio.h>
#include<math.h>		// n次方函数 pow(m,n) m的n次方 
#include <stdlib.h>    //随机数 rand() 
#include <time.h>    
int main()


//给定两个数，求这两个数的最大公约数

//例如：

//输入：20 40

//输出：20
	 
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
	printf("最大公因数=%d",c);*/
	
/*	//9X9
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			printf("%d×%d=%d\t",j,i,i*j);
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
	//控制行数
	for(i=1; i<=9; i++)
	{
		//打印每一行内容，每行有i个表达式
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

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

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


//判断几位数 
//{
//	int a;
//	int count=0;
//	scanf("%d",&a);
//	int b=a;
//	while(a!=0){
//		a /=10;
//		count++;
//	}
//	printf("%d是%d位数",b,count);
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
//	printf("%d是%d位数",i,count);
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

//求log2x：x/=2，计数（当x>1时）


//计算机想一个数，用户来猜，猜不对的话告诉用户大了还是小了，最后猜中了告诉用户猜了多少次。



// 
//{
//	int number=rand();
//	printf("请猜数,整数哦：");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;//用for循环 一开始输入了一个数，已经是猜了一次，应该count初始为1； 同理 
//	for(;i!=number;){
//		if(i>number){
//			printf("数字大了");
//		
//		}else{
//			printf("数字小了");
//			
//		}
//		count++;
//		printf("请再次输入数字：") ;
//		scanf("%d",&i);
//		 
//	}
//	printf("恭喜猜对了，猜了%d次",count);
//	return 0;
//}

//{
//	int number=rand();
//	printf("请猜数,整数哦：");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;
//	while(i!=number){
//		if(i>number){
//			printf("数字大了");
//		
//		}else{
//			printf("数字小了");
//			
//		}
//		count++;
//		printf("请再次输入数字：") ;
//		scanf("%d",&i);
//		 
//	}
//	printf("恭喜猜对了，猜了%d次",count);
//	return 0;		
//	}	
//	


//{
//	int number=rand();
//	printf("请猜数,整数哦：");
//	int i; 
//	scanf("%d",&i); 
//	int count=1;
////		if(i==number){
////			printf("恭喜对了，仅猜了1次");
////			return 0; 
//	do{
//	
//		
//		if(i>number){
//			printf("数字大了");
//			count++;
//			printf("请再次输入数字：") ;
//			
//		scanf("%d",&i);
//		
//		}
//		if(i<number){
//			printf("数字小了");
//			count++;
//			printf("请再次输入数字：") ;
//		scanf("%d",&i);
//			
//		} 
//	}while(i!=number);
////// 1次正确 如果猜了2次，然后第3次相等，不会进入循环，count不会++，所以需要手动++  int count=0; 
////	if (count==1){
////		count =1;
////	}else{
////		count++;
////	}
//	printf("恭喜猜对了，猜了%d次",count);
//	return 0;	
//				
//}

//读入一系列正整数，输入-1时终止。然后输出他们的平均数
//{
//	int i=0;
//	int count=-1;
//	int sum=0;
////	scanf("%d",&i);
//	for(;i!=-1;){
//		sum +=i;
//		printf("请继续输入正数，输入-1表示终止：") ; 
//		scanf("%d",&i);
//		count++;
//	}
//	double j =0;
//	j=1.0*sum/count;
//	printf("%f",j);
//	return 0;
//}

//整数逆序
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


//n！ 
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

//如：输出100内的素数，for里有for（第一个for遍历1~100，第二个检验该数是不是素数）

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


//			if(i%j==1){   //太要命 是% 不是/!!!!!!! 
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



//用1,2,5元凑出100
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
//					printf("%d个1元，%d个2元，%d个5元可凑%d元\n",i,j,k,m);
//					
//					exit =1;
//					break;
//					}
//					
////					return 0;  //goto out 也可以输出1个结束
//
////   输出count组数据结束 
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

//前n项和求1+1/2+1/3+……+1/n. 
//{
//	int i,j;
//	int n;
//	scanf("%d",&n);
//	double sum=0;
//
////1-1/2+1/3-1/4+……
////需要变号 
//	int sign=1 ;         //-
//	for(i=1;i<=n;i++){
//		sum +=sign*1.0/i;
//		sign=-sign;      //--
//	}
//	printf("%f",sum);
//}
//




 
// //B:算有几位数，然后 i/10 一个一个输出高位 不够用0不齐
// {
// 	//算有几位数 看什么时候除玩
//	 int i;
////	 int count =0;
//	int count =1;    //后面要用count的几次方，不会算 所以直接成了 eg 123 count=1000
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
//	 for(a;count!=0;){   //切记 不是 count！=1；等于1时，还有1位 
//	 	b =a/count;
//	 	printf("%d",b);
//
////参考csdn  最后一位输出不用考虑空格 考虑全面没有错	 	
//		if(count>=10){
//			printf(" ");    //每输出最后一位就打空格，美观，除了最后一个数字不用打空格，所以是count=10的时候才需要大J空格
//		}
//
//	 	
//	 	a %=count;
//	 	count /=10;
//	 }
// } 


//求最大公约数

//普通一个一个从大往下试 
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
//			printf("最大公约数位%d",j);
//			break;
//		}
//	}
//}

//辗转相除 m和n 以及m和n的余数拥有相同的最大公约数 
//{
//	int i,j;
//	int k;
//	scanf("%d %d",&i,&j); 
//	if((i&&j)==0){
//		printf("无最大公约数");
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

//求符合给定条件的整数集
//给定<=6的正整数A，从A开始的连续四个数字，请输出所有由它们组成的无重复数字的三位数。
//输出满足条件的三位数，从小到大，且每行6个整数，行末无多余空格。

//{
//	int m;
//	scanf("%d",&m);
//	int i=m;
//	int k=m;
//	int j=m;
//	int a=0;
//	int count=0;
//	for(;i<=m+3;i++){
////		j=m;//因为还要再次进入循环，所以初始化k和j；也可以放在初始循环的前面 
//		for(;j<=m+3;j++){
//			if(i!=j){
////				k=m;//
//				for(;k<=m+3;k++){
//					if((j!=k)&&(k!=i)){
//						a=i*100+j*10+k;
//						count++;
//						printf("%d ",a);
//						这里有错，应该先判断是否换行，先空格“”第6个数后面会多一个空格 
//						if (count%6==0){
//						printf("\n");
//					}
//				}
//			}
//			k=m; //因为还要再次进入循环，所以初始化k和j；也可以放在初始循环的前面 
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
////					a=i*100+j*10+k;//也可以依次输入ijk就不用计算了！！
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
//			k++;//在进行下一次循环前需要k+1；循环语句！！！ 
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
////				a=i*100+j*10+k;//也可以依次输入ijk就不用计算了！！
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


//仙花数水指一个N位正整数（N>=3)，它的每位上的数字的N次幂之和等于它自己。如：153=13+33+53;
//给定一个N（3<=N<=7），按顺序输出所有N位水仙花数。
//{
//	int N;
//	scanf("%d",&N);
//	int n=N;

////找n位数的范围；	min<=i<max    max-1才是最大数 
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



////计算每个位数相加的和 

//////计算每个位数的n次方	笨办法 
//
////		while(j>0){
////			int count =n;				
////			int a= j%10;
////			int b=a; //b=1的话 count>=1 do循环需要多循环一次  b每次会复位为新a 之前b的n次方由sum保存 	
////			do{
////			
////				b *=a;
//////				a *=a;//这里错了 eg：a=3; a=a*a=9; a=9; a*a=9x9=81； 本来应该是3x3x3=27 a的值变了！！！ 
//////				注意事项：a的n次方求法 不要叠加了				 
////				count--;
////			}while(count>1);
////			sum +=b;
////			j /=10; //不能直接用i；用i会导致最后与sum比较时i只剩0；所以提前把i存下 
//////判断是否是 
////			
////		}
////		if(i==sum){
////			printf("%d\n",i);
////			}
////	}	




////利用次方函数 需要头函数 	#include<math.h>	pow(m, n);	m的n次方 
//		while(j>0){
//			sum +=pow(j%10,n);
//			j /=10;
//		}				
//
////判断是否是		
//		if(i==sum){
//		printf("%d\n",i);
//		}
//	}
//
//}



//打印乘法口诀表
//a*b，a、b两重循环。
//还要注意对齐问题。如果结果是一位数，输出两个空格；两位数输出一个空格。
// 对齐问题  \t占8个长度  %2d 2个长度 右对齐 %-2d 2个长度 左对齐

//{
//	int i,j;
//	for(i=1;i<=9;i++){
//		for(j=1;j<=i;j++){
//			
//	//\t占8个长度  %2d 2个长度 右对齐 %-2d 2个长度 左对齐 
//			printf("%d×%d=%d-2d",j,i,i*j);
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


//统计素数并求和
//给定M和N区间内的素数的个数并对它们求和。

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
////在m=1时，如果计算的话，1会作为素数出现，所以提前排除 可用imprise标志法 
//	if(m==1){
//		m=2;
//	}
//	
//    int count =0;
//    int sum=0;		
//	
//	
//	for(i=m;i<=n;i++){
////		for(j=m;j<=i;j++)疯了 j=2呀，从2开始除！！！！ 
//		for(j=2;j<=i;j++)
//		
////		{
//			
////可以化简一下，要是i%j==0；直接跳出，再去判断是否相等，就不用else再break了； 
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
//				break; //跳出当前试除的循环 
//			} 
//		
//		}
////比较是否和最大相等 素数 
//		if(i==j){
//			sum +=i;
//			count++;
//		}
//		
//	}
//	printf("%d个素数，和为%d",count,sum);
//}

// isprime 搞个标志 如果在2到i-1有能整除的 说明不是素数 让标志为0 为1的时候是 做一些输出和计算 
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
//		int isprime=1;//需要放判断循环前 因为下一个for里可能会使isprime变0  
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

//猜数游戏
//输入要猜的数字和猜的最大次数，大了输出too big,小了输出too small，直到猜对或者次数用光或者用户输入负数为止
//还有就是注意不同次数猜到的输出结果也有区别。
//一次猜到：BINGO！
//两次猜到：LUCKY YOU！
//三次以上猜到：GOOD GUESS!


//{
//	int cnt;
//	printf("请输入要猜的最大次数：") ; 
//	scanf("%d",&cnt); 
//	int b ;
//	b=rand();
//	int j=0;
//	int a;
//	int isprime=0;
//	do{
//		printf("请输入猜的数： "); 
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
////猜对的输出 isprime==1做为判断	
//	if(isprime){
//		if(j==1){
//			printf("BINGO！");
//		}
//		else if(j<=3){
//			printf("LUCKY YOU！");
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

//n项求和
//2/1+3/2+5/3+8/5+……的前n项之和（
//从第二项开始，每一项的分子是前一项的分子和分母之和，分母是前一项的分子）
//{
//	int n,k;   //错误 用int范围小 后期i/j变大 数字就变负 所以不止sum是double i，j也要是 
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


//约分最简分式
//输入一个分式，如32/45，输出最简形式。
//除最大公约数
//辗转相除法
//{
//	int i,j,k;
//	scanf("%d %d",&i,&j);
//	int i1=i;
//	int j1=j;
////有负数情况 
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

//求a的连续和
//输入a,n，计算a+aa+aaa+……+n个a的和
//循环的每一轮a1=a1*10+a。
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


//  a++ 是先计算 再+1； ++a是先+1.再计算 
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
//	printf("int数据类型的最大数是：%d\n",a-1);
//	while((a/=10)!=0)b++;
//	printf("int数据类型最大的数的数位是:%d",b);
//}

{
	float a,b,c;
	a=1.345f;
	b=1.123f;
	c=a+b;
	if(c==2.468)printf("相等");
	else printf("不相等，c=%.10f，或%f",c,c);
}















