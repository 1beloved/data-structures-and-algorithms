#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char a[N],*p=a,*q=a;
	gets(a);
	printf("%d\n",strlen(a));
	while(*p) p++;
	p--;
	if(*p==' '){
		while(*p==' ')
		p--;
		*(p+1)='\0';
		//*p='\0';
	}
	printf("%d\n",strlen(a));
	puts(a);
}
