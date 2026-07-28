#include <stdio.h>
func(int n)
{
	int i,j,sum,k,a=1;
	j=n*n*n;
	printf("%d*%d*%d=%d=",n,n,n,j);
	while(1)
	{
		k=a;
		sum=0;
		for(i=0;i<n;i++)
		{	
			sum+=k;
			k+=2;	
		}
		if(sum==j) return a;
		else a+=2;
	}
}


int main()
{
	int n,k;
	scanf("%d",&n);
	k=func(n);
	int i;
	printf("%d",k);
	for(i=0;i<n-1;i++)
	{
		k+=2;
		printf("+%d",k);
	}	
}
