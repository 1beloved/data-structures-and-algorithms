#include <stdio.h>
#include <math.h> 
int main()
{
    int *q,*max,*p;
    p=(int)malloc(sizeof(int));
	q=(int)malloc(sizeof(int));
    scanf("%d %d",p,q);
    if(*p>*q)max=p;
    else
    max=q;
    printf("%d %d",*max,((*p+*q)-abs(*p-*q))/2);
}
