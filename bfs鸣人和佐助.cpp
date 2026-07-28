#include <bits/stdc++.h>
int m,n,tl;
char a[500][500];
int b[500][500];//状态数组 
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int minv=1000000;
using namespace std;
void dfs(int startx,int starty,int count,int t)
{
	cout<<startx<<" "<<starty<<endl;
	if(a[startx][starty]=='+')
	{
//		cout<<"到达目的地"<<count<<endl;
		if(count<minv) minv=count;
		return;
	}
	int i;
	for(i=0;i<4;i++)
	{
		int x=startx+dx[i];
		int y=starty+dy[i];
		if(x>=0&&y>=0&&x<m&&y<n)//在迷宫内 
		{
			if(a[x][y]=='#'&&t>0&&b[x][y]==0)//如果遇到敌人且还有查克拉,还没来过 
			{
				b[x][y]=1;
				dfs(x,y,count+1,t-1);
				b[x][y]=0;
			}else if(a[x][y]=='*'&&b[x][y]==0){
				b[x][y]=1;
				dfs(x,y,count+1,t);
				b[x][y]=0;
			}
		}
	}

}







int main()
{
	cin>>m>>n>>tl;
	int i,j,startx,starty;
	minv=m*n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')
			{
				startx=i;
				starty=j;
			}
		} 
	}
	b[startx][starty]=1;
	dfs(startx,starty,0,tl);
	cout<<minv;
}
