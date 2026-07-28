#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <malloc.h>
//pthread_t 定义线程变量
//pthread_create() 创建线程 
//pthread_mutex_t name;是定义线程锁 
//pthread_mutex_lock() 上锁 
//pthread_mutex_unlock() 解锁 
int s;
pthread_mutex_t lock;//先定义一个锁 
void *fun(void *args)
{
	
	int i,begintime,endtime;//上锁和解锁都会消耗时间 
	begintime=clock();
	pthread_mutex_lock(&lock);
	for(i=0;i<10000;i++)
	{
		s++;
	}
	pthread_mutex_unlock(&lock);
	endtime=clock();
	printf("耗费%dms\n",endtime-begintime);
	return NULL;
}


int main()
{
	pthread_t th1;	
	pthread_t th2;
	pthread_mutex_init(&lock,NULL);//初始化 
	pthread_create(&th1,NULL,fun,NULL);
	pthread_create(&th2,NULL,fun,NULL);	
	pthread_join(th1,NULL);
	pthread_join(th2,NULL);//如果不上锁的话结果不会是20000,因为会出现数据竞争的问题 
	printf("s = %d",s);
}
