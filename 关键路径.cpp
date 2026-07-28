#include <bits/stdc++.h>
using namespace std;
#define N 1005
int G[N][N];
int path[N][2];
int ve[N]={0};
int vl[N]={INT_MAX};
int e[N];
int l[N];
int n,m;
void Cin_aoe()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			G[i][j]=INT_MAX;
		}
	}
	
	for(i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		path[i][0]=a;//入度节点a 
		path[i][1]=b;//出度节点b 
		G[a][b]=c;
	}
}

void Creat_aoe()
{
	int i,j;
	ve[0]=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(G[j][i]!=INT_MAX)
			{
				ve[i]=max(G[j][i]+ve[j],ve[i]);	
			}	
		}
	}
	for(i=0;i<n;i++) {
//		cout<<ve[i]<<" ";
		vl[i]=INT_MAX;
	}
//	cout<<endl;
	vl[n-1]=ve[n-1];
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			if(i==j) continue;
			if(G[j][i]!=INT_MAX)
			{
				vl[j]=min(vl[j],vl[i]-G[j][i]);
			}
		}
	}
//	for(i=0;i<n;i++) cout<<vl[i]<<" ";
//	cout<<endl;	
	for(i=0;i<m;i++)
	{
		e[i]=ve[path[i][0]];
	}
//	for(i=0;i<m;i++) cout<<e[i]<<" ";
//	cout<<endl;
	
	for(i=0;i<m;i++)
	{
//		int r=path[i][1];
		l[i]=vl[path[i][1]]-G[path[i][0]][path[i][1]];
	}
//	for(i=0;i<m;i++) cout<<l[i]<<" ";
//	cout<<endl;
	
	for(i=0;i<m;i++) {
		if(l[i]==e[i])
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	cin>>n>>m;
	Cin_aoe();
	Creat_aoe();
}
