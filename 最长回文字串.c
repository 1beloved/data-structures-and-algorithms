#include <string.h>
#include <stdio.h> 
#include <malloc.h>
char * longestPalindrome(char * s){
	int i;
   if (s == NULL) {
        return NULL;
    }
    int len = strlen(s);
    if (len <= 1) {//长度小于等于1直接返回
        return s;
    }

    int max_len = 0;
    int start = 0;//记录回文字符串开始的位置
				//  i<6
    for (i = 0; i < len; i++)   //abaabc
    {
        int left = i;
        int right = i;//中心只有一个

        while (left >= 0 && right < len && s[left] == s[right]) {
            left--;
            right++;
        }

        if (right - left - 1 > max_len) {//更新起始位置和长度
            max_len = right - left - 1;
            start = left + 1;
        }

        left = i;
        right = i + 1;//中心右两个的情况

        while (left >= 0 && right < len && s[left] == s[right]) {
            left--;
            right++;
        }

        if (right - left - 1 > max_len) {
            max_len = right - left - 1;
            start = left + 1;
        }
    }
	return max_len;
//    char* c = (char*)malloc(sizeof(char) * (max_len + 1));
//    strncpy(c, s + start, max_len);
//    c[max_len] = '\0';
//    return c;

    
}
int main()
{
	printf("%s", longestPalindrome("abaabc"));
}
