#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void copystr(char *s1,char*s2)
{
	while(*s2!='\0')
		*s1++=*s2++;
	*s1=0;
}
bool isValid(char * s){
        char *p=s;
        while(*p)
        {
        if(*p==40&&*(p+1)==41||*p==91&&*(p+1)==93||*p==123&&*(p+1)==125){
        	char *w=p;
     		copystr(w,w+2);
     		p=s;
    	    continue;
		}
    	p++;
	}
    if(strlen(s)==0)
    return true;
    return false;
}
int main()
{
	char a[100];
	gets(a);
	putchar(10);
	printf("%d",isValid(a));
 } 
