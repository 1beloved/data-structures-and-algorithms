//第一行，两个整数，m,k，表示矩阵a有m行k列
//接下来m行，每行k个整数
//再接下来一行，1个整数n，表示矩阵b有k行n列
//接下来k行，每行n个整数
//矩阵相乘
//c[i][j]+=a[i][l]*b[l][j] 
#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,k,m,n,l,c[100][100];
    scanf("%d%d",&m,&k);
    for(i=0;i<m;i++)
        for(j=0;j<k;j++)
            scanf("%d",&a[i][j]);
    scanf("%d",&n);
        for(i=0;i<k;i++)
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    for(l=0;l<k;l++)
    c[i][j]+=a[i][l]*b[l][j];
    for(i=0;i<m;i++,printf("\n"))
    for(j=0;j<n;j++)
    printf("%d ",c[i][j]);
}
