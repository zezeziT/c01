#include<stdio.h>
int main()
//回想起区间[m,n]内素数求和的例子

//定义自己的函数 
//判读是不是素数的代码 
int imprime(int i)
{
	int imprime=1;
	for(j=2; j<=i-1; j++) {
		if(i%j==0) {
			imprime=0;
			break;
		}
	}
	return imprime; 
}


{
	int m,n,i,j,imprime;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m<=1) {
		m=2;
	}
	for(i=m; i<=n; i++) {	
		if(imprime(i)) {
			sum +=i;
		}
	}

	printf("%d",sum);
}
