#include <stdio.h>
int main()
{
	int n,i,j;
	printf("\n please enter \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+i;j++)
		{
			if(j>n-i+1)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<=2*n-i;j++)
		{
			if(j>i+1)
			printf("*");
			else printf(" ");
		}
		putchar(10);
	}
	
}
