#include <stdio.h>
#define N 1000
int haxi[N];

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		haxi[t]=i%50;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(haxi[t]){
			printf("%d",haxi[t]);
		}else{
			printf("%d",-1);
		}
		if(i==n-1) continue;
		else printf(" ");	
	}
	
}
