#include <stdio.h>
double func(int x,int n)
{
	int i,j;
	double sum=1,xt,z;
	int flag=-1;
	for(i=3;i<10;i+=2)
	{
		xt=z=1;
		for(j=1;j<=i;j++)
		{
			xt=xt*x;
			z=z*i;
		}
		sum+=flag*xt/z;
		flag=-flag;
	}
	return sum;
}


int main()
{
	printf("%lf",func(2,10));	
}
