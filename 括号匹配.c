#include <stdio.h>
#include <string.h>
int main()
{
    char a[100][260],b[100][10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(i=0;i<n;i++)
    {
        char *p=a[i],*q;
        q=a[i]+(strlen(a[i])-1);
        while(q>p&&*q&&*p&&*q>*p){p++;q--;}//并且右括号的值总是大于左括号 
        if(p>q) strcpy(b[i],"YES");
        else strcpy(b[i],"NO");
    }
    for(i=0;i<n;i++)
    puts(b[i]);
}
