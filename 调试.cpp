#include<stdio.h>
#define N 2
int sum=0;
void fun(int n)
{int i,j=0;
if(n<=0)return ;
for(i=0;i<N;i++)
for(j=0;j<N;j++)
{printf("%d  %d\n",i,j);
//sum++;
fun(n-1);
}
}
int main()
{int n;
scanf("%d",&n);
fun(n);
//printf("%d",sum);
}
