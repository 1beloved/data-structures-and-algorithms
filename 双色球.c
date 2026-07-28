#include <stdio.h>
int v[100];
int n;
int fun(int a[],int k,int n)
{
	int i,j,sum=0;
	if(k==n)
	{
		for(i=1;i<n;i++)
		sum+=a[i];
		if(sum!=25) return; 
		for(i=1;i<n;i++)
		printf("%d ",a[i]);
		putchar(10);
		return;
	}
	i=a[k-1]+1?a[k-1]+1:1;
	for(;i<=10;i++)
	{
		a[k]=i;
		fun(a,k+1,n);
	}
	
	
}
int main()
{
	int a[100]={0};
	fun(a,1,7);
}
