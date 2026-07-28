#include "string.h"
#include "stdio.h"
#include "stdlib.h"
char* solve(char* s, char* t ) //大数相加  
 {
    // write code here
 	if(t=='\0') return s;
	if(s=='\0') return t;
	char *sum,*z;
	int i,j,k,flag=0;
	i=strlen(s);j=strlen(t);
	k=(i>j)?i+2:j+2;//要多开辟一个空间  
	sum=(char *)malloc(sizeof(char)*k);k--;
	sum[k--]='\0';
	for(j--,i--;i>=0&&j>=0;k--,i--,j--)
	{
		sum[k]=s[i]+t[j]-'0'+flag;
		if(sum[k]>57)  sum[k]-=10,flag=1;
		else flag=0;
	}
	if(i>=0) z=s;       //用两个if的目的是为了减去两个字符串同长的情况  
	else if(j>=0) i=j,z=t;
	for(;k>=0&&i>=0;k--,i--)
	{
	sum[k]=z[i]+flag;  
	if(sum[k]>57)  sum[k]-=10,flag=1;
	else flag=0;	
	}
	if(flag)
	{
		if(k>=0) sum[k]='0'+flag;
	}
	else sum++;
	return sum;
}
int main()
{
	char a1[100000],a2[100000];
	gets(a1);gets(a2);
	printf("%s\n",solve(a1,a2));
}
