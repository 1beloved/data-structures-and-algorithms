#include <stdio.h>
#include <string.h>
int main()
{
	char haxi[26][26];
	int i,j;
	for(i=0;i<26;i++)
	{
		char k='A'+i; 
		for(j=0;j<26;j++)
		{
			haxi[i][j]=((k+j)-'A')%26+'A';
		}
	}
	char s1[101],s2[1001],s3[1001];
	gets(s1);
	gets(s2);
	strcpy(s3,s2);
	char *p=s1;
	while(*p)
	{
		if(*p>='a'&&*p<='z') *p-=32;
		p++;
	}
	p=s2;
	while(*p)
	{
		if(*p>='a'&&*p<='z') *p-=32;
		p++;
	}
	p=s2;
	int index=0,len=strlen(s1);
	while(*p)
	{
		int flag=0;//0Ð¡Ð´£¬1´óÐ´ 
		if(s3[p-s2]>='A'&&s3[p-s2]<='Z') flag=1;
		if(index==len)
		{
			index=0;
		}
		int row=s1[index]-'A';
		for(i=0;i<26;i++)
		{
			if(haxi[row][i]==*p){
				if(flag)
				{
					printf("%c",'A'+i);
				}
				else printf("%c",'a'+i);
			}
		}
		index++;
		p++;
	}
}
