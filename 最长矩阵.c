#include <stdio.h>
#define N 	1005
int n,m;
int a[N][N];
int max=1;
int b[N][N];//状态数组 
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
void DFS(int x,int y,int step)
{
	if(step>max){
		max=step;
	}
	b[x][y]=1;
	int i,j;
	for(i=0;i<4;i++)
	{
		int nextx=x+dx[i];
		int nexty=y+dy[i];
		if(nextx>=0&&nextx<n&&nexty>=0&&nexty<m&&b[nextx][nexty]==0&&a[nextx][nexty]>a[x][y])
		{
			b[nextx][nexty]=1;
			DFS(nextx,nexty,step+1);
			b[nextx][nexty]=0;
		}
	}
	b[x][y]=0;
	
}
int main()
{
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			DFS(i,j,1);//以每个起点去搜索 
		}
	}
	printf("%d",max);
}
