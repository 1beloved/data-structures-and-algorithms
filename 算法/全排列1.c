#include <stdio.h>
int v[100];
int c[100];
int n;
int count;
int fun1(int k)//这是利用哈希搞全排列 
{
	if(k==n+1)
	{
		count++;
		int i;
		for(i=1;i<=n;i++)
		{
			printf("%d ",c[i]);
		 } 
		 printf("\n");
	}
	int i;
	for(i=1;i<=n;i++)
	{
		if(v[i]==0)
		{
			c[k]=i;
			v[i]=1;
			fun1(k+1);
			v[i]=0;
		}
	}
	
	
}

int fun2(int k)
{
	if(k==n+1)
	{
		count++;
		int i;
		for(i=1;i<=n;i++)
		{
			printf("%d ",c[i]);
		 } 
		 printf("\n");
	}
	
	
}


int main()
{
	scanf("%d",&n);
//	fun1(1);
	fun2(1);	
	printf("%d",count);
	
}
