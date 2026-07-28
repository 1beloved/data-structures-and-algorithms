#include <stdio.h>
#include <malloc.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *a=malloc(sizeof(int)*n);
	int *b=malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	long long int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i]*b[i];
	}
	printf("%lld",sum);
	
	
}
