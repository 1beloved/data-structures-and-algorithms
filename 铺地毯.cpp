#include <bits/stdc++.h>
using namespace std;
#define N 10005
int xb[N];
int yb[N];
int p0[N];//x的宽度 
int p1[N];//y的宽度 
int main()
{
	int n;
	cin>>n;
	int i;
	for(i=1;i<=n;i++)
	{
		int x,y,x1,y1;
		cin>>x>>y>>x1>>y1;
		xb[i]=x;
		yb[i]=y;
		p0[i]=x1;
		p1[i]=y1;
	}
	int b,e;
	cin>>b>>e;//要求的x和y 
	int ans=-1;
	for(i=1;i<=n;i++)
	{
		if(b>=xb[i]&&e>=yb[i]&&b<=xb[i]+p0[i]&&e<=yb[i]+p1[i]){
			ans=i;
		}
	}
	cout<<ans;
	return 0;
	
} 
