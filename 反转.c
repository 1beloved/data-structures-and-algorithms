#include <stdio.h>
#include <stdlib.h>
int reverse(int x){
    long  sum=0;
	int flag=1;
    if(x<0) flag=-flag;
    while(x)
    {
        sum=sum*10+x%10;
        x/=10;
    }
    return sum > INT_MAX || sum < INT_MIN ? 0 : sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	putchar(10);
	printf("%d",reverse(n));
}
