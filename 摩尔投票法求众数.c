#include <stdio.h>
#include <time.h>
#define N 10
int main()
{
	int a[N],i,cnt=0,m=0;
	srand(time(NULL));
	for(i=0;i<N;i++)
	a[i]=rand()%4;
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	for(i=0;i<N;i++)
	{
		if(cnt==0)
		m=a[i];
		if(a[i]==m) cnt++;
		else cnt--;
	}
	printf("\n%d",m);
} 
