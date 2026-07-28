#include<bits/stdc++.h>
using namespace std;//表示有多少条边 
void Creat_graph(vector<vector<int> >&G,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		G[i].resize(n);	
	}	
}
typedef struct node{
	int start;
	int end;
	int weight;
}Edge;
void Cin_graph(vector<vector<int> >&G,int n,int &k)
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
			k++;
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
int min_graph_to_tree(vector<vector<int> >&G,int n,int k)
{
	Edge *edge;
	edge = new Edge[k];
	int i;
	for(i=0;i<k;i++)
	{
		
	}
	return 0; 
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
		int k=0;
		vector<vector<int> >G(n);
		Creat_graph(G,n);
		Cin_graph(G,n-1,k);
		display_graph(G,n);
		cout<<min_graph_to_tree(G,n,k)<<endl;
		cin>>n;
	} 
	
	
	
}
