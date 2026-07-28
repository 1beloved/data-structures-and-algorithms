#include <stdio.h>
#include <time.h>
#define N 5
#define M 2
int main()
{
	srand(time(NULL));
	int a[M][N]={1,2,3,4,5,6},index,*p,i,j;
	for(i=0;i<M;i++,printf("\n"))
	{
		for(j=0;j<N;j++)
		{
			a[i][j]=rand()%10+1;
			printf("%d ",a[i][j]);
		}
	}
	putchar(10);
	for(i=0;i<M;i++)
	{
		p=*(a+i);
		for(j=1;j<N;j++)
		{
			if(*p>a[i][j])
			{
				p=*(a+i)+j;
				index=j;
			}
		} 
		for(j=0;j<M;j++)
		{
			if(*p<a[j][index])
			break;
		}
		if(j==M)
		printf("%dÊÇ°°µãÊý\n",*p); 
	}
	
	
}
