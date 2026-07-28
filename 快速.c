#include <stdio.h>
#include <stdlib.h>
#define N 100000
void QuickSort(int a[],int l,int r)
{
	if(l<r)
	{
		int i,j,t,k=a[l];
		i=l,j=r;
		while(i<j)
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
		a[j]=k;
		QuickSort(a,l,i-1);
		QuickSort(a,j+1,r);
	}	

} 



int main(){
	int a[N]={0},i,n;
	srand(time(NULL));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a+i);
	QuickSort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
