#include <stdio.h>
int main()
{
    int a[10],i,*indexmax,*indexmin,t;
    for(i=0;i<10;i++)
        scanf("%d",a+i);
    indexmax=indexmin=a;
    for(i=0;i<10;i++)
    {
        if(*indexmax<a[i]) indexmax=a+i;
        if(*indexmin>a[i]) indexmin=a+i;
    }
    printf("max=%d min=%d\n",*indexmax,*indexmin);
    t=a[indexmax-a];*indexmax=a[9];a[9]=t;
    t=a[indexmin-a];*indexmin=a[0];a[0]=t;
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
        
}
