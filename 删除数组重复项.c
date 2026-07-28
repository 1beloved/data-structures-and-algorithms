#include <stdio.h>
int main()
{
	int nums[]={0,0,1,1,1,1,2,2,2,3,3},numsize=sizeof(nums)/4;
	int i;
	int slow=2,fast=2;
	while(fast<numsize)
	{
		if(nums[slow-2]!=nums[fast])
		{
			nums[slow]=nums[fast];
			slow++;	
		}	
		fast++;
	} 
	for(i=0;i<slow;i++)
	printf("%d ",nums[i]);
 } 
