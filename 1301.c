//
//第一行，一个整数n，表示将有n名员工
//
//接下来n行，每行输入一个员工的信息，例如
//
//1 Yao QiYang
//
//员工姓名长度小于10
//
//员工地址长度小于30
//
//数据保证字符串内无空格
#include <string.h>
struct Employee{
    int Empld;
    char EmpName[10];
    char EmpAdd[30];
}; 
int main()
{
    FILE *fp=fopen("company.txt","wb");  
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct Employee person={0,"0","0"};
        scanf("%d %s %s",&person.Empld,person.EmpName,person.EmpAdd);
        fwrite(&person,sizeof(struct Employee),1,fp);
    }
    fclose(fp);
}
