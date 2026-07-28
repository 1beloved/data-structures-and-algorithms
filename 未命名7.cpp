#include <stdio.h>
#include <string.h>
int main()
{
	char s1[1005],s2[1005];
	gets(s1);
	gets(s2);
	int i;
	for(i=0;i<strlen(s1);)
	{
		if(s1[i]=='#'){
			strcpy(s1+i,s1+i+1);
			continue;
		}else i++;
	}
	
	for(i=0;i<strlen(s2);)
	{
		if(s2[i]=='#'){
			strcpy(s2+i,s2+i+1);
			continue;
		}else i++;
	}
	puts(s1);
	puts(s2);
}
