#include <bits/stdc++.h>
using namespace std;
inline int max(int a,int b)
{
	return a>b?a:b;
}
int dp[20];
int main()
{
	int n,maxv=1;
	cin>>n;
	vector <int> ss(n+1);
	int i,j;
	for(i=1;i<=n;dp[i]=1,i++)
		cin>>ss[i];
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(ss[i]<=ss[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
			if(dp[i]>maxv) maxv=dp[i];
		}
	}
	cout<<maxv;
}
