#include <stdio.h>
int main()
{
	int sum=2,i,j;
	for(i=3;i<=100;i++)
	{
		for(j=2;j*j<=i;j++)
			if(i%j==0) break;
		if(j*j>i) sum+=i;
	}
	printf("sum=%d",sum);
	
	
	
	
	
}
