#include <stdio.h>
#define N 10
func()
{
		int a[N][N]={0};
	int i,j;
	for(j=1;j<=N;j++)//第0行的初始化和最后一行的初始化 
	{
		a[0][j-1]=(N+1-j)*(N+1-j);
		a[N-1][N-j]=(N+1-j)*(N+1-j);
	}
	for(i=1;i<N;i++) //左半边的赋值 
	{
		for(j=0;j<N-i;j++)
		{
			a[i][j]=a[i-1][j+1];
		}
	}
	for(i=N-2;i>=1;i--)//右半部分的赋值 
	{
		for(j=N-1;j>=N-i;j--)
		{
			a[i][j]=a[i+1][j-1];
		}
	}	
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		{
			printf("%2d ",a[i][j]);
		}
	}
}

void func1()
{
	int a[N][N]={0};
	int i,j;
	for(j=1;j<=N;j++)//第0行的初始化 
	{
		a[0][j-1]=(N+1-j)*(N+1-j);
	}
	
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-1;j++)
		{
			a[i][j]=a[i-1][j+1];
		}
		a[i][N-1]=a[i-1][0];
	}
/*	for(i=1;i<N;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			a[i][j]=a[i-1][j+1];
		}
		a[i][j-1]=a[i-1][0];
	}*/
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		{
			printf("%2d ",a[i][j]);
		}
	}
}
int main()
{
//	func();
	func1();
		
	
}
