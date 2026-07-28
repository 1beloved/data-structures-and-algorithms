#include <bits/stdc++.h>
using namespace std;
typedef long long int LLI;
LLI t,m;
LLI dp[10000005];
LLI a[10000005],b[10000005];
int main()
{
	cin>>t>>m;
	int i;
	for(i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[i]=x;
		b[i]=y;	
	}	
	for(i=0;i<m;i++)
	{
		int j;
		for(j=a[i];j<=t;j++)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
		}
	}
	cout<<dp[t];
	
 } 
