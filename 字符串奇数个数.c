#include <stdio.h>
#include <string.h>
char res[100];
int fun1(char *p)
{
		
	int x=0;
	while(*p)
	{
		if(*p=='a'||*p=='c') x++;
		p++;
	}
	return x%2;
}

void fun(char *a,int index,int k,int *count)
{
	if(index==k+1)
	{
		if(fun1(res+1))
		{
			int i;
			(*count)++;
		}
		return;
	}
	int i;
	for(i=1;i<=4;i++)
	{
		if(res[index]==0)
		{
			res[index]=a[i];
			fun(a,index+1,k,count);
			res[index]=0;
		}
	}
	
	
	
}

int main()
{
	char a[6]=" abcd";
	memset(res,0,100);
	int count=0; 
	int n;
	scanf("%d",&n);
	fun(a,1,n,&count);
	printf("%d",count);
}
