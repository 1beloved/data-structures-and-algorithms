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
//for(i=0;i<j+n;i++)
//printf("%c",a[i]);
//printf("\n");
}
void fun(char a[],char b[])
{int sum,k=0,i;
if(strlen(a)>strlen(b)){isfun(b,strlen(a)-strlen(b));i=strlen(a)-1;}
else {isfun(a,strlen(b)-strlen(a));i=strlen(b)-1;}
while(i>=0)
{sum=a[i]+b[i]-96+k;
a[i]=48+sum%10;
k=sum/10;
i--; 
}
if(k!=0)printf("%d",k);
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
