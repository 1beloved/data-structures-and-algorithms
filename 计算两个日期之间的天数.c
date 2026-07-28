#include <stdio.h>

int fun(int y,int m,int d,int t)//计算到目前有多少天 ,t为1计算剩余多少天，为0计算到目前过了多少天 
{
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	int i;//起始月份 
	int flag=0;
	for(i=1;i<m;i++)
	{
		sum+=month[i];
	}
	if(y%4==0&&y%100!=0||y%400==0) flag=1;//闰年的话 
	if(i>2&&flag)//如果是闰年并且月份大于二月的话 
	{
		sum+=1;//要加一天 
	}
	if(t)
	{
		if(flag)//闰年 
		{
			return 366-sum-d;
		}
		else 
		return 365-sum-d;
	}else{
		return sum+d;
	}
}
 
int main()
{
	//先计算出这一年有多少天，然后再减去现在的天数就是到下一年的天数 
	int y1,y2,m1,m2,d1,d2;

	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	int sumday=0;
	if(y1<y2)//如果年份小于的话 
	{
		sumday=fun(y1,m1,d1,1);
		y1+=1;
			while(y1<y2||y1+1<y2)//计算年 
			{
				if(y1%4==0&&y1%100!=0||y1%400==0)//如果年份是闰年的话 
				{
					sumday+=366;
				}
				else{
					sumday+=365; 
				}
				y1++;
			}
			sumday+=fun(y2,m2,d2,0);
			printf("%d",sumday);
	}
	else{//不然的话就直接两个相减 
		sumday=fun(y2,m2,d2,0)-fun(y1,m1,d1,0);
		printf("%d",sumday);
	}

	
	
}
