#include <bits/stdc++.h>
using namespace std;

#define N 1000
char key[N];
char content[N];



int main()
{
	printf("请输入密钥:");
	gets(key);
	printf("\n请输入明文:");
	gets(content);
	int len=strlen(content);
	char b[N];
	strcpy(b,key);
	int i,j=0,lenKey=strlen(key);
	for(i=0,j=0;i<len;i++)
	{
		if(content[i]==' '){
			continue;
		}else{
			content[j]=content[i];
			j++;
		}
	}
	content[j]='\0';
	len=strlen(content);
	j=0;
	for(i=lenKey;i<len;i++)
	{
		if(j==lenKey)
		{
			j=0;
		}
		b[i]=key[j++];
	}
	puts(content);
	for(i=0;i<len;i++)
	{
		printf("%c",b[i]);
	}
	printf("\n密文为:\n");
//	printf("%d",content[0]-'a');
	for(i=0;i<len;i++)
	{
		printf("%c",(content[i]-'a'+b[i]-'a')%26+'A');
	}
}
