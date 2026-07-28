#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
static int flag=0;
add(char *t,char *p){ 
	int sum;
	if((*p=='\0')&&(*t=='\0'))
	{
		if(flag) printf("%d",1);
		return;
	}
	while(*t!='\0') t++;
	while(*p!='\0') p++;	
	t--,p--;
	if(flag) sum=*p-'0'+*t-'0'+1;
	else sum=*p-'0'+*t-'0';
	if((sum/10)==1) flag=1,sum=sum%10;
	*t=*p='\0';
	if(*t=='\0') add(t,--p);
	if(*p=='\0') add(--t,p);
	t--,p--;
	add(t,p);
	printf("%d",sum%10);

}




int main()
{
	
	char a[10000],b[100000];
	printf("第一个大数是:");
	gets(a);
	printf("第二个大数是:");
	gets(b);
	printf("相加起来是:");
	add(a,b); 
 } 
