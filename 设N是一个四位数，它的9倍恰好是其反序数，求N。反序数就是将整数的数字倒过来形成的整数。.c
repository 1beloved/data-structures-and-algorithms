#include <stdio.h>
int main()
{
	int n,i,sum;
	for(i=1001;i<10000;i++)
		{
			sum=0;
			n=i*9;
			while(n)
			{
				sum=sum*10+n%10;
			}
			if(i==sum){
				 printf("%d i*9=%d  %d",i,i*9,sum);
				 break;
			}
		}
}
