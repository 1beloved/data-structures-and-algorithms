#include <bits/stdc++.h>
using namespace std;
int haxi[55];
vector<int>v;
int find(int index)//找到n后面存在的最大数 
{
	int i,max=-1;
	for(i=0;i<v.size();i++)
	{
		if(v[i]>max) max=v[i];
	}
	return max;
}
int main()
{
	int n,count=0,i;
	stack<int>s;
	int max=-1;
	vector<int>res;
	while((scanf("%d",&n))!=EOF)
	{
		if(n>max) max=n;
		v.push_back(n);
		count++;
	}
	for(i=0;i<count;i++)
	{
		if(v[i]==max)//找到最大值 
		{
			res.push_back(v[i]);
			max=find(i+1);
		}else{//不是的话输入到结果里面 
			s.push(v[i]);
		}
	}
	while(!s.empty())//把栈里面的提取出来 
	{
		int t=s.top();
		res.push_back(t);
		s.pop();
	}
	for(i=0;i<res.size();i++)
		cout<<res[i]<<" ";
}
