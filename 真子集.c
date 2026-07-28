#include <stdio.h>
int main()
{
	int a[]={1,4,6,8},i=16,j,k,count=0;	
	while(count++<i)
	{
		j=count;
		k=0;
		printf("{");		
		while(j)
		{
			if(j&1)
			{
				printf("%d ",a[k]);
			}
			j>>=1;
			k++;
		}
		printf("}\n");
	}
	
} 
