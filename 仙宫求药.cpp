#include <bits/stdc++.h>
using namespace std;
#define N 50
struct node{
	int x;
	int y;
	int step;
};
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
void fun(int m,int n)//m行n列 
{
	char a[100][100] = {0};
	int b[101][101] = { 0 };
	int i, j;
	int startx, starty, endx, endy;//起始位置和终点位置 
	for (i = 0; i < m; i++)//将数据输入到数组a中 
		for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if(a[i][j]=='@')
				{
					startx=i;
					starty=j;
				}
				if(a[i][j]=='*')
				{
					endx=i;
					endy=j;
				}
			}
	queue<node>q; 
	struct node t;
	t.x = startx;
	t.y = starty;
	t.step=0;
	q.push(t);
	b[startx][starty] =1 ;
	int flag = 0,min=-1;
	if (a[startx][starty] == '#' || a[endx][endy] == '#') {//起点或者终点为'#'就退出 
		cout << -1 << endl;
		return;
	}
	else{
		//	printf("起始位置(%d,%d)->目标位置(%d,%d)\n",t.x,t.y,endx,endy);
	while (!q.empty() && flag == 0)//如果队列为空说明到不了重点 
	{
			for (i = 0; i < 4; i++)//四个方向 
			{
				int x, y;
				x = q.front().x + dx[i];
				y = q.front().y + dy[i];
				if (x >= 0 && x < m && y >= 0 && y < n && b[x][y] == 0 && a[x][y] != '#')//不超出边界且状态为0 时入队列 
				{
//					printf("(%d,%d)->(%d,%d)\n",q.front().x,q.front().y,x,y);
					b[x][y] = 1;
					if (x == endx && y == endy) {
						min=q.front().step+1;
						flag = 1;
						break;
					}
					t.x = x; t.y = y;t.step=q.front().step+1;
					q.push(t);//入队列 
				}
			}
		q.pop();
	}
	if (flag) cout << min << endl;
	else cout << -1 << endl;
		
		
	}
}
int main()
{
	int m,n;
	while(1)
	{
		cin>>m>>n;
		if(m==0&&n==0)
		break;
		else
		fun(m,n);	
	} 
	
	
}
