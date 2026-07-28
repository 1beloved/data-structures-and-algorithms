#include<stdio.h>
int main()
{int a[5]={3,2,5,9,1},t,i=0,j=4,m;
scanf("%d",&t); 
while(i<j)
{if(a[i]>t&&a[j]<t){a[i]^=a[j];a[j]^=a[i];a[i]^=a[j];}
else if(a[i]>t&&a[j]>t){j--;continue;}
else if(a[i]<t&&a[j]<t){i++;continue;}
i++,j--;
}
for(i=0;i<5;i++)
printf("%2d",a[i]);
}
