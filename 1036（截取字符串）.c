#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main()
{
    char a[99] = "I love China!";
    int n;
    scanf("%d",&n);
    strcpy(a,a+n);
    puts(a);
    
}
