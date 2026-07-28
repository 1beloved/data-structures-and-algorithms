#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
	int i,j,t,a[10];
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		a[i]=rand()%20+1;
	}
	
	for(i=1;i<10;i++)
	{
		t=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>t) a[j+1]=a[j];
			else break;
		}
		a[j+1]=t;
	}
	for(i=0;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
} 
