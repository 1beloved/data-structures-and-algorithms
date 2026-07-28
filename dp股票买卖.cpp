#include <bits/stdc++.h>
using namespace std;

inline int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int i,n,j,count=0;
		int dp[100005]={0};
		cin>>n;
		vector <int> ss(n+1);
		for(i=1;i<=n;i++)
			cin>>ss[i];
		for(i=1;i<=n;)
		{
			int t=ss[i];
			for(j=i;j<=n;j++)
			{
				if(ss[j+1]<t) break;
			}
			if(j!=i) {
				dp[count++]=ss[j]-t;
				i=j;
			}else i++;
		}
		for(i=0;i<count;i++)
			cout<<dp[i]<<" ";
	}
	
	
}
