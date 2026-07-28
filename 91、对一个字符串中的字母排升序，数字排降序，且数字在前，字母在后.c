#include <stdio.h>
#include <string.h>
//用函数实现 
void hanshu(char *a)
{
	char math[100]={0},zimu[100]={0},*head=math,*tail=zimu,*p=a;
	while(*p)
	{
		if(*p>=0&&*p<='9')
		{
			*head++=*p++;
		}else{
			*tail++=*p++;
		}
	}
	*head='\0';
	*tail='\0';
	int i,j,t;
	for(head=math;*head;head++){
		for(p=head+1;*p;p++)
		{
			if(*head>*p)
			{
				t=*head;
				*head=*p;
				*p=t;	
			}
		}
	}
/*	for(head=zimu;*head;head++){
		for(p=head+1;*p;p++)
		{
			if(*head>*p)
			{
				t=*head;
				*head=*p;
				*p=t;	
			}
		}
}*/
	strcpy(a,math);
	strcat(a,zimu);
}

int main()
{
	char a[100],math[100]={0},zimu[100]={0},*head=math,*tail=zimu,*p=a;
	gets(a);
	hanshu(a);
	//paixu(a);
	puts(a);
	
}
