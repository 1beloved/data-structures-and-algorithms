#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
void* print_test(void *args)
{
	int i;
	for(i=1;i<=500;i++)
	{
		printf("%s : %d\n",(char*)args,i);
	}
	return NULL;
}

void* print_test1(void *args)
{
	printf("%s",(char*)args);
	return NULL;
}

int main()
{
	pthread_t th1;
	pthread_t th2;
	pthread_t th3;
	FILE *fp=fopen("C:\\Users\\13126\\Desktop\\1.txt","r");
	char buff[2048];
	int index=0,ch;
	while((ch=fgetc(fp))!=EOF)
	{
		buff[index++]=ch;
	} 
	//pthread_create(&th1,NULL,print_test,"th1");//第三个参数一定要是void(指针/地址)*类型的函数 
	//pthread_create(&th2,NULL,print_test,"th2");
	pthread_create(&th3,NULL,print_test1,buff); //把从文件读取的字符串传给args 
	//pthread_join(th1,NULL); //可能会出现线程切换的情况,可能打印到一半就打印另外一半的线程了 
	//pthread_join(th2,NULL); 
	pthread_join(th3,NULL);
}
