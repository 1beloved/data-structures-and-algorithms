#include <stdio.h>
int func(int n)
{
	if(n==1) return 1;
	func(n/2);
	printf("%d",n%2);
	
}

int main()
{
	int n;
	scanf("%d",&n);
	func(n); 
}
