#include <stdio.h>
#define N 5
int main()
{
	int a[N][N]={0},i,j,k,count=1;
	if(N%2) k=N/2;
	else k=N/2+1;
	for(i=0;i<=k;i++)
	{
		for(j=i;j<N-i;j++)a[j][i]=count++; 
		for(j=i+1;j<N-i;j++) a[N-i-1][j]=count++;
		for(j=N-2-i;j>=i;j--) a[j][N-i-1]=count++;
		for(j=N-2-i;j>i;j--) a[i][j]=count++;
	}
		for(i=0;i<N;i++,printf("\n"))
		for(j=0;j<N;j++)
			printf("%d  ",a[i][j]);
}
