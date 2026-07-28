//求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，且保证b2-4ac>0。
//
//程序中所涉及的变量均为double类型


#include <stdio.h>
int main()
{
    double a,b,c,r1,r2,d,z;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a!=0)
    {
        d=sqrt(b*b-4*a*c)/2*a;
        z=-1*b/2*a;
        r1=z-d;r2=z+d;
        printf("r1=%7.2f\nr2=%7.2f",r2,r1);     
    }
     
}
