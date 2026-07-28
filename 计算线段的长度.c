#include<math.h>
#include<stdio.h>
//(x1,y1) ,(x2,y2)
//sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
int main()
{
    double x1,x2,y1,y2,t;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    t=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.3lf",t);
    return 0; 
}
