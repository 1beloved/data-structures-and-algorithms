#include <bits/stdc++.h>
using namespace std;

struct node{
    int x,y;
    int step;
};
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int vis[105][105];
int nearestExit(vector<vector<char> >& maze, vector<int>& entrance) {//这个版本是我自己写的用来测试的 
    int startx=entrance[0],starty=entrance[1];//起始位置 
    int row=maze.size();//行 
    int col=maze[0].size();//列 
    cout<<"行和列是:";
	cout<<row<<" "<<col<<endl;
    struct node t;  
    int sx,sy,flag=0;//特殊x 特殊y 
	if(startx==0||starty==0||startx==col-1||starty==row-1)//要对边界起始位置标记 
	{
		cout<<"是特殊"<<endl;
		flag=1;
		sx=startx;
		sy=starty;
	} 
    t.x=startx;
    t.y=starty;
    vis[startx][starty]=1;
    t.step=0;
    queue<node>q;
    q.push(t);
    while(!q.empty())
    {
    	t=q.front(); 
    	q.pop();
    	int i;
    	for(i=0;i<4;i++)
    	{
    		int x=t.x+dx[i];
    		int y=t.y+dy[i];
    		cout<<x<<" "<<y<<endl;
    		int step=t.step+1;
    		if(0<=x&&x<row&&0<=y&&y<col&&vis[x][y]==0&&maze[x][y]=='.')//如果在迷宫内且可以走 vis避免重复 
    		{
    			cout<<"x->  "<<x<<"y->  "<<y<<"step:"<<step<<endl;
    			struct node w;
    			w.x=x;
    			w.y=y;
    			w.step=step;
    			q.push(w);
    			vis[x][y]=1;
			}else if(x<0||x>=col||y<0||y>=row){//说明是边界位置 
			cout<<"到边界了!"<<endl; 
				if(flag&&t.x==sx&&t.y==sy)//说明起始位置是特殊位置
				{
					cout<<"特殊位置"<<endl; 
					continue; 
				} 
				return step-1;//你只要先到了就是最快的 
			}else cout<<"不可以走!"<<endl; 
		}
	}
	return -1;
    
}

int main()
{
	vector<vector<char> > maze;
	int m,n;
	vector<int>entrance;
	entrance.resize(5);
	cin>>m>>n;
	maze.resize(m);
	for(int i=0;i<2;i++)
	{
		cin>>entrance[i];
	}
	cout<<"输入数组元素"<<endl;
	for(int i=0;i<m;i++)
	{
		maze[i].resize(n);
		for(int j=0;j<n;j++)
		{
			cin>>maze[i][j];
		}
	}
	cout<<nearestExit(maze,entrance);
 } 
