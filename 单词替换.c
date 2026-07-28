#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char s[600],a[101],b[101];
	gets(s);
	gets(a);
	gets(b);	
	int i=0;
	while(s[i])
	{
		while(s[i]==' '&&s[i]) i++;//去空格 
		int j=0,index=i;
		while(s[i]==a[j]&&s[i]&&a[j]){//判断是否有单词相同 
			i++;
			j++;
		}
		if(a[j]==0&&s[i]==' '||a[j]==0&&s[i]=='\0')//说明相同
		{
				char t[100];
				strcpy(t,s+i);
				strcpy(s+index,b);
				i=strlen(s)-1;
				strcat(s,t);
		}
		while(s[i]!= ' '&&s[i]) i++; 
	}
	
	puts(s);
} 
