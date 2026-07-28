#include <bits/stdc++.h>
using namespace std;
typedef int DateSize;
#define N 1000
char s[N];
DateSize w[N];
int n;
int len;
vector<int>res;
int sum=0;
typedef struct hfmtree{
 	DateSize w;
 	char c;
 	int index;
	hfmtree *left,*right,*parent;
	bool operator<(const hfmtree &t)const{
			if(w!=t.w)
				return w>t.w;
			return t.left==NULL;
	}
}Hfm; 
void jssum(Hfm *root,int deep)
{
	if(!root->left&&!root->right)
	{
		printf("%c:%d\n",root->c,deep);
		sum+=root->w*deep;
		return;
	}
	deep+=1;
	jssum(root->left,deep);
	jssum(root->right,deep);
}
Hfm *initHfm(Hfm *root)
{
	len=2*n-1;
	root=new Hfm[len];
	int i;
	for(i=0;i<n;i++)
	{
		root[i].index=i;
		root[i].w=w[i];
		root[i].left=root[i].right=NULL;
		root[i].c=s[i];
	}
	return root;
}
void display(Hfm *root)
{
	if(root->left==NULL&&root->right==NULL) {
		int i;
		cout<<root->c<<":";
		for(i=0;i<res.size();i++) cout<<res[i]<<" ";
		cout<<endl;
		return;
	} 
	res.push_back(0);
	display(root->left);
	res.pop_back();
	res.push_back(1);
	display(root->right);
	res.pop_back();
}

int main()
{
	int i,wpl=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++) cin>>w[i];
	Hfm *root;
	root=initHfm(root);
	priority_queue<Hfm>q;
	for(i=0;i<n;i++)
	{
		q.push(root[i]);
	}
	Hfm binaryT;
	for(i=n;i<len;i++)
	{
		Hfm t1,t2;
		t1=q.top();
		q.pop();
		t2=q.top();
		q.pop();
		root[i].w=t1.w+t2.w;
		root[i].left=&root[t1.index];
		root[i].right=&root[t2.index];
		root[t1.index].parent=&root[i];
		root[t2.index].parent=&root[i];
		root[i].index=i;
		root[i].c='?';
		q.push(root[i]);
	}
	
	Hfm t=root[i-1];
//	fun(&t);
	queue<Hfm> q1;
	int count=0;
	q1.push(t);
	while(!q1.empty())
	{
		t=q1.front();
		q1.pop();
		if(t.left==NULL&&t.right==NULL){
			cout<<t.w;
			 continue;
		}
		cout<<t.w<<endl;
		q1.push(root[t.left->index]);
		q1.push(root[t.right->index]);
	}
	cout<<endl;
	t=root[i-1];
	display(&t);
	t=root[i-1];
	jssum(&t,0);
	cout<<"sum="<<sum;
}
