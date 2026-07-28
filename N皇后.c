#include <stdio.h>
int a[11];
int count;
int check(int x,int y)//x是行，y是列 
{
	int i;
	for(i=1;i<=x;i++)
	{
		if(a[i]==y) return 0;
		if(i+a[i]==x+y) return 0;//副对角线 
		if(i-a[i]==x-y) return 0;//主对角线 
	}
	return 1;
	
}
void print(int m)
{
	printf("第%d个可能\n",count);
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		if(a[i]+i==i+j) printf(" N ");
		else
		printf(" # ");
		putchar(10); 
	}
	printf("\n"); 
	
	
	
}
void Queen(int n,int m)
{
	if(n==m+1){
		print(m);
		count++;
		return;
	}
	int i;
	for(i=1;i<=m;i++)
	{
		if(check(n,i))
		{
			a[n]=i;
			Queen(n+1,m);
			a[n]=0;	
		}		
	}
}
int totalNQueens(int x,int n){
	Queen(1,n);
	return count;
}
int main()
{	
		int n;
		scanf("%d",&n);
		
	printf("%d",totalNQueens(1,n));
	return 0;
} 
