#include <stdio.h>
#include <string.h>
#define N 5 
int max(char *s[N])
{
	char *p;
	int max,i;
	max=strlen(s); 
	for(i=1;i<N;i++)
	{
		if(strlen(s+i)>max)
		p=s+i;
	}
	max=strlen(p);
	printf("max=%d:\n",max);
	printf("Õâ¸ö×Ö·û´®ÊÇ%s",p);
}

int main()
{
	char *s[N]={0};
	int i;
	for(i=0;i<N;i++)
	gets(s+i); 
	max(s);
 } 
