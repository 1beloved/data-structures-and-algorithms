//删除字符串尾部的所有空格
#include <stdio.h>
int main()
{
    char a[1000],*p=a;
    gets(a);
    while(*p)p++;
    p--;
    while(*p==' ')p--;
    *(p+1)='\0';
    puts(a);
     
     
}
