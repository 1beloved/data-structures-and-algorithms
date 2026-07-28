#include <stdio.h>
#include <time.h>
int main()
{
	int i,j,count=0,w;
	printf("你想输入的数字:");
	scanf("%d",&j);
	if(j>=59||j<=48)
	{
		printf("输入错误!!!!");
		exit(0);	
	} 
	printf("你想进行的次数:");
	scanf("%d",&w);
	srand(time(NULL));
	while(w)
	{
		i=rand()%100000000+1;
//		printf("产生的数字有：%d\n",i); 
		if(i%j==0)
		{
			printf("被%d除的数字有%d\n",j,i);
			count++;
		}
		w--; 
	}
	printf("能被%d除的数字有%d个",j,count);
	
	
	 
} 
