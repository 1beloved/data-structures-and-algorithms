//#include "stdio.h"
//#include "stdlib.h"
//#define MAX(a,b) ((a<b)?b:a)
//int fun(int **s, int row, int col, int n) {//递归法
//    if (row == n) return 0;
//    int l = 0;//往左走
//    int r = 0;//往右走
//    l += s[row][col] + fun(s, row + 1, col, n);
//    r += s[row][col] + fun(s, row + 1, col + 1, n);
//    return MAX(l, r);//取最大值
//}
////开了n!大小的dp表，其实没必要
//int fun2(int **s, int **t, int r) {//动态规划法
//    for (int i = 0; i <= r; i++) t[r][i] = s[r][i]; //初始化 
//    for (int row = --r; row >= 0; row--) {
//        for (int col = 0; col <= row; col++) {
//            int r = s[row][col] + t[row + 1][col];
//            int l = s[row][col] + t[row + 1][col + 1];
//            t[row][col] =  MAX(l, r);
//        }
//    }
//    return t[0][0];
//}
////很容易就发现t[row][col] 的值只依赖于t[row+1][col]与t[row+1][col]，那就给他优化一下只开n大小的dp表就好了
//int fun3(int **s, int *t, int r) {
//    for (int i = 0; i <= r; i++) t[i] = s[r][i]; //初始化 
//    for (int row = --r; row >= 0; row--) {
//        for (int col = 0; col <= row; col++) {
//            int r = s[row][col] + t[col];
//            int l = s[row][col] + t[col + 1];
//            t[col] =  MAX(l, r);
//        }
//    }
//    return t[0];
//}
//int main() {
//    int **s, **t, *d,i, n, j;
//    scanf("%d", &n);
////根据题意，只需n!个空间就够了，没必要开n*n个空间
////这里用二维指针做一个数组就行了
//    s = (int **)malloc(sizeof(int *) * n); //开辟空间
//    t = (int **)malloc(sizeof(int *) * n);
//    d = (int *)malloc(sizeof(int) * n);
//    for (i = 0; i < n; i++) {
//        *(s + i) = (int *)malloc(sizeof(int) * (i + 1));
//        *(t + i) = (int *)malloc(sizeof(int) * (i + 1));
//        for (j = 0; j <= i; j++) {
//            scanf("%d", *(s + i) + j);
//        }
//    }
//    printf("max=%d\n", fun(s, 0, 0, n));
//    printf("max=%d\n", fun2(s, t, n - 1));
//    printf("max=%d\n", fun3(s, d, n - 1));
//}





#include<stdio.h>

void move(int x, int y)
{
	printf("%c->%c\n", x, y);
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
		move(a, c);//将A座上最后一个盘子移向C座
		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
	} 
}
//move中的实参与hanoi函数中的形参相对应，而hanoi函数中形参a，b，c所对应的值也是在有规律的变化
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

