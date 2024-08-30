#include<stdio.h>

//回想起区间[m,n]内素数求和的例子

//定义自己的函数
//判读是不是素数的代码
int isprime(int i)
{
	int j;
	int ret=1;
	for(j=2; j<=i-1; j++) {
		if(i%j==0) {
			ret=0;
			break;
		}
	}
	return ret;
}
int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<=1) {
		m=2;
	}
	int i;
	int sum=0;
	for(i=m; i<=n; i++) {
		if(isprime(i)) {
			sum +=i;
		}
	}
	printf("%d",sum);
}
