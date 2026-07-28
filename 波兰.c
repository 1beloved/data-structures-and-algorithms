#include <stdio.h>
#include <string.h>
int isfun(char ch)
{
	return ch=='+'||ch=='-'||ch=='*'||ch=='/';
}

int fun(char ch,int sum,char *p)
{
	switch(ch)
	{
		case '+':while(*p)
		{
			sum+=*p--;
		};
		case '-':while(*p)
		{
			sum-=*p--;
		};
		case '*':while(*p)
		{
			sum*=*p--;
		};
		case '/':while(*p)
		{
			sum/=*p--;
		};
	}
}
int main()
{
	//A B C * - D +          A - B*C -D
	char a[10],*p=a,*q=p;
	gets(a);
	int suzi[100]={0},count=0,count1=0,i,sum=0;
	char fuhao[100]={0};
	while(*p)
	{
		if(isfun(*p))
		{
			fun(*p,sum,q);
			strcpy(a,p+1);
			p=a;
		}
	} 
	for(i=0;i<count;i++)
	printf("%d ",suzi[i]);
	for(i=0;i<count1;i++)
		putchar(fuhao[i]);
	putchar(fuhao[i]);
} 
