#include <stdio.h>
#include <stdio.h>
#include <math.h>
void  EX(int n,int *count)
{
	if(n%2) (*count)++;
	if(n<=1) return;
	EX(n/2,count);
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int t,count=0;
        scanf("%d",&t);
        EX(t,&count);
		if(count==1||t<=1)
		{
			printf("No number can be output !\n");
			continue;
		}
		while(t>1)
        {
			if(t%2){printf("%d ",t);t=t*3+1;}
			else t/=2;
		}
		putchar(10); 
    }
}
