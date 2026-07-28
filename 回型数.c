#include <stdio.h>
#define N 9
int main()
{
	int a[N][N]={0},i,j,k;
	if(N%2) k=N/2+1;
	else k=N/2;
	for(i=0;i<k;i++)
	{
		for(j=i;j<N-i;j++) a[i][j]=i+1;
		for(j=i;j<N-i;j++) a[j][N-i-1]=i+1;
		for(j=N-i-1;j>=i;j--) a[N-i-1][j]=i+1;
		for(j=N-i-1;j>i;j--) a[j][i]=i+1;
	}
	
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		{
			printf("%d    ",a[i][j]);
		}
	}
	
	
	
}
