#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005];
void swap(int i,int j)
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
void fun(int k)
{
	if(k>n)
	{
		int i;
		for(i=1;i<=n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		return;
	}
	else{
		int i;
		for(i=k;i<=n;i++)
		{
			swap(k,i);
			fun(k+1);
			swap(k,i);
		}
	}
}


int main()
{
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",a+i);	
	}	
	fun(1);
}
