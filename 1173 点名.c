#include <stdio.h>
#include <string.h>
int main()
{
	int min=0;
	char a[3][1000];
	while((scanf("%s%s%s",a[0],a[1],a[2]))!=EOF)
	{
		min=0;
		if(strlen(a[min])>strlen(a[1])) min=1;
		if(strlen(a[min])>strlen(a[2])) min=2;
		puts(a[min]);
	}
}
