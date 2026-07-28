#include <stdio.h>
void prin_s(int *p,int count);
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
 	int nums3[2001]={0},count=0,i=0,j=0;
 	while(i!=nums1Size&&j!=nums2Size)
 	{
 		if(nums1[i]<nums2[j])
 			nums3[count++]=nums1[i++];	
 		else
 		nums3[count++]=nums2[j++];	
	}
	if(i==nums1Size)
	{
		while(j!=nums2Size)
		nums3[count++]=nums2[j++];
	}
	else
	{
		while(i!=nums1Size)
		nums3[count++]=nums1[i++];
	}
	if(count%2) printf("%f",(double)nums3[count/2]);
	else
	printf("%f",(double)(nums3[count/2]+nums3[count/2-1])/2);
}


int main()
{
	int a[]={1,3},b[]={2,4};
	findMedianSortedArrays(a,2,b,2);
		
} 
