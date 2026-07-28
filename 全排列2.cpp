#include <bits/stdc++.h>
using namespace std;
#define N 100005
int a[N];
int haxi[N];
int n;
void fun(int k)
{
	if(k>n)
	{
		int i;
		for(i=1;i<=n;i++)
		{
			printf("%5d",a[i]);
		}
		printf("\n");
		return;
	}
	int i; 
	for(i=1;i<=n;i++)
	{
		if(!haxi[i]){
			a[k]=i;
			haxi[i]=1;
			fun(k+1);
			haxi[i]=0;
		}
	}
	
}


int main()
{
//	int n;
	scanf("%d",&n);
	fun(1);
	
}
