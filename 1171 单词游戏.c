#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i,t,n,count=0,w;
        scanf("%d%d",&n,&t);
        for(i=0;i<n;i++)
        {
            scanf("%d",&w);
            if(w<t) count++;
        }
        printf("%.2f",(count*1.0/n)*100);
        putchar('%');putchar(10);
    }
}
