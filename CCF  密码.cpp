#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char a[40];
		scanf("%s",a);
		int len=strlen(a);
		char haxi[160]={0};
		int index=2;
		int flag1,flag2,flag3,flag4;//数字，字母，特殊符号,出现次数 
		flag1=flag2=flag3=flag4=0;
		int i;
		for(i=0;i<len;i++)
		{
			haxi[a[i]]++;
			if(a[i]>='0'&&a[i]<='9')
			{
				flag1=1;
			}if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
			{
				flag2=1;
			}if(a[i]=='*'||a[i]=='#')
			{
				flag3=1;
			}
			if(haxi[a[i]]>2)
			{
				flag4=1;
			}
		}
//		printf("%d %d %d %d\n",flag1,flag2,flag3,flag4);
		if(len>=6)
		{
			if(flag1==1&&flag2==1&&flag3==1)
		{
			if(flag4==0)
			{
				printf("2\n");
			}else{
				printf("1\n");
			}
		}else{
			printf("0\n");
		}
		}
		
	}
	
	
 } 
