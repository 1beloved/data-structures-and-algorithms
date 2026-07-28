#include <stdio.h>

int main()
{
	FILE *fp=fopen("1.txt","a+");
	fwrite("abc",3,1,fp);
	rewind(fp);
	char str[20];
	fread(str,7,1,fp);
	FILE *fp2=fopen("2.txt","w");
	fwrite(str,7,1,fp2);
}
