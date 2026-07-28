#include <bits/stdc++.h>
using namespace std;
int a[6][6];
int lastx[6][6];
int lasty[6][6];
int vis[6][6];
struct node{
	int x,y;
};
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

void bfs()
{
	queue<node>q;
	q.push({1,1});
	vis[1][1]=1;
	while(!q.empty())
	{
		int x=q.front().x;
		int y=q.front().y;
		if(x==5&&y==5) return;
//		cout<<x<<" "<<y;
		q.pop();
		int i;
		for(i=0;i<4;i++)
		{
			int nextx=x+dx[i];
			int nexty=y+dy[i];
			if(nextx>=1&&nextx<=5&&nexty>=1&&nexty<=5&&vis[nextx][nexty]==0&&a[nextx][nexty]==0)
			{
				vis[nextx][nexty]=1;
				lastx[nextx][nexty]=x;
				lasty[nextx][nexty]=y;
				q.push({nextx,nexty});
			}
		}
	} 
}
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];
		}
	}
	bfs();
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			cout<<lastx[i][j]<<" "<<lasty[i][j]<<"     ";
		}
		cout<<endl;
	 } 
	int x=5,y=5;
	stack<node>s;
	s.push({x,y});
	while(x!=0||y!=0)
	{
		x=lastx[x][y];
		y=lasty[x][y];
		s.push({x,y});
		printf("(%d,%d)\n",x,y);
	}
//	printf("(0,0)\n");
//	while(!s.empty())
//	{
//		int x=s.top().x;
//		int y=s.top().y;
//		s.pop();
//		printf("(%d,%d)\n",x-1,y-1);
//	}
 } 
