#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,sum,k;
	for(i=1;i<10;i++)
	{
		for(j=0;j<10&&i!=j;j++)
		{
			sum=i*1000+i*100+j*10+j;
			k=sqrt(sum);
			if((k*k)==sum) break;
		}
		if(j<10) break;
	}
	printf("sum=%d",sum);	
}
