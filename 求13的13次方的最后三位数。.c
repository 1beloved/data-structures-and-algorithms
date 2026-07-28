#include <stdio.h>
#include <math.h>
void main()
{
	int x,y,i,last=1;
	printf("Input X and Y(X**Y):");
	scanf("%d**%d",&x,&y);
	for(i=0;i<y;i++)
		{
			last=x*(last%1000);	//取数的最后3位，即用它整除1000，得到余数
		}
	last=last%1000;				//别忘了这里还要处理一下
	printf("The last 3 digits of %d**%d is:%d\n",x,y,last%1000);
}

