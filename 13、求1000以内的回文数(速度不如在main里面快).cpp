#include <stdio.h>
int func(int n)
{
	int sum=0,i;
	i=n;
	while(i)
	{
		sum=sum*10+i%10;
		i/=10;
	}
	return sum==n;
}

int main()
{
	int i;
	for(i=100;i<1000;i++)
		if(func(i)) printf("%d\n",i);

}

