#include <stdio.h>
void fun(int a[],int n)
{
	int i,t;
	t=a[n-1];
	for(i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=t;
	
}
int main()
{
	int a[100],i,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	fun(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
