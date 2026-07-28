#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(;n;n/=10)
	{
		sum+=n%10;
		sum%=10;
		if(sum==0) sum+=1;
	}
	printf("%d",sum); 
	
}
