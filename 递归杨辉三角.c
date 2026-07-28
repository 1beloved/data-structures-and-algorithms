#include <stdio.h>
int func(int x,int y)
{
	if(x==0||x==y||y==0) return 1;
	else
	{
		return func(x-1,y-1)+func(x-1,y);
	}
}

int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %2d   ",func(i,j));				
		}
		printf("\n");
	}
}
