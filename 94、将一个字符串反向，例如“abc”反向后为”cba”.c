#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,*q=a,t;
	gets(a);
	while(*q) q++;
	q--;
	while(q>=p)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
	puts(a);
	
	
}
