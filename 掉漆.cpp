#include<stdio.h>
#define N 10
int count=0;
void put(int a[],int n)
{	
	int i;
	for(i=0;i<n;i++)
	printf("%2d",a[i]);
}
int fun(int a[],int sum,int s)
{	
	int i;
	if(sum<=0)
	{	if(sum==0)
		{
			put(a,s);
			printf("\n");
			count++;
		}
		return 0;
	}
	for(i=1;i<=3;i++)
	{
		a[s]=i;
		fun(a,sum-a[s],s+1);
	}
} 
int main()
{
	int a[N]={0};
	fun(a,N,0);
	printf("%d",count);
}
