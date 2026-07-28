#include <stdio.h>
int main()
{
	int a[10]={1,1,3,1,1,2,3,5,4,6},c[10]={0};
	int i,j,k=0,t;
	for(i=0;i<10;i++)
	{
		t=a[i];
		for(j=0;j<k;j++)
			if(a[j]==t&&j!=i) break;
		if(j==k)
			c[k++]=t;
	}
	for(i=0;i<k;i++)
		if(c[i]!=0) printf("%d ",c[i]);
}
