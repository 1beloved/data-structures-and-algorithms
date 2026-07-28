#include <stdio.h>
int main()
{
	char a[100],*p;
	int sum=0,flag=0;
	p=a;gets(p);
	while(*p)
	{
		sum=sum*2+*p-'0';
		p++;
	}
	if(!flag)  printf("%d",sum);
	
	
}
