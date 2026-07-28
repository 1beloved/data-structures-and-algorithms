#include <stdio.h>
#define N 5
#include <time.h>
int main()
{
	srand(time(NULL));
	int a[N]={0},i,j=2,r;
	for(i=0;i<N;i++)
		a[i]=rand()%100+1;
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	for(i=0;i<2;i++)
	{
		r=a[0];
		for(j=0;j<4;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=r;
	}
		putchar(10);
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	
}
