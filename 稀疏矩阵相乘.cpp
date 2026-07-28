#include <bits/stdc++.h>
#define N 100
int a[N][N];
int b[N][N];
int C[N][N];
using namespace std;
int main()
{
	int count,r,c;
	cin>>r>>c>>count;
	int t;
	for(t=0;t<count;t++)
	{
		int r,c,v;
		cin>>r>>c>>v;
		a[r][c]=v; 
	}
	int r1,c2;
	cin>>r1>>c2>>count;
	for(t=0;t<count;t++)
	{
		int r,c,v;
		cin>>r>>c>>v;
		b[r][c]=v; 
	}
	
	int i,j,k;

	for(i=0;i<r;i++)
	{
		for(k=0;k<c2;k++)
		{
			for(j=0;j<c;j++)
			{
				C[i][k]+=a[i][j]*b[j][k];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(k=0;k<c2;k++)
		{
			if(C[i][k]!=0)
			{
				printf("%d %d %d\n",i,k,C[i][k]);
			}
		}
	}
}
