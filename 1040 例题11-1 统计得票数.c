#include <stdio.h>
#include <string.h>
struct node{
	char name[20];
	int count;
}person[3];

int main()
{
	strcpy(person[0].name,"Li");
	strcpy(person[1].name,"Zhang");
	strcpy(person[2].name,"Fun");
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100];
		scanf("%s",a);
		if(strcmp(a,person[0].name)==0) person[0].count++;
		if(strcmp(a,person[1].name)==0) person[1].count++;
		if(strcmp(a,person[2].name)==0) person[2].count++;
	}
	printf("%s:%d\n%s:%d\n%s:%d",person[0].name,person[0].count,person[1].name,person[1].count,person[2].name,person[2].count);
}
