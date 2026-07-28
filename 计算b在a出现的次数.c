#include <stdio.h>
int main()
{
	char a[]="bilibili",b[]="bil"; 
	int i,j,count=0;
	i=j=0;
	while(a[i]!='\0')
	{
		j=0;
		while(a[i]!=b[j]&&a[i]){i++;}
		while(b[j]&&a[i]==b[j]){i++,j++;}
		if(b[j]=='\0') count++;
		
	}
	printf("%d",count);
}
