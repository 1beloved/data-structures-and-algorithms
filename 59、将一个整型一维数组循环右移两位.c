#include <stdio.h>
#define N 4
int main()
{
	int a[5]={1,2,3,4,5},i,j,t;
	for(i=0;i<N;i++)
	{
		t=a[4];
		for(j=3;j>=0;j--)
			a[j+1]=a[j];
		a[j+1]=t;
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	
}
