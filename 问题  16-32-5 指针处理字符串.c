#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],*max=a,*p=a,ch;
    scanf("%s",a);
    while(*p)
    {
        if(*p>*max)max=p;
        p++;
    }
    ch=*max;
    strcpy(max,max+1);
    while(p>=a)
    {
        *(p+1)=*p;
        p--; 
    }
    *(p+1)=ch;
    puts(a);
}
