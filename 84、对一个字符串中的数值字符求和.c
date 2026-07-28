#include <stdio.h>
int main()
{
	char a[100],*p;
	int sum=0;
	gets(a);
	p=a;
	while(*p!='\0')
	{
		if(*p>'0'&&*p<='9')
		{
			sum+=*p-'0';
		}
		p++;
	}
	printf("%d",sum);
}
