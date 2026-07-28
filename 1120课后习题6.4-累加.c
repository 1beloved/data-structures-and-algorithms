#include <stdio.h>
int f(int n)
{
	if(n==1 )return 1;
	return n*f(n-1);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum+=f(i); 
}
