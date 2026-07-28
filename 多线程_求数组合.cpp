#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <pthread.h>
#define MAX_SIZE 500000000
struct node{
	int start;
	int end;
	int sum;
};

int *array;
void *sum(void *args){
	int i,sum=0,b,e;
	b=clock();
	struct node *p=(struct node*)args;
	for(i=p->start;i<p->end;i++)
	{
		sum+=array[i];
	}
	e=clock();
	printf("ºÄÊ±%dms\n",e-b);
	p->sum=sum;
}

int main()
{
	srand(time(NULL));
	array=(int *)malloc(sizeof(int)*MAX_SIZE);
	int i,sum1=0,sum2=0,middle=MAX_SIZE/2;
	for(i=0;i<middle;i++)
	{
		array[i]=rand()%50+1;
		sum1+=array[i];
	}
	for(i=middle;i<MAX_SIZE;i++)
	{
		array[i]=rand()%50+1;
		sum2+=array[i];
	}
	struct node ay[2];
	ay[0].start=0;
	ay[0].end=middle;
	ay[1].start=middle;
	ay[1].end=MAX_SIZE;
	pthread_t th1;
	pthread_t th2;
	pthread_create(&th1,NULL,sum,ay);
	pthread_create(&th2,NULL,sum,ay+1);
	pthread_join(th1,NULL);
	pthread_join(th2,NULL);
	printf("%d + %d =%d\n",sum1,sum2,sum1+sum2);
	printf("%d + %d =%d",ay[0].sum,ay[1].sum,ay[0].sum+ay[1].sum);
}
