#include <stdio.h>
long long minimumPossibleSum(int n, int target){
     long long sum=0;
    if(n==1&&target==1) return 1;
    int haxi[1000000]={0},i,count=2;
   	haxi[1]=1;
	for(i=1;i<n;)
   	{
        if(count>=target)
        {
            haxi[count]++;
			i++;
        }
   		else if(haxi[count]==0&&haxi[target-count]==0)
   		{
   			haxi[count]++;
			i++;	
		}
   		else {
   			count++;
   			continue;
		}
        count++;
	}
	for(i=0;i<1000000;i++)
	if(haxi[i]==1) sum+=i;
    return sum;
}
int main()
{
	printf("%d",minimumPossibleSum(16,6));
}
