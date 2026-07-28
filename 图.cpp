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
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
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

void display_graph(vector<vector<int> >&G,int n)
{
	int i,j;
	for(i=0;i<n;i++) printf("%c  ",'A'+i);
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%-2d ",G[i][j]);
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	while(n!=0)
	{
		vector<vector<int> >G(n);
		Creat_graph(G,n);
		Cin_graph(G,n-1);
		display_graph(G,n);
		
	} 
	
	
	
}
