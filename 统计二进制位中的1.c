#include <stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n)
	{
		count+=(n&1)?1:0;	
		n>>=1;
	}
	printf("%d",count);
	
}
