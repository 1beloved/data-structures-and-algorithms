#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

void fun(int *a,int *b)
{
	int i;
	for(i=0;i<10;i++)
	b[i]=0;
	for(i=0;i<100;i++)
	b[(*a++)/10]++;
}

int main()
{
	int i,a[100],b[10];
	srand(time(NULL));
	for(i=0;i<100;printf("%d ",a[i]),i++)
	a[i]=rand()%90+10;
	fun(a,b);
	for(i=0;i<10;i++)
	printf("%d %d\n",i+1,b[i]);
}
