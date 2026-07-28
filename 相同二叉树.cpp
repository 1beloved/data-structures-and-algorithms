#include <bits/stdc++.h>
using namespace std;
typedef struct tree{
	char ch;
	struct tree *right;
	struct tree *left;
}BT; 
BT *CBT(BT *root){
	char c;
	scanf("%c",&c);
	if(c=='#')
	{
//		cout<<1;
		return NULL;
	}else{
//		cout<<c;
		root= (BT *)malloc(sizeof(BT));
		root->ch=c;
		root->left=CBT(root->left);
		root->right=CBT(root->right);
		return root;
	}
		
}
void Preorder(struct tree *root){//œ»–Ú±È¿˙
    if(root==NULL) return;
    cout<<root->ch;
	Preorder(root->left);
	Preorder(root->right); 
}
int IS_same(BT *root1,BT *root2){
	if(root1==NULL&&root2==NULL){
		return 1;
	}
	if(root1==NULL||root2==NULL){
		return 0;
	}
	if(root1->ch!=root2->ch) return 0;
		return	IS_same(root1->left,root2->left)&&IS_same(root1->right,root2->right);
}

int main()
{
	BT *root1,*root2;
	root1=CBT(root1);
	getchar();
//	Preorder(root1);
//	cout<<endl;
	root2=CBT(root2);
//	Preorder(root2);
//	cout<<root1->ch;
//cout<<1;
	if(	IS_same(root1,root2)){
		cout<<"true";
	}else{
		cout<<"false";
	}
}
//ABC##D##EF###
