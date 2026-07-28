#include <stdio.h>
int main()
{
	char a[]="abc123dda5.876da98",*p=a;
	double i,point=1;
	int flag=0,sign=0;
	while(*p)
	{
		if(*p>=48&&*p<=59||*p=='.')
		{
			if(*p=='.')
			{
				sign=1;
				p++;
				continue;
			}
			if(sign)
			{
				point*=0.1;
				i=i+(*p-'0')*point;
			}else i=i*10+*p-'0';
			flag=1;
		}else flag=0;
		if(!flag&&i)
		{
			if(sign)
			{
				printf("%7.3f    ",i);
				sign=0;
			}else
			printf("%d",(int)i);
			i=0;
		}
		p++;
	}
	if(flag) printf("%d",(int)i);
}
