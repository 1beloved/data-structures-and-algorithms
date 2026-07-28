#include <bits/stdc++.h>
using namespace std;
#define N 20

int G[N][N];
int dist[N];
int path[N];
int vis[N];
int n;
void display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(G[i][j]!=INT_MAX)
			printf("%d ",G[i][j]);
			else printf("@ ");
		}
		printf("\n");
	}
}
void display2()
{
	int i;
	cout<<"dist : ";
	for(i=1;i<=n;i++)
	{
		printf("%d ",dist[i]);
	}
	printf("\n");
	cout<<"path : ";
	for(i=1;i<=n;i++){
		printf("%d ",path[i]);
	}
		printf("\n");
		cout<<"vis : ";
	for(i=1;i<=n;i++){
		printf("%d ",vis[i]);
	}
	printf("\n");
}
void Min_distance(int index)
{
	int sum=0;
	int i;
	for(i=1;i<=n;i++)
	{
		dist[i]=G[index][i];
		if(G[index][i]!=INT_MAX)
		{
			path[i]=index;
		}
	}
	path[1]=1;
	dist[1]=INT_MAX;
	vis[1]=1;
//	display2();
	for(i=2;i<=n;i++)
	{
		int min=INT_MAX,k=-1,j;
		for(j=2;j<=n;j++)
		{
			if(vis[j]==0&&dist[j]<min)
			{
				min=dist[j];
				k=j;
			}
		}
		if(k==-1) continue;
		vis[k]=1;
//		cout<<k<<endl;
		for(j=2;j<=n;j++)
		{
			if(G[k][j]!=INT_MAX&&dist[j]>=G[k][j]+dist[k])
			{
				if(dist[j]==G[k][j]+dist[k]){
//					cout<<k<<" ÁíÍâÊÇ : "<< path[j]<<endl;
					int t=dist[k];
					if(t+dist[path[j]]<t+dist[k])
					{
						path[j]=k;
					}
	
				}else{
					dist[j]=G[k][j]+dist[k];
					path[j]=k;
				}
			}
		}
//		display2();
	}
	int haxi[N]={1};
	for(i=2;i<=n;i++)
	{
		if(path[i]==1)
		{
			sum+=dist[i];
			path[i]=-1;
		}
	}
	for(i=2;i<=n;i++)
	{
		if(path[i]!=-1)
		{
			sum+=dist[i]-dist[path[i]];
			haxi[i]=0;
		}
	}
//	display2();
	cout<<sum;
}

int main()
{
	int m;
	scanf("%d%d",&n,&m);
	int i;
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n;j++)
		{
			G[i][j]=INT_MAX;
		}
	}
	for(i=0;i<m;i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		G[a][b]=G[b][a]=c;
	}
//	display();
	Min_distance(1);
}

/*
4 5
1 2 4
1 3 5
2 3 2
2 4 3
3 4 2
*/
