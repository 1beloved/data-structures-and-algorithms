#include <bits/stdc++.h>
using namespace std;
typedef struct tree{
	int val;
	int index;
	struct tree *rgiht;
	struct tree *left;
}Tree;

Tree *insert_val(Tree *root,int val,int index)
{
	
//	cout<<val;
	if(root==NULL){
//	cout<<val;
		root=(Tree *)malloc(sizeof(Tree));
		root->left=NULL;
		root->rgiht=NULL;
		root->val=val;
		root->index=index;
		cout<<root->val;
		return root; 
	}else{
		if(val<root->val)
		{
			root->left=insert_val(root->left,val,index);
		}else{
			root->rgiht=insert_val(root->rgiht,val,index);
		}
		return root;
	}
	
}

void display(Tree *root)
{
	if(root==NULL)
	{
		return;
	}
	
	display(root->left);
	cout<<root->val<<" ";
	display(root->rgiht);
}
int find_val(Tree *root,int val){
	if(root==NULL) return -1;
	if(root->val==val) return root->index;
	if(root->val>val) return find_val(root->left,val);
	else return find_val(root->rgiht,val);
}
int main()
{
	Tree *root=NULL;
	int t,count=0;
	while((scanf("%d",&t))!=EOF)
	{
//		cout<<1;
//cout<<t;
		root=insert_val(root,t,count);
		count++;
	}
	display(root);
	cout<<endl;
	cout<<"18 index is :"<<find_val(root,18)<<endl;
	cout<<"28 index is :"<<find_val(root,28)<<endl;
}
/*
15 12 6 32 27 21 16 30 28 31 35
*/
