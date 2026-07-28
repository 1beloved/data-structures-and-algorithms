//特殊的字符串比较规则
//strcmp是按ascii大小比较的。
//本题要求按以下规则比较：
//1 按字符串长度比，长度长的大
//2 长度一样的，按ascii的规则比，但是从右往左比
#include <stdio.h>
#include <string.h>
#define gets(S) fgets(S,sizeof(S),stdin)
int main()
{
    char a[100],b[100],*p=a,*q=b;
    gets(a);
    gets(b);
    if(strlen(a)>strlen(b)) puts(a);
    else if(strlen(a)>strlen(b)) puts(b);
    else
    {
        while(*p==*q)
        {
            p++;q++;
        }
        if(*p>*q) puts(b);
        else puts(a);
    } 
}
