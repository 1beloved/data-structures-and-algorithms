//孪生素数是指间隔为 2 的相邻素数，它们之间的距离已经近得不能再近了，就像孪生兄弟一样，也称为双生素数。
//例如最小的孪生素数对是3和5，5和7也是(5虽重复但算作2组)。
//本题要求计算n内孪生素数的对数
#include <stdio.h>
int iss(int x,int y)
{
    int i,max;
    max=x>y?x:y;
    for(i=2;i<max/2;i++)
    {
        if(x%i==0||y%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=3;i<=n;i+=2)
    {
        if(iss(i,i+2))
        count++;
    }
    printf("%d",count);
}
