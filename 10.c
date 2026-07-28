#include <stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=2-i;j>0;j--)
		{
			printf(" ");
		}
		for(j=i*2;j>=0;j--)
		putchar('*');
		printf("\n");
	}
	for(i=2;i>0;i--)
	{
		for(j=i;j<=2;j++)
		printf(" ");
		for(j=i*2-1;j>0;j--)
		{
			printf("%c",'*');
		}
		putchar(10);
	}
}
