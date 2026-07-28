#include <stdio.h>
int main()
{
  int n,m,i,j,c;
  scanf("%d%d",&n,&m);
  for(i=1;i<n/15;i++)
    for(j=1;j<n/10;j++)
        {
        	c=m-i-j;
            if(i*15+j*10+c*5==n)
            {
                printf("mu:%d gong:%d xiao:%d\n",i,j,m-i-j);
            }
        }
    
    
    
}
