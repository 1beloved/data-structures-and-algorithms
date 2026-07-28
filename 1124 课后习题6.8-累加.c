#include <stdio.h>
int main()
{
    int t,z=2,j=1,n,i;
    double sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=z*1.0/j;
        t=z;
        z+=j;
        j=t;
    }
    printf("%.2f",sum);
    
    
    
    
    
}
