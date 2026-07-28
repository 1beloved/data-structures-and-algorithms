#include <stdio.h>
#include <string.h>
int s[1000001];
long long int dp[100001];
char res[100001][10]; 
int main()
{
	dp[0]=1,dp[1]=2;
	long long int a=1,b=1,c,i;
	for(i=2;i<90;i++)
	{
			c=a+b;
			a=b;
			b=c;
			dp[i]=dp[i-1]+c;
	}	
	int t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",s+i);
	for(i=0;i<t;i++)
	{
		int t=s[i];
		int j=0;
		while(t>dp[j]) j++;
		if(dp[j]==t)
		{
			strcpy(res[i],"YES");
		}
		else{
			int index=0,flag=0;
				while(index!=j&&dp[j]-dp[index]>=t)
				{
					if(dp[j]-dp[index]==t){
						 strcpy(res[i],"YES");;flag=1;break;
					}
					index++;
				}
			if(!flag) strcpy(res[i],"NO");;
			}
	}
	for(i=0;i<t;i++)
	puts(res[i]);
} 
