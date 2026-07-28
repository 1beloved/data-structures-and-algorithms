//输入一个整数n(2<=n<=10000)，
//要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，
//如果没有则输出-1。
int f(int n)
{
	int i;
	for(i=2;i<n;i++)
	if(n%i==0) return;
	return n;
}


#include <stdio.h>
int main()
{
	int i,n,j,flag=0;
	scanf("%d",&n);
	for(i=11;i<n;i++)
	{
			printf("%d",f(i));		
	}
	 
} 
