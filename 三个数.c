#include <stdio.h>
int func(int a,int b,int c)
{
	int t=0;
	if(a>t) t=a;
	if(b>t) t=b;
	if(c>t) t=c;
	return t; 
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max;
	max=func(a,b,c);
	printf("max=%d",max);
}
