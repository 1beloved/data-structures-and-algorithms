#include <stdio.h>
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int fun(int y,int m,int d,int t)//计算到目前有多少天 ,t为1计算剩余多少天，为0计算到目前过了多少天 
{
	
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
	int y2,m2,d2,y1=1990,m1=1,d1=1;
	int sumday=0;
	scanf("%d %d",&y2,&m2);
	if(y1<y2)//如果年份小于的话 
	{
		sumday=fun(y1,m1,1,1);
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
			sumday+=fun(y2,m2,1,0);
//			printf("%d",sumday);
	}
	else{
		sumday=fun(y2,m2,1,0)-fun(y1,m1,1,0);
	}
	sumday=(sumday+1)%7;
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	int i;
//	printf("%d",sumday);
	for(i=0;i<sumday;i++)
	printf("    ");
	for(i=1;i<=month[m2];i++)
	{
		
		printf("%3d ",i);sumday++;
		if(sumday%7==0) {
			sumday=0;
			printf("\n");
		}
	}
	
	
}
