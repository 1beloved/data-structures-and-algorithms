#include <stdio.h>
int isfunc(int n)
{
	int i,sum=1,j;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			sum+=i;
	return sum;
	
	
} 
 
 
 
int main()
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=i+1;j<1000;j++)
		{
			if(isfunc(i)==j&&isfunc(j)==i&&i<j)
				printf("%d %d\n",i,j);
		}
		
		
	 } 
}
