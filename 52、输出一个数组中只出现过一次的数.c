#include <stdio.h>
#define N 10
#include <time.h>
int main(){
	int a[N],i,j,count,t;
	srand(time(NULL));
	for(i=0;i<N;printf("%d ",a[i]),i++)
		a[i]=rand()%10;
	for(i=0;i<N;i++)
	{
		t=a[i],count=0;
		for(j=0;j<N;j++)
		{
			if(a[j]==t&&j!=i){
				count=1;
				break;
			}
		}
		if(count) continue;
		printf("\n%d ",t);
	}
}

//¹þÏ£Ð´·¨ 
//int main()
//{
//	int a[N],i,haxi[N]={0};
//	srand(time(NULL));
//	for(i=0;i<N;printf("%d ",a[i]),i++)
//		a[i]=rand()%10;
//	for(i=0;i<N;i++)
//		haxi[a[i]]++;
//		printf("\n");
//	for(i=0;i<N;i++)
//		if(haxi[i]==1) printf("%d ",i);
//}
