#include <stdio.h>
int main()
{
   int i,year,month,day,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
   scanf("before:%d %d %d",&year,&month,&day);
   for(i=1;i<month;i++)
    sum+=a[i];
    sum+=day+((year%400==0)||(year%4==0&&year%100!=0)&&month>=2);
    int before=sum,after=0;
    
    int year1,month1,day1,sum1=0;
	scanf("after:%d %d %d",&year1,&month1,&day1);
     for(i=1;i<month1;i++)
    sum1+=a[i];
    sum1+=day1+((year1%400==0)||(year1%4==0&&year1%100!=0)&&month1>=2);
    after=sum1;
    printf("»¹ÓĞ%dÌì",after-before);
}
