#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,t,*q=a;
	gets(a);
	t=*p;
	while(t==' '&&*p!='\0')
	{
		p++;
		t=*p;	
	}
	while(*p!=' ')p++;
	q=p;
	while(*q==' ')
	{
		q++;
	}
	while(*q)
	{
		*p++=*q++;
	}
	*p='\0';
	puts(a);
	
}
