#include <stdio.h>
int main()
{
	int i,sum=0,flag=1;
	for(i=1;i<=100;i++)
	{
		sum+=i*flag;
		flag=-flag;
	}
	printf("%d",sum);
}
