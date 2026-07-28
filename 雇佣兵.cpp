#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double sum=1;
	int n;
	scanf("%d",&n);
	double di=1;
	for(;sum<=n;)
	{
		di++;sum+=1/di;
	}
	
	printf("%.0f",di);	
}                
