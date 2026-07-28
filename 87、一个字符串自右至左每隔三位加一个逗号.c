#include <stdio.h>
int main()
{
	char a[100],*head,*tail,*ptr;
	int i=0;
	tail=a;
	gets(a);
	while(*tail) tail++;
	head=tail;
	while(head>=a)
	{
		if(i==3)
		{	
			tail=a;
			while(*tail) tail++;
			while(tail>=head)
			{
				*(tail+1)=*tail;
				tail--;
			}
			*(tail+1)=',';
			i=0;
		}
		else{
			head--;
			i++;
		} 
	}
	puts(a);
	
	
}
