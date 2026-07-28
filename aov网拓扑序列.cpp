#include <bits/stdc++.h>
using namespace std;
#define N 1000
int G[N][N];
int n,m;
typedef struct node{
	int incount;
	int index;
	struct node *next;
}Node;
Node *a_head[N];

void Cin_Aov(){
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++){
			G[i][j]=INT_MAX;
		}
	}
	for(i=0;i<m;i++){
		char a,b;
		cin>>a>>b;
//		cout<<a<<"->"<<b<<endl;
		G[a-'A'+1][b-'A'+1]=1;
	}
}
void display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(G[i][j]==INT_MAX) cout<<"@"<<" ";
			else cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
 } 
 

void Creat_Aov()
{
	int i;
	for(i=1;i<=n;i++) {
		a_head[i] = new Node;
		a_head[i]->incount=0;
		a_head[i]->next=NULL;
		a_head[i]->index=i;
	}
	for(i=1;i<=n;i++)
	{
		Node *p=a_head[i],*q;
		for(int j=1;j<=n;j++)
		{
			if(j==i) continue;
			if(G[i][j]!=INT_MAX){
				q=new Node;
				q->index=j;
				q->next=NULL;
				p->next=q;
				p=q;
				a_head[j]->incount++;
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		Node *p=a_head[i];
		printf("%c %d:",'A'+i-1,a_head[i]->incount);
		while(p!=NULL)
		{
			cout<<p->index<<"->";
			p=p->next;
		}
		cout<<"NULL";
		cout<<endl;
	}
}


int main()
{
	cin>>n>>m;
	Cin_Aov();
	display();
	Creat_Aov();
}

/*
12 16
A
B
C
D
E
F
G
H
I
J
K
L
A B
A C
B C
A D
C E
D E
K F
C G
E G
C H
F H
I J
I K
A L
I L
J L
*/
