#include <stdio.h>
#define N 100
int main()
{
	char a[N],b[N],c[2*N],min=0;
	gets(a);//ace
	gets(b);//bd
	char *p=a,*q=b,*str=c;
	while(*p!='\0'||*q!='\0')
	{
		if(*p=='\0')
		{
			*str++=*q++;
			continue;
		}
		if(*q=='\0')
		{
			*str++=*p++;
			continue;
		}
		if(*p<*q)
		{
			*str++=*p++;
			continue;
		}else{
			*str++=*q++;
			continue; 
		}		
	}
	*str='\0';
	puts(c);
	
}
