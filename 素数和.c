#include <stdio.h>
#include <math.h>
int main()
{
	int i,flag,sum=0,j;
	for(i=2;i<100;i++)
	{
		flag=1;
		for(j=2;j<=sqrt(i)&&flag;j++)
		{
			if(i%j==0)
			flag=0;
		}
		if(flag)
		{
			printf("%-4d",i);
			sum+=i; 
		}
		
	}
	printf("\nsum=%d",sum);
} 
