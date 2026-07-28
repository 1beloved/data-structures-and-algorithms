#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 3
int main()
{
	int a[N]={1,4,2},i,j,count=(int)pow(2,N);
	int b[count-1][N],sum=0,max,min,index;
	for(i=0;i<count-1;i++)
		for(j=0;j<N;j++)
			b[i][j]=0;
	for(i=0;i<count;i++)
	{
		int k=0;
		j=i;
		index=0;
		while(j)
		{
			if(j&1)
			{
				printf("%d ",a[k]);
				b[i-1][index++]=a[k];
			}
			k++;
			j>>=1;
		}
		printf("\n");
	}
	for(i=0;i<count-1;i++,printf("\n"))
		{
			max=min=b[i][0];
			for(j=0;j<N&&b[i][j]!=0;j++)
			{
				if(min>b[i][j]) min=b[i][j];
				if(max<b[i][j]) max=b[i][j];
			}
			printf("max=%d min=%d ",max,min);
			sum+=max*max*min;
		}
		printf("%d",sum);
}
