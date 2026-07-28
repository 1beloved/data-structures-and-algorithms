#include <stdio.h>
#include <stdlib.h>
int haxi[30000]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int a[101]={0},i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	int count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			haxi[a[i]+a[j]]=1;
		}
	}
	for(i=0;i<n;i++)
		if(haxi[a[i]])
			count++;
	printf("%d",count);
	
}
