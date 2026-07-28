//二进制转化为十进制
 

#include <stdio.h>
int main()
{
    char a[40],*p=a;
    int sum=0,base=1;
    scanf("%s",a);
    while(*p)p++;p--;
    while(p>=a)
    {
        sum=sum+(*p-'0')*base;
        base*=2;p--; 
    }
    printf("%d",sum);
    
    
    
}
