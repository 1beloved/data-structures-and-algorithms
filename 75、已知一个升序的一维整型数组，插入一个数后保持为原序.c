#include <stdio.h>
#define N 5
int main()
{
	int a[N+1]={1,2,4,5,6},n;
	printf("请输入你要插入的数字:\n");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<N;i++)
	{
		if(a[i]>n) break;
	}
	j=i;
	for(i=N-1;i>=j;i--)
		a[i+1]=a[i];
	a[j]=n;
	for(i=0;i<N+1;i++)
	printf("%d ",a[i]);
}
