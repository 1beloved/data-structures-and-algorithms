#include <stdio.h>
int main()
{
	int index[10000]={0},i,n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		int t;
		scanf("%d",&t);
			index[t]++;
	}
	for(i=1;i<=n&&count!=2;i++)
		if(index[i]==0)
		{
			printf("%d ",i);
			count++;
		}
}
