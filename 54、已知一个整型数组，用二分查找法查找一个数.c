#include <stdio.h>
#define N 10
int main()
{
	int a[N]={1,2,3,4,5,6,7,8,9,10},mid,left,right,n;
	scanf("%d",&n);
	left=0,right=N-1,mid=(left+right)/2;
	int i;
//	srand(time(NULL));
//	for(i=0;i<N;i++)
//	a[i]=rand()%100;
//		for(printf("\n"),i=0;i<N;i++)
//			printf("%d ",a[i]);
			printf("\n输入你要查找的数字的下标:\n");
	while(left<=right)
	{
		if(a[mid]==n) break;
		else if(a[mid]>n)  right=mid-1;
		else left=mid+1;
		mid=(left+right)/2;
	}
	printf("%d->%d ",n,mid);
	
	
	
	
	
}
