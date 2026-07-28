#include <stdio.h>
int isfunc(int year,int month,int day)
{
	if(month<=0||month>12){
		printf("ÊäÈë´íÎó!!!!\n");
		return 1;
	}
	if((year%4==0&&year%100!=0)||year%400==0){
		if((day<=0||day>366))
		{
			printf("ÊäÈë´íÎó!!!!\n");
			return 1;
		}
		else if(month==2)
		{
			if(day>29){
				printf("ÊäÈë´íÎó!!!!\n");
				return 1;
			}else
				return 0;
		}
		else return 0;
	}else{
		if(day<=0||day>365)
		{
			printf("ÊäÈë´íÎó!!!!\n");
			return 1;
		}
		else if(month==2)
		{
			if(day>28){
				printf("ÊäÈë´íÎó!!!!\n");
				return 1;
			}else return 0;
		}
		else return 0;
	}
}

int gaga1(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0) return 366;
	return 365;
	
}
int gaga2(int year,int month,int year2,int month2)
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum=0;
	for(i=month;i<month2;i++) sum+=a[i];
	if(((year2%4==0&&year2%100!=0)||year2%400==0)&&month>=2) return sum+1;
	return sum;
}



int main()
{
	int year,month,day,year2,month2,day2,sum=0;
	while(1)
	{
		printf("ÇëÊäÈëÆğÊ¼ÈÕÆÚ:\n");
		scanf("%d-%d-%d",&year,&month,&day);
		if(isfunc(year,month,day))
			return;
		printf("ÇëÊäÈëÖÕÖ¹ÈÕÆÚ:\n");	
		scanf("%d-%d-%d",&year2,&month2,&day2);
		if(isfunc(year2,month2,day2))
			return;	
		if(year>year2)
			return;	
		if(year==year2)
		{
			if(month>month2) return;
			if(month==month2)
				if(day>day2)
					return;
		}
		break; 
	}
	if(year!=year2)
	{
			while(year<year2)
			{
				sum+=gaga1(year);
				year++;
			}
			sum+=gaga2(year,month,year2,month2)+day2;
	
	}
	else{
		sum+=gaga2(year,month,year2,month2)+day2; 
	}
	printf("Ïà¸ô%dÌì",sum-1);
}
