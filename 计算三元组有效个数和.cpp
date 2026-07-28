#include <bits/stdc++.h>
using namespace std;
struct node{
	int r,c;
};
#define N 100
int a[N][N];
int main()
{
	int r,c,i,j;
	cin>>r>>c; 
	int n;
	cin>>n;
	while(n--)
	{
		int x,y,v;
		cin>>x>>y>>v;//输入行和列
		if(x>=0&&x<r&&y>=0&&y<c)//符合条件的话 
		{
			a[x][y]=v;
		} 
	}
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			sum+=a[i][j];
	}
	cout<<sum;
	
	
}
