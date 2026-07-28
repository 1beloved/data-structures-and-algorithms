#include <stdio.h>
int main()
{
	char str1[20],str2[20];
	int i=0;
	gets(str1);
	gets(str2);
	char *p,*q;
	p=str1,q=str2;
	while(*p!='\0')
	{
		q=str2;
		while(*p!=*q)
		{
			q++;
		}
		if((*q!='\0')&&(*p!='\0'))
		{
			while(*q==*(p+i)) i++,q++;
			if(*q=='\0') printf("yes");
		}
		p++;
	}
	if(*p=='\0') printf("no");
	
	
	
		
	
	
	
	
	
	
	





} 
