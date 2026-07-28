#include <stdio.h>
int main()
{
	int t,i,sum=0;
	for(i=100;i<1000;i++)
	{
		sum=0;
		t=i;
		while(t)
		{
			sum=sum*10+t%10;
			t/=10;
		}
		if(sum==i) printf("%d\n",i);
		
	}
	
	
}
