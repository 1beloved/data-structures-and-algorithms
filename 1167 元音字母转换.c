#include <stdio.h>
#include <ctype.h>
int main()
{
	char a[20][60],(*ptr)[60]=a;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",*(a+i));
	for(i=0;i<n;i++)
	{
		char *p=a[i];
		while(*p)
		{
			if(isupper(*p))
			{
				if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
				{
					p++;
					continue;
				}
				else
				*p+=32;
			}
			else{
				if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
				{
				*p=*p-32;
				}
			}
			p++;
		}
	}
	for(i=0;i<n;i++)
	puts(*(a+i));
} 
