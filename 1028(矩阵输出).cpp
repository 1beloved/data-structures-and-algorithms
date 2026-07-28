#include <stdio.h>
int main()
{
	int a[3][2],i,j;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[j][i]);
		for(i=0;i<3;i++,printf("\n"))
		for(j=0;j<2;j++)
		printf("%d ",a[i][j]); 
} 
