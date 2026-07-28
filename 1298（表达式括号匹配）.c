//假设一个表达式有英文字母（小写）和数字、运算符（+，—，*，/）和左右小（圆）括号构成，
//以“@”作为表达式的结束符。
//请编写一个程序检查表达式中的左右圆括号是否匹配，若匹配，则返回“YES”；否则返回“NO”。
//表达式长度小于255，左圆括号少于20个。
#include <stdio.h>
#include <string.h>
int main()
{
    int len=0;
    int n,i;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    if(n%2==1)
    {
    	printf("NO");
	}else{
		char *fast=a,*last=a;
		while(*last)
		{
			puts(a);
			if(*last=='(')
			{
				fast=last;
				last++;
				continue;
			}else{
				if(*fast=='(')
				{
					strcpy(fast,last+1);
					last=last;
					fast--;
				}else{
					printf("NO");
					return;
				}
			}
		}
		if(strlen(a)==0) printf("YES");
		else printf("NO");
		
		
		
	}
}
