#include <stdio.h>
int main()
{
	char a[100],*p=a;
	gets(a);
	while(*p)
	{
		if(*p>='a'&&*p<='z')
		{
			if(*p!='z')
				*p+=1;
			else
			*p='a';
		}
		p++;
	}
	puts(a);
	
	
	
}
