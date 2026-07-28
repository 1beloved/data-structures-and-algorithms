#include <stdio.h>
int main()
{
	int i,j,sum;
	for(i=0;i<=1000;i++)
	{
		sum=0;
		j=i;
		while(j){
			sum=sum*10+j%10;
			j/=10;
		}
		if(sum==i)
		printf("sum=%d\n",sum);
	}
}
