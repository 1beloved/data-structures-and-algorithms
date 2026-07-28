#include <stdio.h>
#include <string.h>
#include <malloc.h>
int findmax(int len1,int len2)
{
	return len1>len2?len1:len2;
}

void fun(char *num1,char *num2)
{
	int i,j,len1=strlen(num1),flag=0,len2=strlen(num2),maxlen,k;
	k=findmax(len1,len2)+2;
	char *sum=malloc(sizeof(char)*k),*z;k--;
	sum[k]='\0';k--;
	i=len1-1;j=len2-1;
	for(;i>=0&&j>=0;i--,j--,k--){
		sum[k]=num1[i]+num2[j]-'0'+flag;
		if(sum[k]>'9')
		{
			sum[k]-=10;
			flag=1;
		}
		else
			flag=0;
	}
	if(i>=0) z=num1;
	else if(j>=0) i=j,z=num2;
	for(;i>=0;i--,k--)
	{
		sum[k]=z[i]+flag;
		if(sum[k]>'9')
		{
			sum[k]-=10;flag=1;
		}
		else flag=0;
	}
	if(flag)
	{
		if(k>=0) sum[k]='0'+flag;
	}
	else sum++;
	char *p=sum;
	while(*p=='0') p++;
	strcpy(sum,p);
	puts(sum);
	
}

int main()
{
	char num1[201],num2[201];
	gets(num1);
	gets(num2);	
	fun(num1,num2);
}
