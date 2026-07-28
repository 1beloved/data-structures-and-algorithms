#include <stdio.h>
int main()
{
	char a[100],*p=a,*q=a;
	int i=1;
	gets(a);
	while(*q) q++;
	while(*p)
	{
		if(i==3)
		{
			q=a;
			while(*q)q++;
			while(q>p){
			*(q+1)=*q;
			q--;	
			}
			*(q+1)=',';
			i=0;
			p++;
		}
		else p++,i++;
	}
	
	puts(a);
	
	
}
