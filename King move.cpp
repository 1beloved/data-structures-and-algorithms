#include <bits/stdc++.h>
using namespace std;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};
#define N 305 
int b[N][N];//×´Ì¬Êı×é 
int startx,starty;
int endx,endy;
int ans;
int l;
struct node{
	int x, y;
	int step;
};
void fun()
{
	struct node t;
	t.x=startx;
	t.y=starty;
	t.step=0;
	queue<node>q;
	q.push(t);
	while(!q.empty())
	{
		t=q.front();
		if(t.x==endx&&t.y==endy)
		{
			if(ans>t.step) ans=t.step;
		}
		q.pop();
		int i;
		for(i=0;i<8;i++)
		{
			int nextx=t.x+dx[i];
			int nexty=t.y+dy[i];
			int nextp=t.step+1;
			struct node G;
			if(nextx>=0&&nextx<l&&nexty>=0&&nexty<l&&b[nextx][nexty]==0)
			{
				G.x=nextx;
				G.y=nexty;
				b[nextx][nexty]=1;
				G.step=nextp;
				q.push(G);
			}
		}
	}
}
int main()
{
	int *res;
	int n,index=0;
	cin>>n;
	res=new int[n];
	while(n--)
	{
	
		cin>>l;
		memset(b,0,sizeof(b));
		ans=l*l;
		cin>>startx>>starty;
		cin>>endx>>endy;
		if(startx==endx&&startx==endy) cout<<0<<endl;
		else {
			b[startx][starty]=1;
			fun();
			cout<<ans<<endl;
		}
	}
}
