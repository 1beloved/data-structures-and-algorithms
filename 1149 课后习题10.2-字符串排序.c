#include <stdio.h>
#include <string.h>
int main()
{
	char a[3][100],*t,p[100];
	int i,j;
	for(i=0;i<3;i++)
	scanf("%s",a[i]);
	for(i=0;i<2;i++)
		{
			t=a[i];
			for(j=i+1;j<3;j++)
				{
					if(strcmp(a[j],t)<0)
					t=a[j];
				}
			if(t!=a[i])
			{
				strcpy(p,t);
				strcpy(t,a[i]);
				strcpy(a[i],p);
			}
		} 
	for(i=0;i<3;i++)
	printf("%s\n",a[i]);
	
}
