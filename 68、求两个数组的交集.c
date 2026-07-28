#include <stdio.h>
#define N 5
int main()
{
	int a[N],b[N]={0},i,j,k=0,t,c[N]={0};	
	printf("请输入第一个数组的元素:\n");
	for(i=0;i<N;i++)
	scanf("%d",a+i);
	printf("下一个:\n");
	for(j=0;j<N;j++)
 	scanf("%d",b+j);
 	for(i=0;i<N;i++)
 	{
 		t=a[i];
 		for(j=0;j<N;j++)
 		{
 			if(a[i]==b[j]) break;
		}
 		if(j==N) continue;
 		for(j=0;j<k;j++)
 		if(c[j]==t) continue;
 		c[k++]=t;
	 }
	printf("\n交集元素有:\n");
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
 } 
