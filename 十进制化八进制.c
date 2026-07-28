#include <stdio.h>
int main()
{
	int i=0,n,sum=0,a[100],*p=a;
	scanf("%d",&n);
	while(n>=8)
	{
		*p++=n%8;
		n/=8;
	}
	*p=n;
	while(p>=a)
	sum=sum*10+*p--;
	printf("%d",sum);
	
}
