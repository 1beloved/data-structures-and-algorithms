#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int func(int a[],int n)
{
	int i=0,j,count,max;
	for(i=0;i<n;i++)
	{
		if(a[i]) break;
	}
	max=i;
	if(max>10) return 1; 
	for(max;max>3;max--)
	{
		for(j=0;j<n;j++)
		{
//			printf("max=%d,j=%d\n",max,j);
			if(a[j]==1&&a[j]%max!=0)
			{
				break;
			}
		}
		if(j==n) return max;
	}
	return 1;
}


int main()
{
		int i,j,t,flag=1,a[101]={0}, max;
		while(flag)
		{
			
			for(i=0;i<101;i++)
			{
				a[i]=0;
			}
				srand(time(NULL));
				for(i=0;i<10;)
				{
					t=rand()%101;
					if(a[t]==0)
					{
						a[t]=1;
						i++;
					}
				}
				max=func(a,101);
			if(max>3)
				{
					flag=0;
					printf("max=%d\n",max);
					for(i=0;i<101;i++);
					{
						if(a[i]==1) printf("%d ",i);
					}
				}
		}
	
}
