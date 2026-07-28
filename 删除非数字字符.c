#include <stdio.h>
void func(char a[])
{
	
	char *p,*q;
	p=q=a;
	while(*p)
	{
		if(*p>='0'&&*p<='9')
			*(q++)=*(p++);
		else p++;
	}
	*q='\0'; 
}


int main()
{
	char a[100];
	gets(a);
	func(a);
	puts(a);
}
