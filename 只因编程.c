#include <stdio.h>
int main()//1 222 33333 4444444
{
	int i,count=1,sum=0,t=1,math=1;
	for(i=1;i<=5;i++)
	{
		printf("%d",math);
		sum+=math;
		if(t%count==0){
			count+=2;
			math+=1;
			t=1;
		}
		else t++;
	}
	printf("\n%d",sum);
		
		
} 
