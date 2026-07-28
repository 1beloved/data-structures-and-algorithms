#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,count=0;
	for(a=1;a<=100;a++)
	{
		for(b=1;b<=100;b++)
		{
			int c=a*a+b*b;
			if((int)sqrt(c)*(int)sqrt(c)==c&&c<=10000&&a<=b)
			{
				printf("%d*%d + %d*%d = %d*%d\n",a,a,b,b,(int)sqrt(c),(int)sqrt(c));
				count++;
				}	
		}	
	} 
}
