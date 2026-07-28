#include <bits/stdc++.h>
using namespace std;
#define N 100
int a[N][N];
int b[N][N];
int c[N][N];
void fun()
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			if(c[i][j]!=0){
				cout<<i<<" "<<j<<" "<<c[i][j]<<endl;
			}
		}
	}
}
int main()
{
	int n,count1,count2;
	cin>>n>>count1>>count2;
	int i;
	for(i=0;i<count1;i++)
	{
		int r,c,v;
		cin>>r>>c>>v;
		a[r][c]=v;
	}
	for(i=0;i<count2;i++)
	{
		int r,c,v;
		cin>>r>>c>>v;
		b[r][c]=v;
	}
	fun();//ÇóºÍ 
}
