#include <stdio.h>
#define N 100
#include <time.h>
int main()
{
	srand(time(NULL));
	int a[N]={0},i,count,t;
	for(i=0;i<N;i++)
	{
		t=rand()%100;
		a[t]++;
		 
	}
	printf("只出现一次的数字有:\n"); 
	for(i=0;i<N;i++)
	{
		if(a[i]==1)
		count++,printf("%d ",i);
	}
	printf("\n%d个",count);
	
}
