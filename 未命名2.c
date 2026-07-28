#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <math.h>
int ifprime1(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int ifprime2(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int fun1(int n)
{
	int begintime,endtime,i;
	begintime=clock();
	for(i=2;i<=n;i++)
	{
		if(ifprime1(i))
		{
			printf("%d ",i);
		}		
	}
	endtime=clock();
	return endtime-begintime;
}

int fun2(int n)
{
	int begintime,endtime,i;
	begintime=clock();
	for(i=2;i<=n;i++)
	{
		if(ifprime2(i))
		{
			printf("%d ",i);
		}		
	}
	endtime=clock();
	return endtime-begintime;
}
int main()
{
	int n;
	printf("请输入n:");
	scanf("%d",&n);
	printf("第一个所用时间是%dms\n",fun1(n));
	printf("第二个所用时间是%dms",fun2(n));

}
