#include <stdio.h>
#include <ctype.h>
int main()
{
	int space,num,letter,other;
	space=num=letter=other=0;
	char ch;
	while((ch=getchar())!='\n')
	{
		if(isalpha(ch))
		{
			letter++;
		}
		else if(isdigit(ch))
		{
			num++;
		}
		else if(isspace(ch))
		{
			space++;
		}
		 else
		 other++;
	}
	printf("space=%d letter=%d num=%d other=%d",space,letter,num,other);
	
	
 } 
