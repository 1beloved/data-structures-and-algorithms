#include <stdio.h>
int main()
{
	int a[3]={1,3,7},b[3]={1,5,6},c[6],min=0;
	int index1,index2,index3;
	index1=index2=index3=0;
	while(index3<6)
	{	
		if(index1==3)
		{
			c[index3++]=b[index2++];
			continue;
		}
		if(index2==3)
		{
			c[index3++]=a[index1++];
			continue;
		}
		if(a[index1]>b[index2])
			{
				c[index3++]=b[index2++];
				continue;
			}else{
				c[index3++]=a[index1++];
				continue;
			}
	}
	for(index3=0;index3<6;index3++)
		printf("%d  ",c[index3]);
	
}
