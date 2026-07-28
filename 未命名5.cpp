
#include <bits/stdc++.h>
using namespace std;

typedef struct tree{
    char c;
    struct tree *left;
    struct tree *right;
}Tree;

Tree *creat_tree(Tree *root)
{
    char c;
    cin>>c;
//    getchar();
    if(c=='#') return NULL;
    root=(Tree *)malloc(sizeof(Tree));
    root->c=c;
	root->left=creat_tree(root->left);
    root->right=creat_tree(root->right);
    
    return root;
}
int Min_treeDepth(Tree *root)
{
    if(root==NULL) return 0;
    if(root->left==NULL&&root->right==NULL) return 1;
    int mindp=-1;
    if(root->left!=NULL)
    {
        mindp=max(Min_treeDepth(root->left),mindp);
    }
    if(root->right!=NULL)
    {
        mindp=max(Min_treeDepth(root->right),mindp);
    }
    return mindp+1;
}

void display(Tree *root){
	if(root==NULL){
		return;
	}
	display(root->left);
	display(root->right);
	cout<<root->c;
}

int main()
{
	int k;
	cin>>k;
    while(k--){
    	Tree *root;
    root=creat_tree(root);
//    cout<<Min_treeDepth(root)<<endl;
	display(root);
     //if(k!=0)
      cout<<endl;
//		cout<<root->c;
	}
	
}
