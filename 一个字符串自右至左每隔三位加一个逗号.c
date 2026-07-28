#include <stdio.h>
#include <string.h>
void func(char *a,int m)
{
	char *p,*q,*ptr;
	p=q=a;
	int str,i=0;
	while(*p!='\0') p++;
	p--;
	ptr=p;
	while(p>a)
	{
		i++;
		if(i==3)
		{	
			while(ptr>=p)
			{
				*(ptr+1)=*(ptr);
				ptr--;
			}
				*(ptr+1)=',';
				ptr=a+strlen(a)+1;
				i=0;
		}
		p--;
	}


	
}
int main()
{
	char a[100]="abcdefghijk";
	gets(a);
	func(a,3);
	puts(a);
}
