#include <bits/stdc++.h>
using namespace std;
typedef long long int LLI;
LLI dp[1005];
LLI v[1005];
LLI t[1005];
int main()
{
	int T,M;
	cin>>T>>M;
	int i;
	for(i=1;i<=M;i++)
	{
		cin>>t[i]>>v[i];
	}
	for(i=1;i<=M;i++)
	{
		int j;
		for(j=T;j>=t[i];j--)
		{
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
		}
	}
	cout<<dp[T];
}
