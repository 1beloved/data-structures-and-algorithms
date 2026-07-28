#include <stdio.h>
//给你一个有序数组 nums ，请你 原地 删除重复出现的元素
//使得出现次数超过两次的元素只出现两次 ，返回删除后数组的新长度。
//不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
int main()
{
	int nums[]={0,0,1,1,1,1,2,2,2,3,3},numsize=sizeof(nums)/4;
	int i;
	int slow=2,fast=2;
	while(fast<numsize)
	{
		if(nums[slow-2]!=nums[fast])//slow表示的是前面已经处理好的元素 
		{							//所以slow-2如果跟 
			nums[slow]=nums[fast];
			slow++;	
		}	
		fast++;
	} 
	for(i=0;i<slow;i++)
	printf("%d ",nums[i]);
 } 
 //输入：nums = [0,0,1,1,1,1,2,3,3]
//输出：7, nums = [0,0,1,1,2,3,3]
//解释：函数应返回新长度 length = 7,
//并且原数组的前五个元素被修改为 0, 0, 1, 1, 2, 3, 3
//不需要考虑数组中超出新长度后面的元素 
