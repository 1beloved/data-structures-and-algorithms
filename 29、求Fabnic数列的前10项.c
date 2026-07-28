#include <stdio.h>
#define N 10
/*int func(int n)
{
	if(n==0||n==1) return 1;
	return func(n-1)+func(n-2);
}*/
int func2(int n)
{
	if(n==1||n==2) return 1;
	printf("%d");
	
} 




int main()
{
	/*int a[N]={0},i;
	a[0]=a[1]=1;
	for(i=2;i<N;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	for(i=0;i<N;i++)
	printf("%d  ",a[i]);*///数组完成 
	
	
	/*int i;
	for(i=0;i<N;i++)
	printf("%d  ",func(i)); *///循环完成 
	
	func2(N);
	
	
	
	
}
