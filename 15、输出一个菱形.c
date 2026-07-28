#include <stdio.h>
#include <math.h>
void func(int n)
{
	int i,j;
	for(i=-(n/2);i<=n/2;i++,printf("\n"))
		for(j=-(n/2);j<=(n/2);j++)
			if(abs(i)+abs(j)<=n/2) printf("*");
			else printf(" ");
} 


void func1(int n)
{
	
	int i,j;
	for(i=n/2;i>=0;i--,printf("\n"))
	{
		for(j=i;j>0;j--) printf(" ");
		for(j=n-2*i;j>=0;j--) printf("*"); 
	}

}
//     *              2    1            0
//   * * *            1    3            1
//*  * * * *          5    0            2
//   * * *            1    3            0
//     *              2    1            1

int main()
{
	int n;
	scanf("%d",&n);
	func1(n);
	
	
}
