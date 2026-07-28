#include <stdio.h>
int  main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==(n-1)||i==n-1)
			printf("%c",'*');
			else
			putchar(' ');		
		}
		printf("\n");
	} 
}
