#include <stdio.h>
#define N 100
void print(int (*a)[N],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			putchar(10);
	}
}
int main()
{
	int a[N][N],n,i=0,j=0,k=1;
	scanf("%d",&n);
	a[i++][j]=k++;
	while(k<=n*n)
	{
	
		while(i>=0&&j<n)//向上 
		{
			a[i--][j++]=k++;
		}
		if(i<0&&j==n)//右对角线
		{
			i=1;
			j=n-1;	
		} 
		else if(i>=0&&j==n)//特殊判断右下角
		{
			i+=2;	
		} 
		else i+=1;
		if(j==n) j=n-1;
		
			while(j>=0&&i<n)//向下 
			{
				a[i++][j--]=k++;
			}
		if(j<0&&i==n)//左下角
		{
			i=n-1;j=1;	
		} 
		else if(i==n&&j<n)//特殊判断右下角
		{
				i=n-1;j+=2;
		} 
		else j+=1;
		if(i==n) i=n-1;
		
	} 
	
		print(a,n);
}
