#include <stdio.h>
int haxi[6]={100,50,20,10,5,1};
int main()
{
	int n;
	scanf("%d",&n);
	int index=0;
	int count[6]={0};
	while(n)
	{
		if(n>=haxi[index])
		{
			count[index]++;
			n-=haxi[index];
		}else{
			index++;
		}
	}	
	int i;
	for(i=0;i<6;i++)
	printf("%d\n",count[i]);
} 
