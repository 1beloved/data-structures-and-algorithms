#include <stdio.h>
int main()
{
	int i,j,sum=0;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
			if(i!=j)
			sum++;
	printf("%d",sum);
}
