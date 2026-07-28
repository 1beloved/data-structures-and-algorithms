#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],*p=a,*q=a,*ptr=a;
	int i=1;
	gets(a);
	while(*p)p++;
	while(*q)q++;
	while(*ptr)ptr++;
	p--;
	while(p>=a)
	{
		if(i==3)
		{
			q=ptr;
			while(q>=p)
			{
				*(q+1)=*q;
				q--;
			}
			*q=',';
			p--;
			i=0; 
		}
		p--;
		i++;
	}
	puts(a);
	
}
