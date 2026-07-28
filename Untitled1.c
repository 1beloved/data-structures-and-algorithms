#include <stdio.h>
int main()
{
    char a[100][100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",a[i]);
    for(i-=1;i>=0;i--)
    printf("%s ",a[i]);
}	
