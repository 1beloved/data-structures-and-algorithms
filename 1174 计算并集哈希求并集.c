//每组输入数据分为三行，第一行有两个数字n，m(0<n，m<=10000)，
//分别表示集合A和集合B的元素个数。后两行分别表示集合A和集合B。
//每个元素为不超出int范围的整数，每个元素之间有一个空格隔开。
#include <stdio.h>
int main()
{
	int i,n,m;
	while((scanf("%d%d",&n,&m))!=EOF)
	{	
		int a[1000000]={0},b[1000000]={0},max=0,t;
		for(i=0;i<n;i++,a[t]++)
		{
			scanf("%d",&t);
			if(t>max) max=t;
		}
		for(i=0;i<m;i++,b[t]++)
		{
		    scanf("%d",&t);
		    if(t>max) max=t;
		}
		for(i=0;i<=max;i++)
			if(a[i]||b[i]) printf("%d ",i);
			putchar(10);
	}
} 
