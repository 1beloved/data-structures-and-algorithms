#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++,putchar(10))
    {
        for(j=n-i;j>0;j--)
        printf(" ");
        for(j=0;j<(i*2-1);j++)
            printf("*");
    }
    
    
    
    
    
}
