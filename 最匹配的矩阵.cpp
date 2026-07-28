#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	int r,s,first=1;
	cin>>r>>s;
	int b[r][s],row=0,col=0,min=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		cin>>b[i][j];
	}
	for(i=0;i<=m-r;i++)
	{
		for(j=0;j<=n-s;j++)
		{
			int t,k,min1=0;
			for(t=0;t<r;t++)
			{
				for(k=0;k<s;k++)
				{
					min1+=abs(b[t][k]-a[i+t][k+j]);
				}
			}
			if(first)
			{
				min=min1;
				row=i;
				col=j;
				first=0;
			}
			else if(min>min1){
				row=i;
				col=j;
				min=min1;
			}
			
		}
		
		
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
			cout<<a[row+i][col+j]<<" ";
			cout<<endl;
	}
	
}
