#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a,n,*q,t;
	printf("ÇëÊäÈë×Ö·û´®:\n");
	gets(a);
	printf("ÇëÊäÈëÒªÉ¾³ıµÄ×Ö·û:\n");
	scanf("%d",&n);
	while(*p)
	{
		while(*p!=n)
		{
			p++;
		}       
		q=p;
	//1233413123
	  while(*q)
	  {
	  	*q=*(q+1);
	  }
	}
	puts(a);
	
	
	
	
} 
