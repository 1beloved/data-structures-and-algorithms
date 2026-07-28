#include<bits/stdc++.h>
using namespace std;
void Creat_graph(vector<vector<int> >&G,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		G[i].resize(n);	
	}	
}
void Cin_graph(vector<vector<int> >&G,int n)
{
	int i;
	for(i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			G[i][j]=INT_MAX;
		}
	}
	for(i=0;i<n;i++)
	{
		char a;
		int t;
		cin>>a>>t;
		int j;
		for(j=0;j<t;j++)
		{
			char b;
			int weight;
			cin>>b>>weight;
			G[a-'A'][b-'A']=weight;
			G[b-'A'][a-'A']=weight;
		}
	}
	
}
void display_minlost(vector<int> minlost,int n,vector<int> vis)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(minlost[i]!=INT_MAX) cout<<minlost[i]<<" ";
		else cout<<'@'<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<vis[i]<<" ";
	}
	cout<<endl;
}
int min_graph_to_tree(vector<vector<int> >&G,int n)
{
	vector<int>vis(n,0);//代表到顶点i的最小的边 
	vector<int>minlost(n,0);//代表未进入的顶点距离i的最小距离 
	int i,j,sum=0;
	vis[0]=0;
	minlost[0]=0;
	for(i=1;i<n;i++)
	{
		minlost[i]=G[0][i];
		vis[i]=0;	
	} 

	for(i=1;i<n;i++)//有几个顶点就需要n-1条边 
	{
		int minCost=INT_MAX; 
		int k=0;
		for(j=1;j<n;j++)
		{
			if(minlost[j]!=0&&minlost[j]<minCost)//找到最小的边 
			{
				minCost=minlost[j];
				k=j;//记录是那条边 
			}
		}
		if(k!=0) sum+=minCost;
		minlost[k]=0;//代表该顶点已被加入 
		for(j=1;j<n;j++)
		{
			if(minlost[j]!=0&&G[k][j]<minlost[j])//刷新边的最小值 
			{
				minlost[j]=G[k][j];
				vis[j]=k;
			}
		}
//		 display_minlost(minlost,n,vis);
	}
	return sum;
} 
void display_graph(vector<vector<int> >&G,int n)
{
	int i,j;
	for(i=0;i<n;i++) printf("%c  ",'A'+i);
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(G[i][j]!=INT_MAX)
		printf("%-3d ",G[i][j]);
		else printf("%-3c",'@');
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		vector<vector<int> >G(n);
		Creat_graph(G,n);
		Cin_graph(G,n-1);
		cout<<min_graph_to_tree(G,n)<<endl;
		cin>>n;
	} 
	
	
	
}
