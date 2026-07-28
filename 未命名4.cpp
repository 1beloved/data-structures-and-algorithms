#include <bits/stdc++.h>
using namespace std;
typedef struct tree{
	int v;
	struct tree *left,*right;
}Tree;

Tree *creat_t(Tree *root)
{
	string s1;
	cin>>s1;
	if(s1=="#")
	{
		return NULL;
	}
	root=(Tree *)malloc(sizeof(Tree));
	root->v=atoi(s1.c_str());
	root->left=creat_t(root->left);
	root->right=creat_t(root->right);
	return root;
}
int dp(Tree *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else{
		return max(dp(root->left),dp(root->right))+1;
	}
}

int is_balance(Tree *root)
{
	if(root==NULL) return 1;
	return ((abs(dp(root->right)-dp(root->left))<=1)&&is_balance(root->left)&&is_balance(root->right));
	
	
}

int main()
{
	Tree *root=NULL;
	root=creat_t(root);	
	if(is_balance(root))
	{
		cout<<"true";
	}else{
		cout<<"false";
	}
}

