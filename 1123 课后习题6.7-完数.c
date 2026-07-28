//一个数如果恰好等于它的因子之和，这个数就称为"完数"。
// 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。
//  编程序找出N之内的所有完数，并按下面格式输出其因子：
#include <stdio.h>
int isfun(int i)
{
	int j,sum=0;
	for(j=1;j<i;j++)
	if(i%j==0)
	sum+=j;
	return sum==i;
}

int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=6;i<n;i++)
	{
		if(isfun(i))
		{
			printf("%d its factors are ",i);
			for(j=1;j<i;j++)
				{
					if(i%j==0)
					printf("%d ",j);	
				}
				printf("\n");	
		}	
		
	}
	
}
