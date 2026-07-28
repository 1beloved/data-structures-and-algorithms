#include <bits/stdc++.h> 
using namespace std;
char a1[2000000],a2[2000000];
int kmp[2000000];
int main()
{
    scanf("%s%s",a1,a2);
    kmp[0]=kmp[1]=0;//前一位，两位失配了，都只可能将第一位作为新的开头
    int len1=strlen(a1),len2=strlen(a2);
    int k;
    k=0;
    for(int i=1;i<len2;i++)//自己匹配自己
    {
        while(k&&a2[i]!=a2[k])k=kmp[k];//找到最长的前后缀重叠长度
        kmp[i+1]=a2[i]==a2[k]?++k:0;//不相等的情况，即无前缀能与后缀重叠，直接赋值位0（注意是给下一位，因为匹配的是下一位适失配的情况）
	}
	//       0123456789 10 11 12 13 14
	//       AAAAAAABAA A  A  A  A  C
	//kmp    001
    k=0;
    for(int i=0;i<len1;i++)
    {
        while(k&&a1[i]!=a2[k])k=kmp[k];//如果不匹配，则将利用kmp数组往回跳
        k+=a1[i]==a2[k]?1:0;//如果相等了，则匹配下一位
        if(k==len2)printf("%d\n",i-len2+2);//如果已经全部匹配完毕，则输出初始位置
    }
    for(int i=1;i<=len2;i++)printf("%d ",kmp[i]);//输出f数组
    return 0;
}
