//把一个文本文件"src.txt"的内容拷贝到另一个文本文件"des.txt"，必须成功
#include <stdio.h>
int main()
{
	FILE *fp1,*fp2;
	fp1=fopen("src.txt","r");
	fp2=fopen("des.txt","w");
	char ch=fgetc(fp1);
	while(!feof(fp1))
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2); 
}
