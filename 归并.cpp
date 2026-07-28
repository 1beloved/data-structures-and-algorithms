#include <stdio.h>
int n;
#define N 100
int a[N];
int b[N];

void Merge(int l,int r)
{
	printf("%d %d :   ",l,r);
	int mid=(l+r)/2;
//	if(mid==0) return;
	int be=l,e=mid+1,s=l;
	while(be<mid+1&&e<r+1)
	{
		if(a[be]<a[e])
		{
			b[s++]=a[be++];
		}else{
			b[s++]=a[e++];
		}
	}
	while(be<mid+1)
	{
		b[s++]=a[be++];
	}
	while(e<r+1)
	{
		b[s++]=a[e++];
	}
	int i;
	for(i=l;i<=r;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}



void Sort(int l,int r)
{
	if(l<r){
//		printf("%d %d ",l ,r );
		int mid=(l+r)/2;
		Sort(l,mid);
		Sort(mid+1,r);
		Merge(l,r);
	}



	
} 


int main()
{
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	Sort(0,n-1);		
} 
