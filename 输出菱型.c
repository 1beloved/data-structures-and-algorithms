#include <stdio.h>
#include <math.h>
#define N 5
func1()
{
	int x,y;
	for(x=-(N/2);x<=N/2;x++,printf("\n"))
	{
		for(y=-(N/2);y<=N/2;y++)
		{
			if(abs(x)+abs(y)<=(N/2))
			printf("*");
			else
			printf(" ");
		}
	} 
}
func2()
{
	int i,j;
	for(i=N/2;i>=0;i--,printf("\n"))
	{
		for(j=i;j>0;j--) printf(" ");
		for(j=N-2*i;j>=1;j--) printf("*"); 
	}
	
	for(i=1;i<=N/2;i++,putchar(10))
	{
		for(j=i;j>=1;j--) printf(" ");
		for(j=N-2*i;j>=1;j--) printf("*");
	}
	
	
}


int main()
{
//	func1();
//	printf("\n\n\n");
//	func2();

	func1();






}
