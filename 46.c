#include <stdio.h>
#include <time.h>
int func(int n)
{
	int i,j,w;
	for(i=2;i<=(n/2);i++)
	{
		for(j=2;j<n/2;j++)
		{
			if(i%j==0) break;
		}
		if(j>=i/2) w=n-i;
		for(j=2;j<(n/2);j++)
		{
			if(w%j==0) break;
		}
		if(j>=(n/2)&&(w+i==n))
		{
			printf("%d=%d+%d\n",n,i,w);
		 } 
	}
}


int main()
{
	int n;
	srand(time(NULL));
//	scanf("%d",&n);
	while(1)
	{
		n=rand()%100;
		if(n%2==0) break;
	}
	func(n);
}
