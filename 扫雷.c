#include <bits/stdc++.h>
using namespace std;
#define N 101
int dx[8]={0,0,-1,1,-1,1,-1,1};
int dy[8]={1,-1,0,0,-1,-1,1,1};
char a[N][N], b[N][N], t[N][N];

int main(){
    int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>a[i][j];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]=='*') continue;//ÊÇÀ×²»²Ù×÷ 
			int cnt=0;
				int x;
				for(x=0;x<8;x++)
				{
					int row=i+dx[x];
					int col=j+dy[x];
					
					if(row>=0&&row<n&&col>=0&&col<n&&a[row][col]=='*')
					{
						
						cnt++;
					}
					
				}
				 a[i][j]='0'+cnt;
		}
	}
		for(i=0;i<n;printf("\n"),i++)
		for(j=0;j<m;j++)
		printf("%c",a[i][j]);
	
}
