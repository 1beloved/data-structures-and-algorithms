#include <stdio.h>
#define N(a,b,c) a>b?a>c?a:c:b>c?b:c  
int main()
{
	int a,b,c;
	float d=0;
	scanf("%d%d%d",&a,&b,&c);
	d=N(a,b,c);
	printf("%.2f",d);	
}
