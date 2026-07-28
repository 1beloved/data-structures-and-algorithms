#include <stdio.h>
int main()
{
	float i=100,sum=100,j;
	for(j=0;j<9;j++)
	{
		 i/=2;
		 sum+=i*2;
	}
	printf("%f",sum);
}
