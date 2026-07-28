#include <stdio.h>
int main()
{
	int a[17],i,j,sum,b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char c[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	for(i=0;i<17;i++)
		scanf("%d",&a[i]);
	for(i=0;i<17;i++)
	sum+=a[i]*b[i];
	sum%=11;
	printf("%c",c[sum+1]);

} 
