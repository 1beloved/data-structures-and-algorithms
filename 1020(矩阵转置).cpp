//1 2 3
//4 5 6
//将一个2行3列的矩阵（二维数组）行列互换，存储到另一个3行2列的矩阵中。

//要求以整型数据为例来解答。
//
//1 4
//2 5
//3 6
#include <stdio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		scanf("%d",&a[j][i]);
		for(i=0;i<3;i++,printf("\n"))
		for(j=0;j<3;j++)
		printf("%d ",a[i][j]); 
} 
