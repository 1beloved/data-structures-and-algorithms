//会计专用数字格式
//注意：会了方便，编程时将￥改为$
//编写程序实现该功能

#include <stdio.h>
#include <string.h>
int main() {
    char a[1000], b[100];
    gets(a);
    char *p = a,*q=b;
    while (*p) p++;
    int n = 0,i;
    i=strlen(a);
    if ( i<= 2) {
        p = a;
        strcpy(b,p);
        *p='0';
        p++;
        *p='.';p++;
        switch(i)
        {
            case 1:*p++='0',strcpy(p,b);break;
            case 2:strcpy(p,b);break;
        }
        p=a;
            strcpy(b, p);
                *p = '$';
                p++;
                strcpy(p, b);
                 
    } else {
        while (n < 2) {
            p--;
            n++;
        }
        strcpy(b, p);
        *p = '.';
        p++;
        strcpy(p, b);
        p--;
        n = 0;
        while (p > a) {
            if (n < 3) {
                p--;
                n++;
            } else {
                strcpy(b, p);
                *p = ',';
                p++;
                strcpy(p, b);
                p--;
                n = 0;
            }
        }
        strcpy(b, p);
        *p = '$';
        p++;
        strcpy(p, b);
    }
    puts(a);
}
