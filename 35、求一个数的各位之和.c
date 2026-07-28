#include <stdio.h>
int main()
{
	
	int sum,n;
	scanf("%d",&n);
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	printf("%d",sum);
	
	
	
}
