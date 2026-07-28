#include "stdio.h"
main()
{int n=5,x,y;
 for(x=-n/2;x<=n/2;x++,printf("\n"))
   for(y=-n/2;y<=n/2;y++)
      if(x*y<=(n-1-x*x-y*y)/2&&x*y>=-(n/2*n/2-x*x-y*y)/2)
        printf("*");
    else
       printf(" ");
       
}

