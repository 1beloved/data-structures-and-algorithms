#include <stdio.h>
#define N 5
int main()
{
	int a[N]={1,23,56,77,89},i,j,n;
	scanf("%d",&n);
	int right=N-1,left=0,mid;
	while(left<=right)
	{
		mid=(right+left)/2;
		if(a[mid]==n)
		{
			printf("找到了!");
			printf("\n下标为%d",mid);
			break;
		}
		else if(a[mid]<n)
		{
			left=mid+1;
		}
		else
		right=mid-1;
	}
	
	
	
} 
