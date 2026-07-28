#include <stdio.h>
#define N 100
#include <string.h> 
int main()
{
	char a[N],b[N],*p=a,*q,*t;
	printf(" ‰»Îƒ∏¥Æ:\n");
	gets(a);
	printf(" ‰»Î◊”¥Æ:\n");
	gets(b);//      p                   q
	while(*p)//this is a is book        is11
	{//     
		t=p;        
		q=b;
		while(*t&&*q &&*t == *q) {
			t++;
			q++;
		}
		if(*q=='\0'){
			strcpy(p,t);
			p=a;	
		}
		else p++;
	}
	puts(a);
}
