#include <bits/stdc++.h>
using namespace std;

typedef struct tree{
    char c;
    struct tree *left;
    struct tree *right;
}Tree;
vector<char>res;
Tree *creat_tree(Tree *root)
{
    char c;
    cin>>c;
    if(c=='#') return NULL;
    root=(Tree *)malloc(sizeof(Tree));
    root->c=c;
    root->left=creat_tree(root->left);
    root->right=creat_tree(root->right);
    return root;
}
void fun(Tree *root)
{
	if(root==NULL){
		return;
	}
	fun(root->left);
	res.push_back(root->c);
	fun(root->right);
}


int main()
{
    Tree *root;
    root=creat_tree(root);
    fun(root);
    int i;
    for(i=res.size()-1;i>=0;i--) cout<<res[i];
}
