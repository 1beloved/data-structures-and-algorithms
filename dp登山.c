#include <stdio.h>
int dp1[1000];
int dp2[1000];
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;dp1[i]=1,dp2[i]=1,i++)
		scanf("%d",a+i);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				dp1[i]=max(dp1[i],dp1[j]+1);
			}
		}
	}
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			if(a[i]>a[j])
			{
				dp2[i]=max(dp2[i],dp2[j]+1);
			}
		}
	}
	int ans=1;
	for(i=0;i<n;i++)
		ans=max(ans,dp1[i]+dp2[i]-1);
	printf("%d",ans);
}
