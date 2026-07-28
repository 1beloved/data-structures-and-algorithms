#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>
#include <pthread.h>
#define MAX_SIZE 500000000
struct node{
	int start;
	int end;
	int id;
};

int *array;
int res[2]={0};
void *sum(void *args){
	struct node *p=(struct node*)args;
	int i,sum=0,b,e,id=p->id,end=p->end,start=p->start;
	b=clock();
	for(i=start;i<end;i++)
	{
//		printf("当前%d线程\n",id);
		res[id]=res[id]+array[i];
	}
	e=clock();
	printf("当前线程%d耗时%dms\n",id,e-b);
	return NULL;
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
	ay[0].id=0;
	ay[1].start=middle;
	ay[1].end=MAX_SIZE;
	ay[1].id=1;
	pthread_t th1;
	pthread_t th2;
	pthread_create(&th1,NULL,sum,ay);
	pthread_create(&th2,NULL,sum,ay+1);
	pthread_join(th1,NULL);
	pthread_join(th2,NULL);
	printf("%d + %d =%d\n",sum1,sum2,sum1+sum2);
	printf("%d + %d =%d",res[0],res[1],res[0]+res[1]);
}
