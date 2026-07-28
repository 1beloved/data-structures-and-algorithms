#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[10005];
    while(scanf("%d",&n)!=EOF) //¸öÊý
    {
        int m=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
            if(m<a[i])
                m=a[i];
        }
        if((sum-m)<m)
        {
            printf("%.1f\n",(sum-m)*1.0);
        }
        else
        {
            printf("%.1f\n",(sum-m-m)*1.0/2+m);
        }

    }

    return 0;
}


