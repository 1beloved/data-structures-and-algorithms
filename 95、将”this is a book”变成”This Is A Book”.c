#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a;
	gets(a);
	while(*p)
	{
		while(*p==' '&&*p!='\0')p++;
		*p=*p-32;
		while(*p!=' '&&*p!='\0')p++;
	}
	puts(a);
	
}
