#include <stdio.h>

//文件获取字符串\n就停止 
int main()
{
	FILE *fp=fopen("C:\\Users\\86152\\Desktop\\1.txt","r");
	char a[9];
	fgets(a,9,fp);
	puts(a);
 } 
