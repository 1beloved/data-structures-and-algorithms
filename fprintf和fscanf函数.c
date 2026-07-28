#include <stdio.h>

int main()
{
	FILE *fp1=fopen("./1.txt","a+");
	fprintf(fp1,"abc");
	char str[10];
	rewind(fp1);
	fscanf(fp1,"%s",str);
	FILE *fp2=fopen("./2.txt","w");
	fprintf(fp2,"%s",str);
}
