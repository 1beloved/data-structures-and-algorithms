#include <stdio.h>
typedef long long int LL;
#define N 100005
int main()
{
	int a[N],t,index=0,b[N]={0};
	while((scanf("%d",&t))!=EOF)
	{
		a[index++]=t;
	}
	int i,j;
	for(i=0;i<index;i++)
	{
		for(j=i+1;j<index;j++)
		{
			if(a[i]<a[j])
			{
				b[i]=a[j];
				break;
			}
		}
		if(j==index)
		{
			if(a[0]>a[i]) b[i]=a[0];
			else b[i]=-1;
		}
	}
	for(i=0;i<index;i++)
	{
		printf("%d ",b[i]);
	}
}
