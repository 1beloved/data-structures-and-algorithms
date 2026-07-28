#include <stdio.h>
#define N 100
int main()
{
	char a[N],*p=a;
	gets(a);
	int i=0;
	while(*p)
	{
		i++;
		p++;
	}
	printf("%s的长度为%d",a,i);
	
	
}
