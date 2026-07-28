#include <stdio.h>
#include <time.h>
#define class 3
int findmax(int *p,int m,int n,int *pRow,int *pCol)
{
	int i,j,max;
	max=*p;
	*pRow=0,*pCol=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<*(p+i*n+j))
			{
				max=*(p+i*n+j);
				*pRow=i;
				*pCol=j; 
			}
		 } 
	 } 
	return max;
	
}
int main()
{
	int score[class][4],i,j,maxscore,col,row;
	srand(time(NULL)); 
	for(i=0;i<class;i++)
		for(j=0;j<4;j++)
			score[i][j]=rand()%30+1;
	for(i=0;i<class;i++,printf("\n"))
		for(j=0;j<4;j++)
			printf("%d ",score[i][j]);
	maxscore=findmax(score[0],class,4,&row,&col);
	printf("max=%d,row=%d,col=%d",maxscore,row,col);
	
}
