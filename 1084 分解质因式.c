#include <stdio.h>
int main()
{
    int i=2,n;
    scanf("%d",&n);
    printf("%d=",n);
	while(n>1)
	{
	    if(n%i==0)
	    {
	        if(n/i==1) printf("%d",i);
	        else{
	        	printf("%d*",i);
			}
	        n/=i;
	        continue;
	    }
	    i++;
	}
    
    
    
}
