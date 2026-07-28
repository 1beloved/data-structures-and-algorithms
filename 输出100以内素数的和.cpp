//求100以内的所有素数之和
#include<stdio.h>
int fun(int i)
{
	int j;
	for(j=2;j*j<=i;j++)
		if(i%j==0)return 0;
	return i;
}
	int main()
 {
 	int a,b,c=0;
	 for(a=2;a<100;a++) 
	 {
	   if(fun(a)>0)c+=fun(a);
	 }printf("%d",c);
 }
