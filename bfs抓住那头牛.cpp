#include <bits/stdc++.h>
using namespace std;
int b[100005];
int n,k;
struct node{
	int n;//位置 
	int step;
};

void bfs()
{
	struct node tx;
	tx.step=0;
	tx.n=n;
	int i;
	queue<node>q;
	q.push(tx);
	while(!q.empty())
	{
		struct node t=q.front();
		q.pop();
		if(t.n==k) {
			cout<<t.step;
			return;
		}
		for(i=0;i<3;i++)
		{
			struct node t1;
			if(i==0) t1.n=t.n+1;
			if(i==1) t1.n=t.n-1;
			if(i==2) t1.n=t.n*2;
			t1.step=t.step+1;
			if(t1.n>=0&&t1.n<100005&&b[t1.n]==0)
			{
				b[t1.n]=1;
				q.push(t1);
			}
		}
		
		
		
		
		
		
	}
	
	
}
int main()
{
	cin>>n>>k;
	memset(b,0,sizeof(b));
	b[n]=1;//代表一开始来过	
	bfs();	
}
