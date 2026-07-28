#include<iostream>
using namespace std;
#include <string.h>
#include <string>
class student{//class就是类  student就是类名 
								//类内     类外
	public://权限   公共权限    可以访问    可以访问 
//	protected:   	保护权限    可以访问 	 不可以访问 
//	private:   		私人权限     可以访问 		 不可以访问 
	
//		属性和行为都称为成员 
		//属性     ->     成员属性   /成员变量 
		char name[100];
		int age;
//		void fun1()
//		{
//			printf("请输入学生的姓名和年龄:");
//		}
		//行为->  成员函数   成员方法 


		void fun2(char *name1,int age1)//行为 
		{
			strcpy(name,name1);
			age=age1;
		}
	void print()//行为 
	{
		printf("姓名是:%s  年龄%d",name,age);
	}
};

int main()
{
	student zmq;
//	zmq.fun1();
	zmq.fun2("嘎嘎",123);
	zmq.print();
}
