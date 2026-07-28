#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,*q=a;
	gets(a);
	while(*p==' ') p++;
	while(*p)
	{
		*q++=*p++;
	}
	*q='\0';
	puts(a);
	
	
	
}
