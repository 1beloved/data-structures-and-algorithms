#include <stdio.h>
int main()
{
	/*int a,b,c,t;
	scanf("%d%d",&a,&b);
	t=a*b;
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("最小公倍数是:%d",t/b);*/
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>b) c=a;
	else c=b;
	while(c)
	{
		if(c%a==0&&c%b==0)
		break;
		c++;
	}
	printf("最小公倍数是:%d",c);
}
