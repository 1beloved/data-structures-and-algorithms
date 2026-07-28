#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[N][N],i,j,k,count=1;
	if(N%2) k=N/2;
	else k=N/2+1;
	for(i=0;i<=k;i++)
	{
		for(j=i;j<=N-1-i;j++)
			scanf("%d",a[i][j]);
		for(j=i+1;j<=N-1-i;j++)
			scanf("%d",a[i][j]);
		for(j=N-i-2;j>=i;j--)
			scanf("%d",a[i][j]);
		for(j=N-i-2;j>i;j--)
			scanf("%d",a[i][j]);
	}
	for(i=0;i<N;printf("\n"),i++)
	{
		for(j=0;j<N;j++)
		printf("%d ",a[i][j]);
	}
		
}
