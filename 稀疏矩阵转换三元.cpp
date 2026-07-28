#include <bits/stdc++.h>
using namespace std;
#define N 100
typedef struct node{
	int r;
	int c;
	int v;
}x;

struct a{
	int rnum;
	int cnum;
	int vnum;
	x *array=new node[N];
};

void turn(int a[N][N],struct a &t,int m,int n)
{
	t.rnum=m;
	t.rnum=n;
	int i,j,num=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			{
				if(a[i][j]!=0)
				{
					t.array[num].c=j;
					t.array[num].r=i;
					t.array[num++].v=a[i][j];
				}
			}
	}	
	t.vnum=num;

}
int main()
{
	int m,n,a[N][N],i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>a[i][j];
	struct a t;
	turn(a,t,m,n);
	for(i=0;i<t.vnum;i++)
	{
		printf("(%d,%d,%d)\n",t.array[i].r,t.array[i].c,t.array[i].v);
	}
}

