#include <stdio.h>
int main()
{
	float n=100,j,sum=100;
	int i;
	for(i=0;i<10;i++)
	{
		n=n/2;
		sum+=n*2;	
	}
	printf("%f",sum); 
}
