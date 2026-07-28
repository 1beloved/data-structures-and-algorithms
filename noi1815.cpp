#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dy[8]={1,1,1,0,-1,-1,-1,0};//从左下开始的逆时针 
int dx[8]={-1,0,1,1,1,0,-1,-1};
int v[9][9]={0}; 

int main()
{
	int a[9][9]={0},b[9][9]={0};
	int count,day;
	int fw=4;
	scanf("%d%d",&count,&day);
	int i,j;
	a[4][4]=count;//一开始有多少个细菌 
	memcpy(b,a,sizeof(a));
	for(i=0;i<day;i++)
	{
		int row,col;//row表示从第几行开始,col表示第几列开始
		for(row=4-i;row<=4+i;row++)
		{
			for(col=4-i;col<=4+i;col++)
			{
				int t;
				b[row][col]+=a[row][col];
				for(t=0;t<8;t++)
				{
					int x=col+dx[t],y=row+dy[t];
					if(x>=0&&x<=8&&y>=0&&y<=8)
					b[x][y]+=a[row][col];
				}
			}
		} 
		memcpy(a,b,sizeof(b));
	}
	for(i=0;i<9;printf("\n"),i++)
	for(j=0;j<9;j++)
	printf("%d ",a[i][j]);
	
	
	
}
