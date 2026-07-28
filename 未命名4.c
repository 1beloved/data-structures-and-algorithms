#include <stdio.h>
int main()
{
	int flag=0,n,m,a,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0&&n%(m-i)==0)
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(!flag) printf("-1");
}
