#include <stdio.h>
int main()
{
	int a[10],*p=a,i,t;
	for(i=0;i<10;i++,p++)
	scanf("%d",&a[i]);
	p--;i=0;
	while(p>a+i)
	{
	    t=*p;
	    *p--=a[i];
	    a[i++]=t;
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	
} 
