#include <bits/stdc++.h>

using namespace std;
int dp[1005];

inline int max(int a,int b)
{
	return a>b?a:b; 
}


int main()
{
	int n;
	cin>>n;
	int a[1005];
	int j,i,maxv=-1;
	for(i=1;i<=n;dp[i]=a[i],i++)
		cin>>a[i];
	maxv=a[1];
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(a[i]>a[j])
			{
				dp[i]=max(dp[i],dp[j]+a[i]);
			}
			if(dp[i]>maxv) maxv=dp[i];
		}
	}
	cout<<maxv;
}
