#include <bits/stdc++.h>
using namespace std;
typedef struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}Tree;



Tree *CreatTree(Tree *root)
{
	int t;//ÊäÈë-1½áÊø
	scanf("%d",&t);
	if(t==-1) return NULL;
	root=(Tree *)malloc(sizeof(Tree));
	root->val=t;
	root->left=CreatTree(root->left);
	root->right=CreatTree(root->right);  
}

void PreOder(Tree *root)
{
	if(root==NULL)
	{
		cout<<"NULL"<<" ";
		return;
	}
	cout<<root->val<<" ";
	PreOder(root->left);
	PreOder(root->right);
}
int main()
{
	Tree *root;
	root=CreatTree(root);
	PreOder(root);
	
	
}
