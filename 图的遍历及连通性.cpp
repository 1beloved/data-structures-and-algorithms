
#include<bits/stdc++.h>
using namespace std;
#define N 100
int vis[N]={0};
int a[N][N];
int n;
int c;
void display_graph(int G[N][N],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%-2d ",G[i][j]);
        }
        cout<<endl;
    }
}
void dfs(int v,int &count)
{
//    cout<<v;
    count++;
    vis[v]=1;
    if(count==n) return;
    int i;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0&&a[v][i]!=0)
        {
//            cout<<"->";
            dfs(i,count);
        }
    }
}

void dfs2() 
{
    int i;
    int t=1,count=0;
    while(1)
    {
//        cout<<"Graph:"<<t<<endl;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,count);
                c++;
            }else {
//                cout<<endl;
            }
        }
        if(i>n) break;
//        c++;
    }
}
int main()
{
    int m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
//    display_graph(a, n);
//    c=1;
    dfs2();
    cout<<c;

}
