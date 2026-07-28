#include <stdio.h>
#include <string.h>
#define N 1000000
int main()
{
	int m=0,i,n=0;
	char a[N];
	gets(a);
	i=strlen(a);
	while(a[i-1]==32) i--;
	a[i]='\0';
	while(a[m]==32) m++;	
	for(;a[m];m++)
	if(a[m]!=32) a[n++]=a[m]; 
	else if(a[m]==32&&a[m-1]!=32) a[n++]=a[m];
	a[n]='\0';
	puts(a);
} 
