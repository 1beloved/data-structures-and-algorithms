#include <bits/stdc++.h>
using namespace std;
#define N 1000
int G[N][N];
int n,m;
int ve[N]={-1};
int vl[N]={INT_MAX};
int path[N][2];
int e[N];
int l[N];
void Cin_Aov(){
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			G[i][j]=INT_MAX;
		}
	}
	for(i=0;i<m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		path[i][0]=a;
		path[i][1]=b;
		G[a][b]=c;
	}
}
void display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(G[i][j]==INT_MAX) cout<<"@"<<" ";
			else cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
 } 
 

void Creat_Aov()
{
	int i,j;
	ve[0]=0;
	for(i=1;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j) continue;
			if(G[j][i]!=INT_MAX){
				ve[i]=max(ve[i],G[j][i]+ve[j]);
			}
		}
	}
	for(i=0;i<n;i++) cout<<ve[i]<<" ";
	cout<<endl;
	vl[n-1]=ve[n-1];
	for(i=0;i<n-1;i++) vl[i]=INT_MAX;
//cout<<endl;
	for(i=n-1;i>=0;i--)
	{
		
		for(j=0;j<n;j++){
//			cout<<vl[j]<<" ";
			if(i==j) continue;
			if(G[j][i]!=INT_MAX){
//				cout<<j<< i<<" ";
				vl[j]=min(vl[j],vl[i]-G[j][i]);
			}
		}
	}
	cout<<endl;
	for(i=0;i<n;i++) cout<<vl[i]<<" "; 
	cout<<endl;
//	cout<<"1";
	for(i=0;i<m;i++)
	{
		int r=path[i][0];
		e[i]=ve[r];
	}
	cout<<endl;
	for(i=0;i<m;i++) cout<<e[i]<<" ";
	for(i=0;i<m;i++)
	{
		int c=path[i][1];
		l[i]=vl[c]-G[path[i][0]][path[i][1]];
	}
	cout<<endl;
	for(i=0;i<m;i++) cout<<l[i]<<" ";
	cout<<endl;
	for(i=0;i<m;i++) {
		if(l[i]==e[i]) cout<<i<<" ";
	}
}


int main()
{
	cin>>n>>m;
	Cin_Aov();
//	display();
	Creat_Aov();
}
/*
9 11
0 1 6
0 2 4
0 3 5
1 4 1
2 4 1
3 5 2
4 6 9
4 7 7
5 7 4
6 8 2
7 8 4

*/

