#include <stdio.h>
#include <string.h>
int main()
{
	char s[2004];
	scanf("%s",s);
	int i=0;
	for(i=0;i<strlen(s);)
	{
		if(s[i]==s[i+1]){
//			printf("%d %d:",i,i+1);
			strcpy(s+i,s+i+2);
//			puts(s);
			if(i!=0)
				i--;
			else continue;
		}
		else i++;
	}
	printf("%s",s);
}
