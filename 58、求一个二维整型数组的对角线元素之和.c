#include <stdio.h>
#include <time.h>
#define N 6
int main()
{
	srand(time(NULL));
	int a[N][N]={0},i,j,sum=0;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			a[i][j]=rand()%9+1;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			if(i==j||i+j==N-1)
				sum+=a[i][j];
	for(i=0;i<N;i++,printf("\n"))
		for(j=0;j<N;j++)	
			printf("%d  ",a[i][j]);
		if(N%2) sum+=a[N/2][N/2];		
	printf("sum=%d",sum);
}
