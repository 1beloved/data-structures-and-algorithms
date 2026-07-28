#include <bits/stdc++.h>
using namespace std;

class y{
	private:
		double r;
		static const double PI=3.1415;
	public:
		y()
		{
			this->r=0;
		}
		y(double bj)
		{
			this->r=bj;
		}
		double area()
		{
			return this->r*PI*this->r;
		}
		//析构函数 ~类名
		~y()
		{
				
		} 
};
//形式为class + 子类名 : 控制访问(public,protected,private)  父类名 
class yz:public y{//
	private:
		double hegiht;
	public:
		yz(double r,double height):y(r)//如果父类的数据成员为private的话,子类不能使用只能用参数列表方式赋值 
		{//父类的数据成员为public/protected,子类可以直接用this->数据成员 
			this->hegiht=height;
		}
		double tg()
		{
			return this->hegiht*this->area();
		}
		~yz()
		{
			
		}
};

int main()
{
	yz t(1,2);
	cout<<t.tg()<<endl;	
}
