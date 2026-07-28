#include <stdio.h>
int main()
{
    
    int n,m,ji=0,tu=0;
    scanf("%d%d",&n,&m);
    while(ji<n)
    {
        tu=n-ji;
        if(ji*2+tu*4==m){
        printf("ji:%d tu:%d",ji,tu);
        break;
        }
        ji++;
    }
    
}
