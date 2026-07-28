#include <stdio.h>
#include <math.h>
int main()
{
	int i,sum,j,t;
	for(i=1000;;i++)
	{
		sum=0;
		j=i*9;
		t=j;
		while(t)
		{
			sum=sum*10+t%10;
			t/=10;
		}
		if(sum==j) break;
	}
	printf("%d的九倍是回文数%d",i,j);
	
	
}
