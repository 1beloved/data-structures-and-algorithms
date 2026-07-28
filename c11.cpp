#include "stdio.h"
int fun(int n)
{
	int i,s;
	s=1;
	for(i=2;i<=n/2;i++)
	   if(n%i==0)
	      s+=i;
	  return s==n;
 } 
int main()
{
	int i;
	for(i=1;i<1000;i++)
	   if(fun(i))
	     printf("%d\n",i);
}
