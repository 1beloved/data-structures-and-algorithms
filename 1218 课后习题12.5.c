#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int value;
	int n;
	scanf("%u%d",&value,&n);
	if(n<0) value<<=(int)abs(n);
	else
	value=value>>n;
	printf("%u",value);
} 
