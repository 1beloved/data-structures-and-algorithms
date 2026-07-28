#include <stdio.h>
#define N 100

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i=0,j=0,di=-1,dj=1;
	int k=1;
	while(k<=n*n)
	{
		
		if(i==n)
		{
			i=n-1;
			j+=2;
			di=-di;
			dj=-dj;
		}
		if(j==n)
		{
			j=n-1;
			i+=2;
			di=-di;
			dj=-dj;
		}
		if(i<0)
		{
			i=0;
			di=-di;
			dj=-dj;
		}
		if(j<0)
		{
			j=0;
			di=-di;
			dj=-dj;
		}
		a[i][j]=k++;
		i+=di;
		j+=dj;
		

		

	}
		
		
				for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			putchar(10);
			}
				
	
}
