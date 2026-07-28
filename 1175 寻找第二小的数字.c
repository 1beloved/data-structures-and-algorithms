#include <stdio.h>
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
 
int main()
{
    int c;
    scanf("%d",&c);
    while(c--)
    {
        int t,n,i,x[100],min;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",x+i);
        QuickSort(x,0,n-1);
        min=x[0];
        for(i=0;i<n;i++)
            if(x[i]>min){min=x[i];break;}
        if(i<n) printf("%d\n",min);
        else printf("NO\n");
    }
}
