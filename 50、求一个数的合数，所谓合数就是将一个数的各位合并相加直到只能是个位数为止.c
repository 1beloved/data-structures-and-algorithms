#include <stdio.h>
int main()
{
	int i;
	for(i=100;i<1000;i++)
	{
		int t=i,sum=0;
		while(t)
		{
			sum+=t%10;
			t/=10;
		}
		if(sum<10) printf("%d ",i);
	}
	
	
	
	
}
