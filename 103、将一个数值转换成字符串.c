#include <stdio.h>
#define N 100
void exchange(char *a,int n)//123
{
	char *p=a,*q=a;
	while(n){
		*p=(n%10)+'0';
		p++;
		n/=10;
	}
	*p='\0';
	while(p>q)
	{
		
	}
}
int main()
{
	char a[N],*p=a;
	int n;
	printf("输入要转换的数字:\n");
	scanf("%d",&n);
	exchange(a,n);
	/*while(n)
	{
		*p=(n%10)+'0';
		p++;
		n/=10;
	}
	*p='\0';
	p--;
	while(p>=a)
	{
		printf("%c",*p--);
	}*/
	puts(a);
	
	
	
	
	
}
