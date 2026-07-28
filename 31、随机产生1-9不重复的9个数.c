#include <stdio.h>
#include <time.h>
#define N 10
int main()
{
	int haxi[N+1]={0},i,t;
	srand(time(NULL));
	for(i=1;i<=N;)
	{
		t=rand()%N+1;
		printf("%d ",t);
		if(haxi[t]==0){
			 haxi[t]=t;
			 i++;
		}
		continue;
	}
	printf("\n");
	for(i=1;i<N;i++)
	printf("%d ",haxi[i]);
} 
