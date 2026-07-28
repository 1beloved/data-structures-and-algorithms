//在西南某地山边有个水池，假设干旱出现前储水n吨！
//西南干旱出现了！每天附近居民用了3吨水，如果自然出水为50千克！
//问这个水池过几天后会干枯！！
#include <stdio.h>
int main()
{
    int n,sum=0,count=0;
    scanf("%d",&n);
    sum=n*1000;
    while(sum>=3000)
    {
        sum-=3000;
        sum+=50;
        count++;
    }
    printf("%d",count+1);

}
