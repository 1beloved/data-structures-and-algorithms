#include <stdio.h>
int func(int n)
{
	printf("%d=",n);
	int a=2;
	while(n)
	{
		if(n%a==0)
		{
			printf("%d*",a);
			n/=a;
		}
		else
		a++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	func(n);
 } 
