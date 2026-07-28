#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
    char a[3][999];
    int i,j;
    for(i=0;i<3;i++)
    scanf("%s",a+i);
    for(i=0;i<2;i++)
    {
    	char p[9999];
    	strcpy(p,a+i);
    	for(j=i+1;j<3;j++)
    	{
    		if(strcmp(p,a+j)>0)
			{
				strcpy(p,a+j);
				strcpy(a+j,a+i);
				strcpy(a+i,p);
			}
		}
	}
	for(i=0;i<3;i++)
	printf("%s\n",a[i]);
}
