#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000],b[127],c[127],*p=a;
	int n;
	scanf("%s%s",a,b);
	scanf("%d",&n);
	p=a+n-1;
	strcpy(c,p);
	strcpy(p,b);
	while(*p)p++;
	strcpy(p,c);
	puts(a);
}
