#include <stdio.h>
int main()
{
    int a[300][5]={0},i,j,n,b[100][2]={0},count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
        a[i][0]=i+1;
        a[i][4]=a[i][1]+a[i][2]+a[i][3];
//        printf("学号%d 语文%d 数学%d 英语%d 总分%d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]); 
    }
    int max=0;
    for(i=0;i<5;i++)
    {
        max=i;
        for(j=0;j<n;j++)//找到第一的人的学号 
        {
            if(j==i) continue;
            if(a[max][4]<a[j][4])//如果总分小于就交换并把最大的学号的总分记0,下次不参与计算 
            {
                max=j;
                continue;
            }
            if(a[max][4]==a[j][4])//如果分数相同 
            {//判断语文 
                if(a[max][1]<a[j][1])//语文小就交换 
                {
                    max=j;continue;
                }
                if(a[max][1]==a[j][1])//语文相同 
                {//判断学号 
                    if(a[max][0]>a[j][0])
                    max=j;
                    continue;
                }
            }
        }
       // 保留学号和总分并把a中的max置0，下次不参与计算 
            b[count][0]=a[max][0];b[count][1]=a[max][4];count++;
            a[max][4]=0;
            printf("%d %d\n",b[count-1][0],b[count-1][1]);
    }
 
     
}
