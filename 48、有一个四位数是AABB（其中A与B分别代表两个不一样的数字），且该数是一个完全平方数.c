#include <stdio.h>
int main()
{
	int i,sum,b,g;
	for(i=1000;i<100000;i++)
		{
			b=i/100,g=i%100/10;
			if(b!=g&&i/1000==b&&g==i%10&&b*b+g*g==i)
				printf("%d\n",i);
		}	
	
}
