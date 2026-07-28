#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int a[N][N];
	int i=0,j,n=1,b=N-1,x=0;
	while(b>=0)
	{
		i=x;
		if(i%2==0)
		{
			j=N-1;
			while(i>=0)
			{
				a[i--][j--]=n++;
			}
		}
		else
		{
			i=0,j=b;
			while(j<=N-1)
			{
				a[i++][j++]=n++;
			}
			}	
		x++;
		b--;
	}
//	b=N-1,x=1,j=0;
//	while(b)
//	{
//		i=x++;
//		if(i%2!=0){
//			j=0;
//			while(i<=N-1&&j<=N-1)
//			{
//				a[i++][j++]=n++;
//			}
//		}
//		else
//		{
//			i=N-1,j=b-1;
//			while(j>=0&&i>=0)
//			{
//				a[i--][j--]=n++;	
//			}
//		}
//		b--;
//	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%2d ",a[i][j]);
	printf("\n");
	}
	
}
