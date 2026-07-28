#include <stdio.h>
#include <string.h>
int main()
{
	char s[501];
	gets(s);
	int i=0,j=strlen(s)-1;
	 while(i<j)//先整个翻转 
	 {
	 	char ch=s[i];
	 	s[i]=s[j];
	 	s[j]=ch;
	 	i++;j--;
	 }
	char *p=s;
	while(*p)//再翻转每一个 
	{
		char *begin=p;
		while(*p!=' '&&*p)p++;//先找到第一个空格
		char *end=p-1;
		while(begin<end)
		{
			char ch=*begin;
			*begin=*end;
			*end=ch;
			begin++;end--;
		}
		while(*p==' '&&*p)p++;
	}	
	puts(s); 
	
	
}
