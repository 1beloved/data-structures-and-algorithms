#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,t,*q=a;
	gets(a);
	while(*q)q++;
	q--;
	while(p<q)
	{
		t=*p;
		*p=*(p+1);
		*(p+1)=t;
		p++;	
	}
	puts(a);
	
}
