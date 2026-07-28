//输入有多组数据。首先给出数据组数T(T≤10)，下面T组数据，每组开头为n(1≤n≤100000)，
//360的用户数，和t，学姐的开机时间，接下来n个数字，ti代表第i个用户的开机时间。
//其中t，ti为非负整数且小于109。

//1
//5 3                               输出：80.00% 
//1 1 2 2 3
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
