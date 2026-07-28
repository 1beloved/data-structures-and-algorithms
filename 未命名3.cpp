#include <bits/stdc++.h>
using namespace std;

int vis[100];
int N;
int a[100];
int cnt=1;

void fun(int index)
{
	printf("%d:\n",cnt);
	cnt++;
//	const int count=1;
//	printf("%d:%d\n",cnt++,index);
	if(index==N+1)
	{
		
		int i;
		for(i=1;i<=N;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	int i;
	for(i=1;i<=N;i++)
	{
		if(vis[i]==0)
		{
			a[index]=i;
			vis[i]=1;
			fun(index+1);
			vis[i]=0;
		}
	}
}

int main()
{
	cin>>N;
	fun(1);
	
}
