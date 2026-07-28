#include <stdio.h>
#define N 10
int a[N];
int res[N];
int w;
void fun(int *a,int k,int sum,int n,int count,int index,int j)// k是目标和,sum当前和 ,count代表当前数组有多个少元素了 
{
	int i; 
	if(sum>=k)
	{
		printf("\n");
		if(sum==k) for(i=0;i<count;i++){
			 printf("%d ",res[i]);
		}
		
		else return;
	}
	for(i=j;i<n;i++)//i不从0开始是为了去除重复 i应该从上次的下标开始 
	{
		w++;	
		if(sum+a[i]<=k)
		{	
			res[index]=a[i];
			count++;
			fun(a,k,sum+a[i],n,count,index+1,i);
			count--;	
			res[index]=0;
		}else return;//因为数组有序，所以当前不符合，那么接下来的都不符合 
	}
}
int main()
{
	int i,n;
	srand(time(NULL));
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=i+1;
		printf("数组的元素为:");
		for(i=0;i<n;i++)
		printf("%d " ,a[i]);putchar(10);
	int k;
	scanf("%d",&k);
	fun(a,k,0,n,0,0,0);
	printf("一共进去了%d次",w);
 } 
