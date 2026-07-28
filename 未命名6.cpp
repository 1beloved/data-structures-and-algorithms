#include <bits/stdc++.h>
using namespace std;
struct node{
	int r,c;
};
#define N 100
int a[N][N];
int main()
{
	int r,c,i,j,sum=0;
	cin>>r>>c; 
	int n;
	cin>>n;
	while(n--)
	{
		int x,y,v;
		cin>>x>>y>>v;//输入行和列
		if(x>=0&&x<r&&y>=0&&y<c)//符合条件的话 
		{
			if(a[x][y]==0)//说明第一次
			{
				a[x][y]=v;
				sum+=v;
			 } else{
			 	sum-=a[x][y];
			 	sum+=v;
			 	a[x][y]=v;
			 }
		} 
	}
	cout<<sum;
	
	
}
