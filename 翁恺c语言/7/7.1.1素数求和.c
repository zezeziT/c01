#include<stdio.h>

//����������[m,n]��������͵�����

//�����Լ��ĺ���
//�ж��ǲ��������Ĵ���
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
