#include <bits/stdc++.h>
using namespace std;
int a[100005],dist,n;
int main()
{
	scanf("%d%d",&n,&dist);
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	for(i=1;i<n-1;i++)
	{
		if(a[i+1]-a[i-1]<=dist)
		{
			sum++;
			a[i]=a[i-1];
		}
	}
	printf("%d",sum);
}
