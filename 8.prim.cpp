#include <bits/stdc++.h>

using namespace std;
int n,m;
int a[10][10]={0};

struct
{
    int cost;
    int vex;
}shortedge[100000];


int minedge_vex()
{
    int k;
    int mincost=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        if (shortedge[i].cost>0&&
            shortedge[i].cost<mincost)
            {
                mincost=shortedge[i].cost;
                k=i;
            }
    }

    return k;
}

void Prim(int v)
{
    int k;
    for(int i=1;i<=n;i++)
    {
        shortedge[i].cost=a[v][i];
        shortedge[i].vex=v;
    }
    shortedge[v].cost=0;
    cout<<"---初始候选边---"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"("<<shortedge[i].vex<<","<<i<<")"
            <<shortedge[i].cost<<endl;
    }
    for(int i=1;i<n;i++)
    {
        k=minedge_vex();
        cout<<"选择第"<<i<<"条边："<<endl;
        cout<<"("<<shortedge[k].vex<<","<<k<<")"
            <<shortedge[k].cost<<endl;
        shortedge[k].cost=0;
        cout<<"---更新候选边---"<<endl;
        for(int j=1;j<=n;j++)
        {
            if(a[k][j]<shortedge[j].cost)
            {
                shortedge[j].cost=a[k][j];
                shortedge[j].vex=k;
            }
            cout<<"("<<shortedge[j].vex<<","<<j<<")"
                <<shortedge[j].cost<<endl;
        }
    }
}

int main()
{
    cin>>n>>m;
    int x,y,w;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=INT_MAX;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y>>w;
        a[x][y]=a[y][x]=w;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    Prim(1);
    cout<<endl;
//    Prim(5);
//    cout<<endl;
}
/*
6 8
1 2 10
2 3 6
3 6 8
1 4 8
1 5 7
2 6 5
4 5 3
5 6 9


*/
