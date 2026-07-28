#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define N 10005
int main()
{
    int s_tot = 0, n, a[N], d[N], mn = INF, mi = 0;//tot:环岛总长，a[i]：第i居民点啤酒需求量，d[i]为i到i+1位置的举例,p[i]在第i位置建厂每天运啤酒的费用， c单位费用
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d %d", &a[i], &d[i]);
        s_tot += d[i];
    }
    for(int i = 0; i < n; ++i)//遍历居住点
    {
        int f = 0, s = 0, sd;//f:总费用 j：当前看的居住点 s:累积距离 sd:从j到i的最短距离
        for(int j = (i+1)%n; j != i; j = (j+1) % n)//从i的下一个居住点开始，环形遍历每个居住点 
        {
            s += d[(j-1+n)%n];
            sd = s_tot - s < s ? s_tot - s : s;
            f += sd * a[j];
        }
        if(f < mn)
        {
            mn = f;
            mi = i;
        }
    }
    printf("%d,%d", mi, mn);
    return 0;
}

