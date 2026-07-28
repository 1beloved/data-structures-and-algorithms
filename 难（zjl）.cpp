#include "stdio.h"
#define N 10
int count=0,flag=-1;
void fun(int a[][N],int m,int n)
{
		if(n>0) count+=N-n;
		else count+=N-m;
	int i,j;flag=-flag;
	if(n>0){
		for(i=m,j=n;j<N;j++,i++) 
		if(flag<0) a[i][j]=count+(j-(N-1));
		else a[i][j]=count+(n-j);
		fun(a,m,n-1);
	}
	else if(m<N){
		for(i=m,j=n;i<N;i++,j++) 
		if(flag<0) a[i][j]=count+(i-(N-1));
		else a[i][j]=count+(m-i);
		fun(a,m+1,n);
	}
	return;
}
void print(int a[][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int a[N][N]={0};
	int i,j;
	int b[N][N]={0};
	fun(a,0,N-1);
	print(a);
}
