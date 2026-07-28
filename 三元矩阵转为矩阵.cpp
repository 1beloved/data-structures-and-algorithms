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
	struct node array[N];
};
void tuenArray(struct a &t)
{
	int n=t.rnum;//ĞĞ
	int m=t.cnum;//ÁĞ 
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
//			cout<<t.array[count].r<<endl;
			if(t.array[count].r==i&&t.array[count].c==j)
			{
				cout<<t.array[count].v<<" ";
				count++;
			}else cout<<0<<" ";
		 } 
		 cout<<endl;
	}
	
}

int main()
{
	struct a t;
	t.rnum=4;
	t.cnum=5;
	t.vnum=4;
	t.array[0].c=1,t.array[0].r=0,t.array[0].v=9;
	t.array[1].c=4,t.array[1].r=0,t.array[1].v=1;
	t.array[2].c=1,t.array[2].r=2,t.array[2].v=6;
	t.array[3].c=1,t.array[3].r=3,t.array[3].v=2;
	tuenArray(t);
}
