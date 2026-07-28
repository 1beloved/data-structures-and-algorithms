#include <stdio.h>
#define N 10
int main()
{
	int i,j;
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		{
			if(i==0||j==0||i==N-1||j==N-1)
				printf("*");
				else
					printf(" ");
		}
	}
}
