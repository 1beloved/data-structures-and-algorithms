#include <stdio.h>
int func(int n)
{
	if(n==0) return;
	
	func(n/10);
	printf("%d ",n%10);
}
int count(int n)
{
	if(n<10) return 1;
	return 1+count(n/10);
}
int main()
{
	int n,i,c;
	scanf("%d",&n);
	i=n;
	c=count(n);
	printf("%d\n",c);
	func(n);
	putchar(10);
	while(i)
	{
		printf("%d",i%10);
		i/=10;
	}
	
	
}
