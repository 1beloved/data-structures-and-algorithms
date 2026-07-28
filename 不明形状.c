#include <stdio.h>
#define N 7
void func(char a[N][N])
{
	int k,i,j;
	k=N/2;
	for(i=0;i<k;i++)
	{
		for(j=0;j<N-2*i;j++)
		{
				if(i+j<k)
				a[i][j]='*';
		}	
	}	
	for(i=k;i<N;i++)
	{
		for(j=0;j<N-2*i;j++)
		{
				if(i+j>=k)
				a[i][j]='*';
		}	
	}	
	
}


int main()
{
	char a[N][N]={0};
	int i,j;
	func(a);
	for(i=0;i<N;i++)
	{
		for(i=0;i<N;i++)
		printf("%2c",a[i][j]);
		printf("\n");
	} 
		
}
