#include <stdio.h>
int main()
{
	char a[]="abc123dda5.6da98a",*p=a;
	int i,flag=0,point=1;
	double sum=0;
	while(*p)
	{
		if(*p>='0'&&*p<='9')
		{
			i=i*10+*p-'0';
			flag=1;
		}else{
				flag=0;
				point=1;
		}
		if(!flag&&i){
			printf("%d  ",i);
			i=0;
		}
		p++;
	}
	if(flag) 	printf("%d  ",i);
}
