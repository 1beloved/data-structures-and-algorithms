#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char a[N*N],*p=a,*q,b[N][N],i=0,j=0;
	gets(a);
	while(*p)
	{	//123,,213,1
		while(*p!=','&&*p)
		{
			b[i][j++]=*p++;
		}
		b[i][j++]='\n';
		b[i][j]='\0';
		i++;
		j=0;
		p++;
	}
	int t;
	for(t=0;t<i;t++)
	{
		printf("%s",*(b+t));
	}
	
	
	
	
}
