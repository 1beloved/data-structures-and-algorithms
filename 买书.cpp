#include <stdio.h>
int dp[5][1000]={0};

void fun(int n)//打印dp数组看看状态 
{
	int i,j;
	for(i=0;i<=n;i++)
	printf("%4d",i*10);
	putchar(10);
	for(i=1;i<=4;i++)
	{
		for(j=0;j<=n;j++)
		printf("%4d",dp[i][j]);
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	int a[5]={0};//第i本书的价格 
	a[1]=1;
	a[2]=2;
	a[3]=5;
	a[4]=10;
	if(n%10!=0) printf("0");//如果不是十倍的话肯定不行 
	else{
		n/=10;//先缩小范围 
		int i;
		for(i=1;i<=n;i++)//肯定能被10全部买掉 
		{
			dp[1][i]=1;
		}
		for(i=1;i<=4;i++)//如果没剩钱的话肯定是刚刚好自己能买 
			dp[i][0]=1;
//			fun(n);
		for(i=2;i<=4;i++)
		{
			for(j=1;j<=n;j++)//代表到n价格内的每种i的所有可能 
			{
				if(a[i]<=j) 
				{
						dp[i][j]+=dp[i-1][j]+dp[i][j-a[i]];
				}else dp[i][j]=dp[i-1][j];
			
			}
			
		}
//				fun(n);
		 	printf("%d",dp[4][n]);
	}


}
