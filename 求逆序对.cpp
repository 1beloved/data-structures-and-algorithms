#include <stdio.h>
#include <malloc.h>
long long int ans;
int a[500050],b[500050],n;
void merge(int a[],int b[],int l,int m,int r)
{
//	printf("l:%d m: %d r:%d\n",l,m,r);
	int i=l,j=m+1,k=l;
	while(i!=m+1&&j!=r+1)
	{
		if(a[i]>a[j])
		{
			b[k++]=a[j++];
			ans+=m-i+1;
		}else{
			b[k++]=a[i++];
		
		}
	}
	while(i!=m+1)
	{
		b[k++]=a[i++];
	}
	while(j!=r+1)
	{
		b[k++]=a[j++];
	}
	for(i=l;i<=r;i++)
	{
		a[i]=b[i];
	}
}

void MergeSort(int a[],int b[],int l,int r)
{
	if(l<r)
	{
	int mid=(l+r)/2;
	MergeSort(a,b,l,mid);
	MergeSort(a,b,mid+1,r);
	merge(a,b,l,mid,r);
	}
	
}


int main()
{
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	MergeSort(a,b,0,n-1);
	printf("%lld",ans);
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",a[i]);
//	}
} 
