//随着信息化进程的不断推进，
//数据的安全性越来越受到人们的重视，数据加密技术是保证数据安全的重要手段。
//
//编程实现对”src.dat”文件的数据进行加密，
//加密方式是将”src.dat”文件中每个字节与字符'A'进行异或运算，运算后的加密数据存储到”dist.dat”文件中

#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("src.dat","rb");
    fp2=fopen("dist.dat","wb");
    char ch;
    ch=fgetc(fp1);
    while(!feof(fp1))
    {
        ch^='A';
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
     
}
