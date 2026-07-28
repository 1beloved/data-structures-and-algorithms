#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d,m;
	cin>>d>>m;
	int x1,x2,x3,y1,y2,y3;
	x1=1,x2=0,x3=m,y1=0,y2=1,y3=d;
	while(y3!=0&&y3!=1)
	{
		int q=x3/y3;
		int t1,t2,t3;
		t1=x1-q*y1;
		t2=x2-q*y2;
		t3=x3-q*y3;
		x1=y1;
		x2=y2;
		x3=y3;
		y1=t1;
		y2=t2;
		y3=t3;
		printf("%d %d %d %d %d %d %d\n",q,x1,x2,x3,y1,y2,y3);
	}
	cout<<y2;
}
