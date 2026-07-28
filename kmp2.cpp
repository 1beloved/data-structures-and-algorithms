#include <stdio.h>
#include <string.h>
char a[2000005],b[2000005];
int len1,len2;
int next[2000005];

void Get_Next()
{
	int i=1,k=0;
	next[0]=0;//第0位是0 
	while(i<len2)
	{
		if(b[i]==b[k])//如果前后缀相同的话到k+1后面,因为到k到i-k是相同的 
		{
			next[i++]=++k;
		}else{
			if(k>0)//避免越界 
			{
				k=next[k-1]; 
			}else{//如果k是0的话直接赋值 
				next[i++]=k;
			}
		}
	}

	
}



int main()
{
	scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	Get_Next();
	int i=0,j=0;
	while(i<len1)
	{
		while(j&&b[j]!=a[i])
		{
			j=next[j];
		}
		if(b[j]==a[i])
		{
			j++;
		}
		if(j==len2)
		{
			printf("%d\n",i-j+1);
			j=next[j];
		}
	}
	
		for(i=0;i<len2;i++)
	{
		printf("%d ",next[i]);
	}
}

