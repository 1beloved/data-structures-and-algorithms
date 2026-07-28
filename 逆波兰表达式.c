#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10000]={0},top=0,sum=0,i,t;
	char tokens[3][5] = {"0","3","/"},*p=*tokens;
	for(i=0;i<3;i++)
	{
		t=0;
		p=tokens[i];//指向下一行 
		t=atoi(p);//将这一行转化为数字 
		if(t!=0) a[top++]=t;//如果t有值说明是数字 
		else//不然开始匹配 
		{
			switch(tokens[i][0])
			{
				case '+' :sum=a[top-2]+a[top-1];break;
				case '-' :sum=a[top-2]-a[top-1];break;
				case '*' :sum=a[top-2]*a[top-1];break;
				case '/' :sum=a[top-2]/a[top-1];break;
			}
			a[top-1]=0;a[top-2]=0;
			a[top-2]=sum;top-=1;
		}
	}
	printf("sum = %d",sum);
	
}
