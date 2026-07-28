#include <stdio.h>
#define N 100
#define M 10
int main()
{
	char a[N],b[M],*p=a,*q=b,*str=a;
	gets(a);
	gets(b);
	while(*str)
	{
		p=str;
		q=b;
		while(*q!=*p&&*q!='\0') q++;
		if(*q==0) {
		str++;continue;}
		while(*q!='\0'&&*q==*p)
		{
			q++;
			p++;
		}
		if(*q=='\0')
		{
			printf("yes!!");
			break;
		}
		str++;
	}	
	if(*str=='\0') printf("NO!!");	
		
	
	
	
	
} 
