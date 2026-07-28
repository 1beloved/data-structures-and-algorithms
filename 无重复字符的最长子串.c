#include <stdio.h>
#include <string.h>
int max(char *s)//"Pwwekp" 
{
	int left=0,right=0,max=0,cnt=0,haxi[128]={0};
	while(right<strlen(s))
	{
		if(haxi[s[right]]==0)
		{
			haxi[s[right]]++;
			right++;
			cnt++;
			max=cnt>max?cnt:max;
		}
		else{
			haxi[s[left]]--;
			left++;
			cnt--;
		}
	}
	return max;
}


int main()
{
	char a[1000];
	scanf("%s",a);
	printf("%d",max(a));
	
}
