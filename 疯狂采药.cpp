#include <bits/stdc++.h>
using namespace std;
typedef long long int LLI;
LLI t[100005]={0};//时间 
LLI v[100005]={0};//价值 
LLI dp[10000005]={0};

int main()
{
	LLI m,n;
	cin>>n>>m;//n是时间 m是数目 
	LLI i;
	for(i=1;i<=m;i++)
	{
		cin>>t[i]>>v[i];
	}
	for(i=1;i<=m;i++)//第i个草药 
	{
		LLI j;
		for(j=t[i];j<=n;j++)
		{
			dp[j]=max(dp[j],dp[j-t[i]]+v[i]);
//			cout<<j<<" = "<<dp[j]<<endl;
		}
	}
	cout<<dp[n];
	
	
}
