#include <stdio.h>
#include <malloc.h>
#define N 100
void fun(int* nums, int numsSize, int k){
 	while(k>=numsSize) k-=numsSize;
	if(k==0) return;
	
	int t,i;
	int *res=malloc(sizeof(int)*numsSize);
	for(i=0;i<numsSize;i++)
	{
		res[(i+k)%numsSize]=nums[i];
	}
	
	for(i=0;i<numsSize;i++)
		nums[i]=res[i];	
		
}
int main()
{
	int a[N],i,n,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		a[i]=i+1;
	fun(a,n,k);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
 } 
