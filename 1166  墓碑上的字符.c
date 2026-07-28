//考古学家发现了一座千年古墓，墓碑上有神秘的字符。
//经过仔细研究，发现原来这是开启古墓入口的方法。
//墓碑上有2行字符串，其中第一个串的长度为偶数，
//现在要求把第2个串插入到第一个串的正中央，如此便能开启墓碑进入墓中。
#include <stdio.h>
#include <string.h>
int main()
{
    char a1[10][100];
	int n,count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int len;
        char a[50],b[50],*p;
        scanf("%s",a);
        len=strlen(a);
		scanf("%s",b);
        p=a+(len/2);
        strcat(b,p);
        strcpy(p,b);
        strcpy(a1[count++],a);
    }
    for(i=0;i<count;i++)
    printf("%s\n",a1[i]);
}
