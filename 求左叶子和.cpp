#include <bits/stdc++.h>
using namespace std;
vector<string> a_s;
int sum=0;
struct tree{
    int v;
    struct tree *left;
    struct tree *right;
};
void find_str(string s, string del) {
    // Use find function to find 1st position of delimiter.
    int end = s.find(del); 
    while (end != -1) { // Loop until no delimiter is left in the string.
//        cout << s.substr(0, end) << endl;
        string t=s.substr(0, end);
        a_s.push_back(t);
//        cout<<t<<endl; 
        s.erase(s.begin(), s.begin() + end + 1);
        end = s.find(del);
    }
    string t=s.substr(0, end);
    a_s.push_back(t);
}
struct tree *turn_Tree(struct tree *root,int &index)
{
    index++;
    if(a_s[index]=="#")
    {
        return NULL;
    }
//    cout<<"index="<<index<<" "<<a_s[index]<<endl;
    root=(struct tree *)malloc(sizeof(struct tree));
    root->v=atoi(a_s[index].c_str());
    root->left=turn_Tree(root->left,index);
    root->right=turn_Tree(root->right,index);
}

int sumOfLeftLeaves(struct tree* root) {
        if(root==NULL) return 0;
        if (root->left == NULL && root->right== NULL) return 0;
        int leftValue=sumOfLeftLeaves(root->left);//左
        if(root->left!=NULL&&root->left->left==NULL&&root->left->right==NULL)//左叶子的根节点 
            leftValue=root->left->v;
        int rightValue=sumOfLeftLeaves(root->right);//右
        int sum=leftValue+rightValue;//中
        return sum;
}
void display(struct tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->v<<" ";
    display(root->left);
    display(root->right);
}
int main()
{
    string s;
    cin>>s;
    a_s.push_back(" ");
    string t=",";
    find_str(s,t);
    struct tree *root;
    int index=0;
    root=turn_Tree(root,index);    
//    display(root);
    sum=sumOfLeftLeaves(root);
    cout<<sum;
}
/*3,9,#,#,20,15,#,#,7,#,#*/
