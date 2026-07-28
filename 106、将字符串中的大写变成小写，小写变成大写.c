#include <stdio.h>
#include <ctype.h>
#define N 100
void func(char *a)
{
	char *p=a;
	while(*p)
	{
		if(*p>='A'&&*p<='Z'){
			*p=*p+32;
			p++;
			continue;
		}
		else if(*p>='a'&&*p<='z')
		{
			*p=*p-32;// 
			p++;
			continue;
		}
		else
		p++;		
	}
}
void func2(char *a)
{
	char *p=a;
	while(*p) 
	{
		if(*p>='A'&&*p<='Z')
			{
				tolower(*p++);
				continue;
			}
		else if(*p>='a'&&*p<='z')
			{
				toupper(*p++);
				continue;
			}
	}
	
	
}

int main()
{
	char a[N],*p=a;
	gets(a);
	func2(a);
	puts(a);
//	printf("%c ",tolower('A'));
}
