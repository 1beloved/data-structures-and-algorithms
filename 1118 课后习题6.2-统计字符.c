//输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
#include <stdio.h>
int main()
{
	char a[100],*p=a;
	gets(a);
	int sz=0,zm=0,sp=0,oth=0;
	while(*p)
	{
		if(*p>='0'&&*p<='9')
		sz++;
		else if(*p>='A'&&*p<='Z'||*p>='a'&&*p<='z')
			zm++;
		else if(*p==' ')
		sp++;
		else
		oth++;
		p++;
	}
	printf("%d %d %d %d",zm,sz,sp,oth);
}
