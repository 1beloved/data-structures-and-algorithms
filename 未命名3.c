#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;  // 必须用int类型接收fgetc的返回值
    fp1 = fopen("C:\\Users\\13126\\Desktop\\1.txt", "r");
    if (fp1 == NULL) {
        printf("无法打开源文件！\n");
        return 1;
    }
    fp2 = fopen("C:\\Users\\13126\\Desktop\\2.txt", "w");
    if (fp2 == NULL) {
        printf("无法创建目标文件！\n");
        fclose(fp1);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("文件复制成功！\n");
    
    return 0;
}
