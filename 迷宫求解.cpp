#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,0,-1,1};//上下左右四个方向 
int dy[4]={1,-1,0,0};
struct node{
	int x;//当前位置的x轴 
	int y;//当前位置的y轴 
};

void funFind()
{
	int n;
	cin>>n;
	char a[n][n]; 
	int startx,starty,endx,endy;//起始位置和终点位置 
	int i,j;
	for(i=0;i<n;i++)//将数据输入到数组a中 
		for(j=0;j<n;j++)
	cin>>a[i][j];
		cin>>startx>>starty>>endx>>endy;
		if(a[startx][starty]=='#'||a[endx][endy]=='#') {//起点或者终点为'#'就退出 
			cout<<"NO"<<endl;
			return;
		}
	int b[101][101]={0};//这个数组用来记录迷宫的状态看是否来过
	queue <node> q;//创建一个队列 
	struct node t;
	t.x=startx;
	t.y=starty;
	b[startx][starty]=1;
	q.push(t);
	int flag=0;
	while(!q.empty()&&flag==0)//如果队列为空说明到不了重点 
	{
		for(i=0;i<4;i++)//四个方向 
		{
			int x,y;
			x=q.front().x+dx[i];
			y=q.front().y+dy[i];
			if(x>=0&&x<n&&y>=0&&y<n&&b[x][y]==0&&a[x][y]!='#')//不超出边界且状态为0 时入队列 
			{
				b[x][y]=1;
				if(x==endx&&y==endy){
					flag=1;
					break;
				}
				t.x=x;t.y=y;
				q.push(t);//入队列 
			}
		}
		q.pop();//当前位置出队列 
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
	
	
	
}




int main()
{
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)//n组数据 
	{
		funFind();
	}
	
}
