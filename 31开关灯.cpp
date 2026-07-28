#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,i;
	vector < int > dp;
	dp.resize(5001,1);
	int m;
	scanf("%d %d",&n,&m);
	for(i=2;i<=m;i++)
	{
		int j=i;
		for(;j<=n;j+=i)
		{
			
			dp[j]=(dp[j]==1)?0:1;
		}
	}	
	int flag=0;
	for(i=1;i<=n;i++)
	{
		if(i!=1&&flag==2)
		{
			printf(",");
			flag=0;
		}
		if(dp[i]==1){
			 printf("%d",i);
			 flag+=1;
		}
		if(i==1) printf(",");
		
	}
}
