#include <bits/stdc++.h>
using namespace std;
#define N 1000
int G[N][N];
int n,m;

void Cin_Graph()
{
	cin>>n>>m;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			G[i][j]=INT_MAX;
		}
	}	
	for(i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		G[b+1][a+1]=c;
	}
	
	
}

void display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(G[i][j]!=INT_MAX) 
			cout<<G[i][j]<<" ";
			else cout<<"@"<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Min_d()
{
	
	int i,j,k;
	for(i=1;i<=n;i++)//中间节点 
	{
		for(j=1;j<=n;j++)//起始节点 
		{
			for(k=1;k<=n;k++)//终点 
			{
				if(j!=k)
				{
					if(G[j][i]!=INT_MAX&&G[i][k]!=INT_MAX&&G[j][k]>G[j][i]+G[i][k])
					{
						G[j][k]=G[j][i]+G[i][k];
					}
				}
			}
		}
	}
	
	
		
}

int main()
{
	Cin_Graph();
//	display();
	Min_d();
//	cout<<endl;
//	display();
	vector<int>sum(n+1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j)
				sum[i]+=G[i][j]+G[j][i];
		}
	}
	int min=sum[1],index=1;
	for(int i=1;i<=n;i++) {
		//cout<<sum[i]<<" ";
		if(sum[i]<min) {
			min=sum[i];
			index=i;
		}
	}
	cout<<index-1;
}
