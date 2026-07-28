#include <stdio.h>
int main()
{
    int a[1000],b[1000],i,n,j=0,o=0,flag=1;
    scanf("%d",&n);
    while(1)
	{
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",a+i);
	        if(a[i]%2==0) o++;
	        else
	        j++;
	        if(a[i]==0) flag=0;
	    }
	    if(j<o) printf("NO\n");
	    else
	    printf("YES\n");
	    if(!flag) break;
		scanf("%d",&n);
	} 
    
}
