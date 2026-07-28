#include <stdio.h>
int count;
int res[1000];
int a[1000];
void fun(int *a,int k,int n,int index)
{
	if(count==k)
	{
		int i;
		for(i=0;i<k;i++)
			printf("%d ",res[i]);
		putchar(10); 
	}
	int i;
	for(i=index;i<n;i++)
	{
		res[count]=a[i];
		count++;
		fun(a,k,n,i+1);
		res[count]=0;
		count--;
	}
}
int main()
{
	int n,i,k=2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=i+1;
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
				putchar(10);
	fun(a,k,n,0);
}
