#include <stdio.h>
#define N 100
int main()
{
	int i=0;
	char a[N],*p=a,n;
	printf("请输入母串:\n");
	gets(a);
	printf("请输入你要查找的字母:\n");
	scanf("%c",&n);
	while(*p)
	{
		if((*p++)==n)
		i++;
	}
	printf("%c在%s中出现%d次",n,a,i);
	
	
}
