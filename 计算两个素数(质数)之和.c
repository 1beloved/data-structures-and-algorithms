#include <stdio.h>
func(int n)
{
	int i,j,sum,k,a=1;
	j=n*n*n;
	printf("%d=",j);
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

func2(int n)
{
	int i;
	if(n%2!=0)//ÆæÊý 
	{
		printf("%d=",n*n*n);
		for(i=-(n/2);i<=n/2;i++)
		{
			printf("%d+",(n*n)+(i*2));	
		}	
	}
	else//Å¼Êý 
	{
		printf("%d=",n*n*n);
		for(i=-(n/2);i<n/2;i++)
		{
			printf("+%d",(n*n)+(i*2)+1);	
		}		
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
	printf("\n");
	func2(n);
}
