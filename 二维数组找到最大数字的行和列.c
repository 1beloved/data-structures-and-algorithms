#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 3
int findmax(int *p,int m,int n,int *pRow,int *pCol);
int main()
{
	int a[N][4]={0},j,i,Row,Col,max;
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		for(j=0;j<4;j++)
			a[i][j]=rand()%20+1;
	}
	max=findmax(a,N,4,&Row,&Col);
	for(i=0;i<N;i++,printf("\n"))
	{
		for(j=0;j<4;j++)
			printf("%d  ",*(*(a+i)+j));
	}
	printf("Row=%d Col=%d Max=%d",Row,Col,max);
}
int findmax(int *p,int m,int n,int *pRow,int *pCol)
{
	int i,j,max;
	max=*p;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<*(p+i*n+j)){
				max=*(p+i*n+j);
				*pRow=i;
				*pCol=j;
			}
		}
			
	}	
	return max;
}


