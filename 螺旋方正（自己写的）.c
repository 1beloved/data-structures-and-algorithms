#include <stdio.h>
#define N 6
int main()
{
	int a[N][N]={0},i,j,m,count=1;
	if(N%2==0) 	m=N/2;
	else m=N/2+1;
	for(i=0;i<m;i++)
	{
		for(j=i;j<N-i;j++)
		{
			a[i][j]=count++;
		}
		for(j=i+1;j<N-i;j++)
		{
			a[j][N-i-1]=count++;
		}
		
		for(j=N-i-2;j>=i;j--)
		{
			a[N-i-1][j]=count++;
		}
		
		for(j=N-i-2;j>i;j--)
		{
			a[j][i]=count++;
		}
	}
	
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
			printf("%d    ",a[i][j]);
	}
	
	
	
	
	
	
	
	
	
	
	
}
