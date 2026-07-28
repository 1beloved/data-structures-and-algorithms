#include <stdio.h>
#include <math.h>
int main()
{
	int i=2;
	while(1)
	{
		int j,k,sum=0;
		j=k=i*9;;
		while(k)
		{
			sum=sum*10+k%10;
			k/=10;	
		}
		if(sum==j) 	 printf("这个数字是%d\n",i);
		i++;
	 }



}
