#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=0;j<n-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("%d",j);
		for(j--,j--;j>0;j--)
		printf("%d",j);
	}
}
