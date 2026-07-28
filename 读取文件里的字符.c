#include <stdio.h>
int main()
{
	FILE *f=fopen("C:\\Users\\86152\\Desktop\\1.txt","r+");
	rewind(f);
//	printf("%d",ftell(f));
	while(!feof(f))
	{
		char ch=fgetc(f);
		printf("%c",ch);
	}
	fclose(f);
	
} 
