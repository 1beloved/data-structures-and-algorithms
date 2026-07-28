#include <stdio.h>
#define N 5 
int main()
{
	int a[5]={1,5,3,7,7},b[5]={1,1,23,7,8,},c[10]={0},i,j,k=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<k;j++)
			if(c[j]==a[i]) break;
		if(j==k) c[k++]=a[i];
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<k;j++)
			if(c[j]==b[i]) break;
		if(j==k) c[k++]=b[i];
	}
	for(i=0;i<k;i++)
	printf("%d ",c[i]);
	
	
} 
