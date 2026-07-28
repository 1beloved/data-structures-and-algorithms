#include <stdio.h>
#include <math.h>
int i=0;
void  EX(int n,int a[])
{
	i++;
	if(n<=1){
	printf("%d",n);
	return;
	}
	EX(n/2,a+1);
	printf("%d",n%2);
}
int main()
{
	int n,b[32]={0},*p=b,j,base=1,sum=0,count=1;
	scanf("%d",&n);
	EX(n,b);
//	while(n)
//	{
//		*p++=n%2;
//		n/=2;
//		j++;
//	}
//	p--;
//	while(count<=j)
//	{
//		if(count%2==1)
//		sum+=(*p)*(int)pow(2,j-count);
//		count++;
//		p--;
//	}
//	printf("%d",sum);

	
}
