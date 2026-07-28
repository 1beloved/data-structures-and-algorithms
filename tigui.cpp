#include<stdio.h>
#include<string.h>
#define N 100
void isfun(char a[],int n)
{int i,j;
j=strlen(a);
for(i=strlen(a)-1;i>=0;i--)
a[i+n]=a[i];
a[j+n]='\0';
for(i=0;i<n;i++)
a[i]='0';	
}
void operate(char a[],char b[],int n,int k)
{int sum;
if(n<0)return ;
sum=a[n]+b[n]-96+k;
a[n]=48+sum%10;
operate(a,b,n-1,sum/10);
if(k!=0&&n==0)printf("%d",k);
}
void fun(char a[],char b[])
{int i;
if(strlen(a)>strlen(b)){isfun(b,strlen(a)-strlen(b));i=strlen(a)-1;}
else {isfun(a,strlen(b)-strlen(a));i=strlen(b)-1;}
operate(a,b,strlen(a)-1,0);
for(i=0;i<strlen(a);i++)
printf("%c",a[i]);
}
int main()
{char a[N],b[N];
gets(a);
gets(b);
printf("%s加%s的值为:\n",a,b); 
fun(a,b);
 } 
