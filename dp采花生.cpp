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
		int i,R,C,j;
		cin>>R>>C;
		vector<vector<int> > array(R);
		for(i=0;i<R;i++)
		array[i].resize(C);
		for(i=0;i<R;i++)
		{
			for(j=0;j<C;j++)
				cin>>array[i][j];
		}
		int dp[105][105]={0};
		dp[0][0]=array[0][0];
		for(i=1;i<C;i++)
			dp[0][i]=array[0][i]+dp[0][i-1];
		for(i=1;i<R;i++)
			dp[i][0]=array[i][0]+dp[i-1][0];
		
		for(i=1;i<R;i++)
		for(j=1;j<C;j++)
		{
			dp[i][j]=max(array[i][j]+dp[i-1][j],array[i][j]+dp[i][j-1]);	
		}	
		
		cout<<dp[R-1][C-1]<<endl;
	}
	
	
}
