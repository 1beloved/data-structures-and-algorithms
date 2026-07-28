#include <bits/stdc++.h>
int dp[105][1005];//第多少秒最多采多少 
using namespace std;

inline int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int T,M,i,j;
	cin>>T>>M;
	vector<vector<int> >array(M+1);
	for(i=1;i<=M;i++)
	array[i].resize(2);
	for(i=1;i<=M;i++)
		{
			cin>>array[i][0]>>array[i][1];
		}
	sort(array.begin(),array.end());//先对时间进行排序 
	if(array[1][0]>T)//如果最小的时间都不够的话肯定采不了 
	{
		printf("0");
	}
	else{
		for(i=1;i<=M;i++) //有多少种草药 
		{
			for(j=0;j<=T;j++)
			{
				if(array[i][0]<=j)//如果时间可以的话
				{	//如果当前时间可以采摘的话考虑采还是不采 
						dp[i][j]=max(dp[i-1][j],array[i][1]+dp[i-1][j-array[i][0]]);//因为草药不能重复采摘，所以i-1 
				}                                                                                                                                                                   
				else dp[i][j]=dp[i-1][j];//否则继承上一行最优解 
		}
	}

	cout<<dp[M][T];
	} 
}
