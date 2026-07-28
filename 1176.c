//数论中有许多猜想尚未解决，其中有一个被称为“角谷猜想”的问题，
//该问题在五、六十年代的美国多个著名高校中曾风行一时，这个问题是这样描述的：
//任何一个大于一的自然数，如果是奇数，则乘以三再加一；
//如果是偶数，则除以二；得出的结果继续按照前面的规则进行运算，最后必定得到一。现在请你编写一个程序验证他的正确性


//输出验证“角谷猜想”过程中的奇数，最后得到的1不用输出；
//每个测试题输出一行；每行中只有两个输出之间才能有一个空格；
//如果没有这样的输出，则输出：No number can be output !。
#include <stdio.h>
#include <stdio.h>
#include <math.h>
void  EX(int n,int *count)
{
	if(n%2) (*count)++;
	if(n<=1) return;
	EX(n/2,count);
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int t,count=0;
        scanf("%d",&t);
        EX(t,&count);
		if(count==1||t<=1)
		{
			printf("No number can be output !\n");
			continue;
		}
		while(t>1)
        {
			if(t%2){printf("%d ",t);t=t*3+1;}
			else t/=2;
		}
		putchar(10); 
    }
}
