#include <stdio.h>
#include <string.h>
#include <math.h>
char t[10001][10001];


void fun(char *a,int len,int index,char *b)//因为连续所以直接调用 
{
	if(len==0){
		 b[index++]='\0';
		 return;
		 
	}
	b[index]=a[index];
	fun(a,len-1,index+1,b);
}

int ifcf(char *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(t[i],a)==0) return 0;
	}
	return 1;
}
int main()
{
	char a[10001];
	gets(a);
	int len=strlen(a);
	int sum=len;//首先每个单独的字符都能作为一个字串首尾相同就直接加
	int i;
	int count=0;
	for(i=2;i<=len;i++)
	{
		char b[10001]={0};
		int j;
		for(j=0;j<=len-i;j++)
		{
			fun(a+j,i,0,b);//这个i是字串的长度 
			if(b[0]==b[strlen(b)-1]){
				if(ifcf(b,count)){
					sum+=1;
					strcpy(t[count++],b);	//t用来判断是否重复的
				}
			}
		}
	}
	printf("%d",sum);
	
}
