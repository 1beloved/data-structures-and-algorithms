//统计整数中二进制有多少个 
#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n); 
    while(n)
    {
        sum+=n&1;
        n>>=1;
    }
    printf("%d\n",sum);
     
     
}  
