#include <stdio.h>
int main()
{
	char a[100],*p=a,*q=a,*t,c;
	gets(a);
	while(*p)//this is a book
	//         t  qp    
	{
		t=p; 
		while(*p!=' '&&*p)
		{
			p++;
		}
		q=p-1;
		while(t<q)
		{
			c=*t;
			*t=*q;
			*q=c;
			t++;q--;
		}		
		if(*p=='\0') break;
		while(*p==' ') p++;
	}
	puts(a);
	
	
	
	
}
