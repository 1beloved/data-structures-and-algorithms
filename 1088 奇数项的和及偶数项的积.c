//10
//4  6  9  23  45  5  90  123  3  88   输入 
//151 7468560    输出 
//第0项为第一项 不是c语言的表达   4+9+45+......+ 
#include <stdio.h>
int main()
{
    int a[100],n,i,j=0;
    long long sum=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++,i++)
    {
        sum=sum*a[i+1];
        j=j+a[i];
    }
    printf("%d %lld",j,sum);
    
    
}
