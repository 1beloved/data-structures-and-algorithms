#include <bits/stdc++.h>
using namespace std;

#define N 1005
int G[N][N];
int vis[N];
struct node{
	int v;
	int total;
	struct node *next;
};
struct node *G_head[N];
void fun(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		struct node *p,*q;
		p=q=G_head[i];
		int j;
		for(j=0;j<n;j++)
		{
			if(j==i) continue;
			if(G[i][j]!=0){//说明可以连通 
				q=(struct node *)malloc(sizeof(struct node));
				q->v=j;
				q->next=NULL;
				p->next=q;
				p=q;
				G_head[j]->total+=1;
			}
		}
	}
}

void display(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<i<<" "<<G_head[i]->total<<":";
		struct node *p=G_head[i]->next;
		while(p)
		{
			cout<<p->v<<" ";
			p=p->next;
		}
		cout<<endl;
	}
}
void Topu_t(int n){
	int i;
	int count=0;
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(G_head[i]->total==0&&vis[i]==0)
			{
				vis[i]=1;
				cout<<i<<" ";
				struct node *p=G_head[i]->next;
				while(p)
				{
					G_head[p->v]->total-=1;
					p=p->next;
				}
				count++;
			}
		}
	if(count==n) break;
	}
	
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	for(i=0;i<n;i++){
		 G_head[i]=(struct node*)malloc(sizeof(struct node));
		 G_head[i]->next=NULL;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			G[i][j]=0;
		}
	} 
	for(i=0;i<m;i++)//矩阵输入 
	{
		int a,b;
		cin>>a>>b;
		G[a][b]=1;
	}
	fun(n);//创建 
//	display(n);
	Topu_t(n);
}
