#include <stdio.h>
int func(int n)
{
	int sum,j;
	for(j=1;sum<n;j+=2)
	{
		sum+=j+j+1;
	}
	return (sum-n)/2;
	
}
int func1(int n)
{
	int i,j,sum;
	for(i=1;;i+=2)
	{
		sum=0;
		for(j=1;sum<=n;j+=2)
		{
			sum+=j+j+1;
			if((sum-n)/2==i) return i;
		}
	}
}



int main()
{
	printf("%d %d",func1(44),func1(44)+1);	
 } 
