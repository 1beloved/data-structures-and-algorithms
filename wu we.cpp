#include<stdio.h>
#include"stdlib.h"
#include"time.h"
#define N 10
int isfun(int a[],int i,int j)
{int x=i+1,t,flag=1;
while(x<=j)
{if(x==j&&a[x]>a[i]){t=a[i];a[i]=a[x-1];a[x-1]=t;flag=0;}
else if(x==j){t=a[i];a[i]=a[x];a[x]=t;flag=0;}
if(a[x]>a[i]&&a[j]<a[i]){t=a[j];a[j]=a[x];a[x]=t;}
else if(a[x]>=a[i]&&a[j]>=a[i]){j--;continue;}
else if(a[x]<=a[i]&&a[j]<=a[i]){x++;continue;}
x++,j--;	
}
if(flag&&x>j){t=a[i];a[i]=a[x-1];a[x-1]=t;}
return x;	
}
void fun(int a[],int l,int r)
{
if(l>=r)return ;
if(l+1==r&&a[l]>a[r]){a[l]^=a[r];a[r]^=a[l];a[l]^=a[r];}
fun(a,l,isfun(a,l,r)-1);
fun(a,isfun(a,l,r),r);	
}
int main()    
{int a[N];
srand(time(NULL));
for(int i=0;i<N;i++)
a[i]=rand()%100+1; 
fun(a,0,N-1);
for(int i=0;i<N;i++)
printf("%3d",a[i]);
}
