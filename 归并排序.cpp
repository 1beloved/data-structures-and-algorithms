#include <bits/stdc++.h>
using namespace std;
int n;
int a[50005];
int b[50005];
long long int ans=0;
void display()
{
	int i;
	for(i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl; 
}
void mergesort(int l,int r)
{
	if(l<r)
	{
		
		int mid=(l+r)/2;
		mergesort(l,mid);
		mergesort(mid+1,r);
	}
	int csl=l;
	int mid=(l+r)/2;
	int k=mid+1,index=0;
	while(l<=mid&&k<=r)
	{
		if(a[l]<=a[k])
		{
			b[index++]=a[l++];
		}else{
			b[index++]=a[k++];
			ans+=mid-l+1;
		}
	}
	while(l<=mid)
	{
		b[index++]=a[l++];
	}
	while(k<=r)
	{
		b[index++]=a[k++];
	}
//	for(int i=0;i<index;i++) cout<<b[i]<<" ";cout<<endl;
	for(int i=0;i<index;i++) a[csl++]=b[i];
//	display();
}

int main()
{
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(0,n-1);
//	for(i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
cout<<ans;
}
