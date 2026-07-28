#include <stdio.h>
void fun(char *p,char *q)
{
	while(*p)p++;
	while(*q)
	{
		*p++=*q++;
	}
	*p='\0';
}


int main()
{
	char a[100],b[100];
	gets(a);gets(b);
	fun(a,b);
	puts(a);
 } 
