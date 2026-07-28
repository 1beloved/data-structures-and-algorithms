//第一行，一个整数n，表示n个数参与排序，n小于100
//第二行，n个整数，用空格分开
//第三行，输入一个字符串，"ASC"表示升序排，"DESC"表示降序排，数据保证不出现其它字符串
#include <stdio.h>
#include <string.h>
int main()
{
    int a[100],t,i,j,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",a+i);
     char b[100];
     scanf("%s",b);
     if(strcmp(b,"DESC")==0)
     {
                for(i=0;i<n-1;i++)
             {
                max=i;
                for(j=i+1;j<n;j++)
                {
                    if(a[max]<a[j])
                     max=j; 
                }
                if(max!=i)
                {
                    t=a[max];a[max]=a[i];a[i]=t;
                }
             }
     }else
     {
        for(i=0;i<n-1;i++)
             {
                max=i;
                for(j=i+1;j<n;j++)
                {
                    if(a[max]>a[j])
                     max=j; 
                }
                if(max!=i)
                {
                    t=a[max];a[max]=a[i];a[i]=t;
                }
             }
     }
     
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
     
     
}

