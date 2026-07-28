#include <stdio.h>
#include <math.h>
int func(int n,int m)
{
	double s=0;
	int i;
	for(i=0;i<m;i++)
	{
		s+=log10(n);				
	}
	return (int)s+1;
}

int main()
{
	printf("%d",func(5,3));
}
