#include <bits/stdc++.h>
using namespace std;
typedef struct tree{
	int ch;
	struct tree *left,*right;
}Tree;
int flag;
string res;
Tree *creat_tree(Tree *root)
{
	string ch;
	cin>>ch;
	if(ch=="#"){
		return NULL;
	}
	root=(Tree *)malloc(sizeof(Tree));
	root->ch=atoi(ch.c_str());
	root->left=creat_tree(root->left);
	root->right=creat_tree(root->right);
	return root;
}

int sum_tree(Tree *root,int sum)
{
	if(root==NULL) return 0;
	if(root->left==NULL&&root->right==NULL)
	{
		return sum==root->ch;
	}
	return (sum_tree(root->left,sum-root->ch)||sum_tree(root->right,sum-root->ch));
	
}


int main(){
	Tree *root;
	int sum;
	root=creat_tree(root);
	cin>>sum;
	if(sum_tree(root,sum))
	{
		cout<<"true";
	 } else{
	 	cout<<"false"; 
	 }
}
