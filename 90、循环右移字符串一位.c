#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,t;
	gets(a);
	while(*p)p++;
	p--;
	t=*p;
	while(p>a)
	{
		*p=*(p-1);
		p--;
	}
	*p=t;
	puts(a);
	
	
	
}
