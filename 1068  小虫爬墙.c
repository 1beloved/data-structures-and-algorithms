#include <stdio.h>
int main()
{
    int x,y,t=0,sum=0;
    scanf("%d%d",&x,&y);
    while(t<=x)
    {
        t+=y-1;
        sum+=2;
    }
    printf("%d",sum/2);
    
    
}
