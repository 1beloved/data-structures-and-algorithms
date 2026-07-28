#include <bits/stdc++.h>

using namespace std;
int n,m;
int a[10][10]={0};
int vertex[10],visited[10]={0};

void DFS(int v)
{
    cout<<vertex[v]<<" ";
    visited[v]=1;
    for(int j =1;j<=n;j++)
    {
        if(a[v][j]==1&&visited[j]==0)
            {DFS(j);}
    }
}

void BFS(int v)
{
    queue<int> q;
    cout<<v<<" ";
    visited[v]=1;
    q.push(v);
    while(!q.empty())
    {
        v=q.front();
        q.pop();
        for(int j=1;j<=n;j++)
        {
            if(a[v][j]==1&&visited[j]==0)
            {
                cout<<vertex[j]<<" ";
                visited[j]=1;
                q.push(j);
            }
        }
    }
}

void BFSfly(int vstart,int vend)
{
    int path[n]={0};
    int v;
    queue<int> q;
    v=vstart;
    cout<<v<<" ";
    path[v]=-1;
    visited[v]=1;
    q.push(v);
    while(!q.empty())
    {
        v=q.front();
        q.pop();
        if (v==vend)
        {
            break;
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if(a[v][j]==1&&visited[j]==0)
                {
                    cout<<vertex[j]<<" ";
                    path[j]=v;
                    visited[j]=1;
                    q.push(j);
                }
            }
        }
    }
    cout<<endl;
    int fly[10];
    int k=0;
    while(path[v]!=-1)
    {
        fly[k++]=v;
        cout<<v<<"<--";
        v=path[v];
    }
    fly[k]=v;
    cout<<v<<endl;
    while(k!=0)
    {cout<<fly[k--]<<" ";}
    cout<<fly[k]<<endl;
}


void cleanFlag()
{
    for(int i=1;i<=n;i++)
    {
        visited[i]=0;
    }
}

int main()
{
    int vstart,vend;
    cin>>n>>m;///>>vstart>>vend;
    int x,y,z;
     for(int i=1;i<=n;i++)
    {
        vertex[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        a[i][j]=0;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
//    cleanFlag();
//    cout<<"DFS:";
//    DFS(1);
//    cout<<endl;
//    cleanFlag();
//    cout<<"DFS:";
//    DFS(6);
//    cout<<endl;
    /*cleanFlag();
    /*cout<<"BFS:";
    BFS(1);
    cout<<endl;
    cleanFlag();
    cout<<"BFS:";
    BFS(6);
    cout<<endl;
    cleanFlag();*/
    BFSfly(1,5);
}


/*
--------------------
6 8
1 2
2 3
3 6
1 4
1 5
2 6
4 5
5 6
-----------------------
6 8 1 6
1 2
2 3
3 6
1 4
1 5
2 6
4 5
5 6
*/
