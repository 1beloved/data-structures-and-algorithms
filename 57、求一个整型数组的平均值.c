#include <stdio.h>
#include <time.h>
#define N 5
int main()
{
	int a[N],i,j,sum=0;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		a[i]=rand()%20+1;
		sum+=a[i];
		printf("%d ",a[i]);
	}
	float ave=sum*1.0/N;
	printf("\n%4.2f",ave);
}
