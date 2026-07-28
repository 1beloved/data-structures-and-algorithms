#include <stdio.h>
#define N 6
void func(int a[],int b[]){
	int i,j,t,rank,k=0;
	for(i=0;i<N;i++)
	{
		t=a[i];
		rank=N;
		for(j=0;j<N;j++)
		{
			if(t>a[j]&&j!=i)
			{
				rank--;
			}
		}
		for(i=0;i<k;i++)
		{
			if(b[i]==rank) b[i]=rank--;
		}
		if (i==k) b[k++]=rank;
	}
}

int main()
{
	int a[N]={1,1,2,1,20,1},b[N];
	int i;
	for(i=0;i<N;i++)
	b[i]=a[i];
	func(a,b);
	for(i=0;i<N;i++)
		printf("%dµÄÅÅÃûÊÇ:%d\n",a[i],b[i]);
}
