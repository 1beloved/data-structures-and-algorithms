#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
int c[100];
int v[100];
int count;
int ind;
int flag=1;
void fun1(int k,int n,int target,char *a)//这是利用哈希搞全排列 
{

	if(k==n+1)
	{
		count++;
			if(count==target)
			{
				int i;
				for(i=1;i<=n;i++)
				{
						a[ind++]=c[i]+'0';
				}
				flag=0;
				a[ind]='\0';
			}
		return;
	}
	int i;
	for(i=1;i<=n&&flag;i++)//flag用来减少循环
	{
		if(v[i]==0)
		{
			c[k]=i;
			v[i]=1;
			fun1(k+1,n,target,a);
			v[i]=0;
		}
	}
	
	
}

char * getPermutation(int n, int k){
	char *a=malloc(sizeof(char)*(100));
	memset(a,0,n);
	fun1(1,n,k,a);
	flag=0;
	return a;
}

int main()
{
	char *b;
	 b=getPermutation(4,9);
	 puts(b);
}
