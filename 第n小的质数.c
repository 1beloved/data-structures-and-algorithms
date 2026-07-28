#include <stdio.h>
#include <math.h>
int fun(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++)//不能用a/2不然会超时 
	{
		if(a%i==0) return 0;
	}
	return 1;
}

int main()
{
	long long int n,count=1;
	int t;int i=0;
	scanf("%lld",&n);
	long long int max=0;
	long long  l=2;
	while(1)//如果能被一个质数除，那么另外一个必为质数 
	{
		if(n%l==0&&fun(l)) break;
		l++;
	}
	printf("%lld",n/l);
}
