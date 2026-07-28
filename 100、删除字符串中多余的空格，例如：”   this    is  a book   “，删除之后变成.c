#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,*t=a,*q=a;             //q    t               //  q
	gets(a);//                          this     a book          thisa  book
	while(*q)                             //p                                
	{
		while(*q!=' '&&*q)q++;//q找到开始覆盖的空格 
		p=t=q;
		while(*t==' '&&*t)t++;//t找覆盖的字符 
		while(*t)
		{
			*p++=*t++;
		}
		*p='\0';//q的位置不要动 
	}	
	puts(a);
}
