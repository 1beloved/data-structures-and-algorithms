#include <stdio.h>
int main()
{
   int i,year,month,day,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
   scanf("%d %d %d",&year,&month,&day);
   for(i=1;i<month;i++)
    sum+=a[i];
    sum+=day+((year%400==0)||(year%4==0&&year%100!=0)&&month>=2);
    printf("%d",sum);
     
}
