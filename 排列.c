#include <stdio.h>
static int count=0;
void swap(int *a,int x,int y)
{
	int t=a[x];
	a[x]=a[y];
	a[y]=t;
}

void perm(int *a,int m,int n)
{
	if(m==n)
	{
				count++; 
		int i;
		for(i=0;i<n;i++) printf("%d ",a[i]);
		printf("\n");
	}
	else
	{
		int i;
		for(i=m;i<n;i++)
		{
	
			swap(a,m,i);
			perm(a,m+1,n);
			swap(a,m,i);
		}
	}
}


int main()
{
	int a[9]={0},i,j,z=1;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{
		a[j]=z++;
	}
	perm(a,0,i);
	printf("\n%d",count);
}
