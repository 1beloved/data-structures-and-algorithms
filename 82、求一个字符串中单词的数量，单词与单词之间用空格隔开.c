#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,*q=p;
	gets(a); 	
	int n;
	while(*p)
	{
		while(*p!=' '&&*p!='\0'){n++;break;}
		while(*p!=' '&&*p!='\0')p++;
		while(*p==' '&&*p!='\0')p++;
	}
	printf("µ¥´ÊÓÐ%d¸ö",n);
	
}
