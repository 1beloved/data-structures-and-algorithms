#include <bits/stdc++.h>
int b[20][20];
using namespace std;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};

void fun(int n,int m,int sx,int sy,int *ans,int cnt)
{
	if(n*m==cnt)
	{
//		cout<<"end"<<endl;
		(*ans)++;
		return;
	}
	int i;
	for(i=0;i<8;i++)
	{
		int x=sx+dx[i];
		int y=sy+dy[i];
		if(x>=0&&y>=0&&x<n&&y<m&&b[x][y]==0)
		{
//			cout<<"´Ó"<<sx<<" "<<sy<<"->"<<x<<" "<<y<<endl;
			b[x][y]=1;
			fun(n,m,x,y,ans,cnt+1);
			b[x][y]=0;
		}
		
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,sx,sy;
		cin>>n>>m>>sx>>sy;
		memset(b,0,sizeof(b));
		b[sx][sy]=1;
		int ans=0;
		 fun(n,m,sx,sy,&ans,1);
		cout<<ans<<endl;
	}
}
