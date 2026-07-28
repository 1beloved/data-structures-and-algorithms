#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int b[50][50];//用来记录状态看来没来过 
int x[4]={0,0,-1,1};
int y[4]={1,-1,0,0};
struct node{
	int x;
	int y;
	int count;
};
int main()
{
	int r,c;
	cin>>r>>c;
	int i,j;
	vector<vector<char> >ss(r);
	for(i=0;i<r;i++)
		ss[i].resize(c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cin>>ss[i][j];
	}
	struct node t={0,0,1};
	queue< node>dd;
	dd.push(t);
	b[0][0]=1;
	int flag=1;
	while(!dd.empty()&&flag)
	{
		for(i=0;i<4&&flag;i++)
		{
			int xx=dd.front().x+x[i];
			int yy=dd.front().y+y[i];
			int count=dd.front().count+1;
			if(xx>=0&&xx<r&&yy>=0&&yy<c&&ss[xx][yy]!='#'&&b[xx][yy]==0)
			{
//				printf("(%d , %d )-> (%d , %d)\n",dd.front().x,dd.front().y,xx,yy);
				b[xx][yy]=1;
				if(xx==r-1&&yy==c-1)
				{
//					printf("到了\n");
					cout<<count;
					return 0;
					flag=0;
				}
				dd.push({xx,yy,count});
			}
		}
		dd.pop();
	}
}


