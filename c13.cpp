#include "stdio.h"
int fun(int n)
{
	int s=0;
	while(n)
	  {
	   s=s*10+n%10;
	   n/=10;
      }
      return s==n;
}
main()
{
	int i;
	for(i=100;i<1000;i++)
	   if(fun(i))
	      printf("%d  ",i);
}

