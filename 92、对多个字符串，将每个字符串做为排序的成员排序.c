#include <stdio.h>
#include <string.h>
int main()
{
	char a[3][100],b[100];
	int i;
	for(i=0;i<3;i++)
	{
		printf("ÇëÊäÈëÄãµÄµÚ%d¸ö×Ö·û´®\n",i+1);
		scanf("%s",*(a+i));
	}
	
	for(i=0;i<2;i++)//ÉýÐò 
	{
		strcpy(b,*(a+i));
		if(strcmp(b,*(a+i+1))>0)
		{
			strcpy(*(a+i),*(a+i+1));
			strcpy(*(a+i+1),b);
		}
		
	}
	for(i=0;i<3;i++)
	printf("%s\n",*(a+i));
	
	
	
}
