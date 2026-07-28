#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> yuesefeng(int n,int m);
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> out;
	out=yuesefeng(n,m);
	int i,len=out.size();
	for(i=0;i<len;i++)
		cout<<out[i]<<" ";
	system("pause");
}
vector<int> yuesefeng(int n,int m)//n代表初始人数，m代表初始号码
{
	vector<int> out;
	list<int> in;
	list<int>::iterator pos;
	int i;
	for(i=1;i<=n;i++)
		in.push_back(i);
	pos=in.begin();
	int kk=m;
    while(in.size()!=0)
	{	
		if(kk!=1)
		  {
			  pos++;
			  kk--;
		   if(pos==in.end())//注意要判断是否到尾部了，到尾部就指向头部
			pos=in.begin();
		   }
		else
		{
			out.push_back(*pos);//到数了，点到的人保存到输出
			pos=in.erase(pos);///将此人从列表中删除，注意erase返回的是下个人的指针
			if(pos==in.end())
				pos=in.begin();
		}	    
	}
	return out;
}
