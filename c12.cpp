#include "stdio.h"
fun(int n,int m)
{
	int i,s;
	  s=1;
	for(i=2;i<n;i++)
	   if(n%i==0)
	     s+=i;
	return s==m;
}
main()
{
	int a,b,i;
	for(a=1;a<1000;a++)
	  for(b=a+1;b<1000;b++)
	     if(fun(a,b)&&fun(b,a)&&a!=b)
	        printf("%d %d\n",a,b);
}
