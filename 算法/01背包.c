#include <stdio.h>
int dp[1000][1000];
int w[1000];
int v[1000];
int max(int a,int b){
	return a>b?a:b;
}
int main()
{
	int n,m,i,j;
	printf("请输入背包的容量 和 物品的数量:");
	scanf("%d %d",&m,&n);
	printf("请输入物品的重量和价值:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",w+i,v+i);
	}
	for(i=0;i<n;i++)
		for(j=1;j<=m;j++)
			{
				if(j<w[i]) dp[i][j]=dp[i-1][j];
				else {
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
				}
			}
		printf("最大为%d\n",dp[i-1][j-1]);
	printf("dp的内部空间为:\n");
	for(i=0;i<n;i++,printf("\n"))
		for(j=1;j<=m;j++)
			printf("%d  ",dp[i][j]);
}
