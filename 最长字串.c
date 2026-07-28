#include <stdio.h>
int lengthOfLongestSubstring(char * s)
{
    //类似于hash的思想
    //滑动窗口维护
    int left = 0;
    int right = 0;
    int max = 0;
    int i,j;
    int len = strlen(s);
    int haveSameChar = 0;
    for(i =0; i < len ; i++  )
    {
        if(left <= right)
        {   
            //检测是否出现重复
             //循环遍历整个数组 left -> right
            haveSameChar = 0;
            for(j = left; j < right ; j++)
            {
                if(s[j] == s[right])
                {
                    haveSameChar = 1;
                    break;
                }
            }
            if(haveSameChar)
            {
                //指向下一个
                left = j +1;
            }
        }
        //统计最大的间距
        max = max < (right - left + 1) ? (right - left + 1): max;
        right++;
    }
    return max;
}
int main()
{
	char a[100];
	gets(a);
	printf("%d",lengthOfLongestSubstring(a));
	
	
} 
