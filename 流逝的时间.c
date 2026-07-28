#include <stdio.h>
int main()
{
	int n,t,b,x,flag=0;
	while(1)
	{
		printf("请输入开始时间:");
		scanf("%d",&n);
		printf("\n请输入流逝的分钟数:");
		scanf("%d",&t);
		b=t/60;//先加流逝时间的小时 
		t%=60;
		n+=b*100;// 
		n+=t;//再加分钟
		if(n%100>=60)
		{
			x=n%100-60;
			n=n/100+1;
			n=n*100+x;
		}
		printf("流逝后的时间为:%d点%d分\n\n",n/100,n%100);
	}
 	
 } 
