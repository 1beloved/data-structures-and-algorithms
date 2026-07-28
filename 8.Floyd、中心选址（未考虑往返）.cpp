///没考虑往返，有问题
#include <bits/stdc++.h>

using namespace std;
int n,m;
int a[100][100]={0};
int dist[100][100]={0};
int path[100][100]={0};
struct center
{
    int max_mindist;
    int total_mindist;
    int num;
}center[100];

void dispdist()
{
    cout<<"dist矩阵"<<endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void disppath()
{
    cout<<"path矩阵"<<endl;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Floyd()
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            dist[i][j]=a[i][j];
            if (a[i][j]<INT_MAX)
                path[i][j]=i;
            else
                path[i][j]=-1;
        }
    }
    cout<<"---------"<<endl;
    cout<<"初始状态"<<endl;
    dispdist();
    disppath();
    cout<<endl;
    cout<<"--------"<<endl;
    for (int k=1;k<=n;k++)		//求Ak[i][j]
    {
        cout<<"---------"<<endl;
        cout<<"第"<<k<<"次迭代："<<endl;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=n;j++)
            {
                if (i!=j&&dist[i][k]<INT_MAX
                    &&dist[k][j]<INT_MAX
                    &&dist[i][j]>dist[i][k]+dist[k][j])	//找到更短路径
                {
                    dist[i][j]=dist[i][k]+dist[k][j];	//修改路径长度
                    path[i][j]=path[k][j]; 	//修改最短路径为经过顶点k
                }
            }
        }
        dispdist();
        disppath();
        cout<<endl;
        cout<<"--------"<<endl;
    }
    cout<<"--------"<<endl;
}

bool cmp(struct center c1,struct center c2)
{
    if (c1.max_mindist==c2.max_mindist)
        return c1.total_mindist<c2.total_mindist;
    else
        return c1.max_mindist<c2.max_mindist;
}
void choosecenter()
{

    for (int i=1;i<=n;i++)
    {
        center[i].max_mindist=-1;
        center[i].total_mindist=0;
        center[i].num=i;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                center[i].total_mindist+=dist[i][j];
                if(dist[i][j]>center[i].max_mindist)
                    center[i].max_mindist=dist[i][j];
            }
        }
    }
    sort(center+1,center+n+1,cmp);
    for(int i=1;i<=n;i++)
        cout<<center[i].num<<" "
            <<center[i].max_mindist<<" "
            <<center[i].total_mindist<<endl;
    cout<<"中心"<<center[1].num<<endl;
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
        a[x][y]=w;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    Floyd();
    int v,u;
    u=4;
    v=3;
    cout<<"dist:"<<dist[u][v]<<endl;
    cout<<"path:";
    while(path[u][v]!=-1)
    {
        cout<<v<<"<---";
        v=path[u][v];
    }
    cout<<v<<endl;
    cout<<endl;
    choosecenter();
}
/*
17 37
1 2 6
1 3 4
4 1 5
4 3 4
3 2 2
2 5 6
2 6 7
2 7 9
3 7 8
3 8 10
4 8 4
4 9 11
10 4 12
10 9 6
9 8 5
8 7 7
7 6 6
6 5 6
5 11 10
5 12 9
6 11 8
6 12 9
6 14 10
7 12 13
8 12 12
9 13 15
13 10 12
11 14 12
11 15 11
12 14 5
12 13 11
13 14 6
16 13 7
14 15 6
14 16 5
15 17 8
17 16 5

中心：4




4 5
1 2 1
3 1 4
2 3 1
2 4 2
4 3 3

中心：1
*/
