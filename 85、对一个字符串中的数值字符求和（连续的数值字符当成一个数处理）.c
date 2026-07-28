#include <stdio.h>
int main()
{
	char a[100],*p,*q;
	int sum=0,i=0;
	gets(a);
	p=a;
	while(*p)
	{
		i=0;
		if(*p>'0'&&*p<='9')
		{
			q=p+1;
			i=*p-'0';
			while(*q>'0'&&*q<='9'&&*q!='\0')	
			{
				i=i*10+*q-'0';
				q++;
			}
			sum+=i;
			p=q+1;			
		}
		else p++;
	} 
	printf("%d",sum);
}
