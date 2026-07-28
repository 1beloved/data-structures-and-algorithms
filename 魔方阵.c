#include <stdio.h>
void print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i] );
	}
	printf("\n");
}
int main()
{
	int hs[6],lan,haxi1[34]={0}; 
	int i;
	for(i=0;i<6;i++)
		{
			scanf("%d",hs+i);
			haxi1[hs[i]]++;
		}
	scanf("%d",&lan);
	int k;
	for(k=0;k<5;k++)
	{
		int hs1[6],lan1;
		int lancount=0,hocount=0;
		for(i=0;i<6;i++)
			{
				scanf("%d",hs1+i);
				if(haxi1[hs1[i]]==1)
				{
					hocount++;
				}
			}
		scanf("%d",&lan1);
		if(lan1==lan) lancount++;
		if(lancount==1&&hocount==6)
		{
			printf("1\n");
		}
		else if(hocount==6)
		{
			printf("2\n");
		}
		else if(hocount==5&&lancount==1)
		{
			printf("3\n");
		}
		else if(hocount==5&&lancount==0||hocount==4&&lancount==1)
		{
			printf("4\n");
		}
		else if(hocount==4&&lancount==0||hocount==3&&lancount==1)
		{
			printf("5\n");
		}
		else if(lancount==1&&hocount>=0)
		{
			printf("6\n");
		}
		else printf("0");
		
		
	}
	
}
