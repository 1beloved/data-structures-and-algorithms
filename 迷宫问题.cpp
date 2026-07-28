#include <bits/stdc++.h>
using namespace std;
int b[6][6];
int a[6][6];
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int flag;
void fun(int sx,int sy)
{
	if(sx==4&&sy==4)
	{
		flag=1;
		return;
	}
	int i;
	for(i=0;i<4&&flag==0;i++)
	{
		int x=sx+dx[i];
		int y=sy+dy[i];
		if(x>=0&&x<=4&&y>=0&&y<=4&&a[x][y]!=1&&b[x][y]==0)
		{
			printf("(%d,%d)\n",x,y);
			b[x][y]=1;
			fun(x,y);
			b[x][y]=0;
		}
	}
	
}

int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}	
	}
	b[0][0]=1;
	printf("(%d,%d)\n",0,0);
	fun(0,0);
}
