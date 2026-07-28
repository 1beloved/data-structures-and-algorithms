#include<stdio.h>
#define N 10
void put(int a[])
{int i;
for(i=0;i<N;i++)
printf("%3d",a[i]);
}

int fun1(int a[N],int n)
{int i;
for(i=0;i<n;i++)
if(a[i]==a[n])return 0;
return 1;
}
 
int isfun(int n)
{
int i;
for(i=2;i*i<=n;i++)
if(n%i==0)return 0;
return 1;
}

void fun(int a[N],int num)
{int i,t;
if(num>=N){if(isfun(a[N-1]+a[0])){put(a);printf("\n");}return ;} 
for(i=1;i<=N;i++)
{a[num]=i;
if(isfun(a[num-1]+a[num])&&fun1(a,num))fun(a,num+1);	
}
}
 
int main()
{int a[N]={0},i;
for(i=1;i<=N;i++)
{a[0]=i;
fun(a,1);
}
} 
