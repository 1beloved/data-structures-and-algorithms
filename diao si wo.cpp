#include<stdio.h>
#define N 5
int left,right;
int m(int a[],int l,int r)
{int mid;
if(l==r){return a[l];}
mid=l+((r-l)>>1);	
left=m(a,l,mid);
right=m(a,mid+1,r);	
return left>right? left:right; 
printf("%d\n",a[l]);
printf("%d\n",a[r]);
}
int main() 
{int a[N]={1,2,55,1,4};
//m(a,0,N-1);
printf("%d",m(a,0,N-1));
}
