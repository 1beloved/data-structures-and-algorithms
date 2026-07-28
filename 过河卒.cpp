#include <bits/stdc++.h>
using namespace std;
int n,m;
int Mx,My;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};
long long int dp[25][25];
int main()
{
	scanf("%d%d%d%d",&n,&m,&Mx,&My);
	int i,j;
	for(i=0;i<8;i++){
		int x=dx[i]+Mx;
		int y=dy[i]+My;
		dp[x][y]=-1;
	}
	dp[Mx][My]=-1;
	for(i=0;i<=n;i++)
	{
		if(dp[0][i]!=-1) dp[0][i]=1;
		if(dp[i][0]!=-1) dp[i][0]=1;
		else break;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++)
		{
			if(dp[i][j]!=-1)
			{
				if(abs(i-Mx)+abs(j-My)==3&&((abs(i-Mx)==2&&max(abs(i-Mx),abs(j-My))==2))){
					continue;
				}else dp[i][j]=dp[i-1][j]+dp[i][j-1];
					
			}
		}
	}
	printf("%lld",dp[n][m]);
	
} 
