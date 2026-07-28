#include<stdio.h>
#define N 9
void fun(int a[][N]){
	int i,j,m,k=0;
	if(N%2==0)m=N/2;
	else m=N/2+1;
	for(i=0;i<m;i++)
	{for(j=i;j<N-i;j++)
	{
		++k,a[i][j]=k;
	}
	for(j=i+1;j<N-i;j++)
	
		++k,a[j][N-i-1]=k;
	
	for(j=N-i-2;j>=i;j--)
	{
		++k,a[N-i-1][j]=k;
	}
	for(j=N-i-2;j>i;j--)
	{
		++k,a[j][i]=k;	
	} 
	}
	

}
int main()
{
	int a[N][N]={0};
	fun(a);
	int i,j;
		for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		printf("%4d",a[i][j]);
	}
}
