//#include <string.h>
//#include <stdio.h> 
//#include <stdlib.h>
//char a[100000][100000];
//int count;
//void print_f(char *p,int i,int n)
//{
//	int index=0;
//	strcpy(a[count],p+i);
//	a[count++][n-i+1]='\0';
//	puts()
//} 
//char  longestPalindrome(char * s){
//	int i;
//    int len = strlen(s);
//
//
//    for (i = 0; i < len; i++)   
//    { 
//		int left = i;
//        int right = i + 1;//中心右两个的情况
//
//        while (left >= 0 && right < len && s[left] == s[right]) {
//        	print_f(s,left,right);
//            left--;
//            right++;
//        }
//        left = i;
//        right = i;//中心只有一个
//		int flag=1;
//        while (left >= 0 && right < len && s[left] == s[right]) {
//        //只要走了，马上就打印
//        if(flag)
//        {
//        	left--;
//            right++;
//            flag=0;
//            continue;
//		}
//		 print_f(s,left,right);
//            left--;
//            right++;
//        }
//    }
//}
//


#include<stdio.h>
#include<string.h>
 
int main( )
{
    char s[501]={0};
    int n,len,begin,maxBegin,i,j;
    scanf("%s",s);
    n=strlen(s);  //n为字符串长度
    for(len=2;len<=n;len++)  //枚举子串的所有可能的长度
    {
        maxBegin=n-len;  //子串最大开始点
        for(begin=0;begin<=maxBegin;begin++)  //枚举子串的开始点，可自行画图进行理解
        {
            i=begin;  //i为子串起始点      
            j=begin+len-1;  //j为子串结束点
            for(;i<begin+len;i++,j--)  //遍历当前子串（a[i]~a[begin+len-1]）,判断是否回文串 
            {
                if(s[i]!=s[j])
                {
                    break;
                }
            }
            if(i==begin+len)  //如果完整走完上面的循环，那么i==begin+len,可以判断其为回文子串
            {
                for(i=begin;i<begin+len;i++)  //输出子串
                {
                    printf("%c",s[i]);
                }
                printf("\n");  //输出完子串进行换行
            }
        }
    } 
   return 0;
}
//int main()
//{
//	char str[501];
//	scanf("%s",str);
//	longestPalindrome(str);
//}
