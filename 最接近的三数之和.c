#include <stdio.h>
#include <math.h>
static int cmp(int *a,int *b)
{
    return *(int *)a-*(int *)b;
}
int threeSumClosest(int* nums, int numsSize, int target) {
	
    qsort(nums,numsSize,sizeof(int),cmp);
    int i;
    int j,res,flag=1;
    for(i=0;i<numsSize-2;i++)
    {
        j=numsSize-1;
        int k=i+1;
         if(flag)//第一次直接保留
            {
                flag=0;
                res=(nums[i]+nums[j]+nums[k]);
              
            }
        while(k<j)
        {
                int sum=nums[i]+nums[j]+nums[k];
               int t=abs(target-sum);
               if(t<abs(target-res)) res=t;
                if(sum<target)
                {
                    k+=1;
                }
                else if(sum>target){
                    j-=1;
                }else{
                    res=target;
                    break;
                }
        }
    }
    return res;
}
int main()
{
	int a[]={-1,2,1,-4};
	printf("最接近的数字是 %d ",threeSumClosest(a, sizeof(a)/sizeof(int), 1));
 } 
