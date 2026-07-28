#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define N 10
int a[N];
int count;
void fun(int* res, int target, int sum,int len,int index)
{
	if (target <= sum)
	{
        if (target == sum)
        {
            count++;
            int i; 
            for ( i = 0; i < index; i++)
                printf("%d ", a[i]);
            printf("\n");
        }
            return;
	}
	int i;
	if(index==0) i=0;
	else i=index-1;
    for (; i < len; i++)
    {
    	count++;
        if (sum + res[i] <= target)
        {
            a[index] = res[i];
            fun(res, target, sum + res[i], len, index + 1);
            a[index] = 0;
        }
        else return;//剪枝操作 
    }
}
void QuickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int i, j, t, k = a[l];
        i = l, j = r;
        while (i < j)
        {
            while (i < j && a[j] > k) {
                j--;
            }
            if (i < j) {
                a[i] = a[j];
                i++;
            }
            while (i < j && a[i] < k) {
                i++;
            }
            if (i < j) {
                a[j] = a[i];
                j--;
            }

        }
        a[j] = k;
        QuickSort(a, l, i - 1);
        QuickSort(a, j + 1, r);
    }

}
int main()
{
	int a[] = { 2,3,6,7 }, target = 7;
    QuickSort(a, 0, (sizeof(a) / sizeof(int) )-1);
	fun(a,  target, 0, sizeof(a) / sizeof(int),0);
	printf("执行了%d次",count);
}
