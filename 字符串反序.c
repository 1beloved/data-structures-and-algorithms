#include <stdio.h>
int f(char a[])
{
	if(*(a+1)=='\0') return ;  
//	puts(a);
	char *p=a,*q=a,t;
	while(*p)p++;p--;
	while(q<p)
	{
		t=*p;
		*p--=*q;
		*q++=t;
	}
//	puts(a);
 } 
 
 int main()
 {
 	char a[100];
 	gets(a);
 	f(a);
 	puts(a);
 }
