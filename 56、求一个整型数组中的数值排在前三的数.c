#include <stdio.h>
#include <time.h>
#define N 3
int isfun(int a[],int t)
{
	int i;
	for(i=0;i<N;i++)
		if(a[i]==t) return 0;
	return 1;
}
int main()
{
	srand(time(NULL));
	int a[10],t,max[N]={0},i,j,k=2;
	for(i=0;i<10;i++)
		a[i]=rand()%20;
	while(k>=0)
	{
		t=0;
		for(i=0;i<10;i++)
		{
			if(a[i]>t&&isfun(max,a[i])) t=a[i];
		}
		max[k--]=t;
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	for(i=0,printf("\n");i<3;i++)
		printf("%d ",max[i]);
	
}
