#include <stdio.h>
int main()
{
	int const i=1;//
	const int j=1;//差不多，都不能修改变量的值
	
	//常量指针 
	const int * num;
	int const * num;
	//1.常量指针说的是不能通过这个指针改变变量的值，但可以通过其他的引用来改变变量的值。 
	int cnt=5;
	const int* num=&cnt;
	cnt=6;
	//2.常量指针指向的值不能改变，但这并不意味着指针本身不能改变，常量指针可以指向其他的地址。
	int cnt=5;
	int tmp=6;
	const int* num=&cnt;
	num=&tmp;
	
	//指针常量
	int *const num;
	//1.指针常量是指指针本身是个常量，不能再指向其他的地址
	//需要注意的是，指针常量指向的地址不能改变
	//但是地址中保存的数值是可以改变的
	//可以通过其他指向改地址的指针来修改
	int cnt=5;
	int *tmp=&cnt;
	int* const num=&cnt;
	*tmp=6;
	
	//区分常量指针和指针常量的关键就在于星号的位置，我们以星号为分界线。
	//如果const在星号的左边，则为常量指针
	//如果const在星号的右边则为指针常量
}
