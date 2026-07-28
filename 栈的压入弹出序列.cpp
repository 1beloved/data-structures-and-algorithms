#include <bits/stdc++.h>
using namespace std;
string s1,s2;
vector<int>v1;
vector<int>v2;
void fun()
{
	int i,sum1=0;
	for(i=0;i<s1.size();i++)
	{
		if(s1[i]!=',')
		{
			sum1=sum1*10+s1[i]-'0';
		}else{
			v1.push_back(sum1);
			sum1=0;
		}
	}
	v1.push_back(sum1);
	sum1=0;
	for(i=0;i<s2.size();i++)
	{
		if(s2[i]!=',')
		{
			sum1=sum1*10+s2[i]-'0';
		}else{
			v2.push_back(sum1);
			sum1=0;
		}
	}
	v2.push_back(sum1);
}

int main()
{
	cin>>s1>>s2;
	fun();
	int i=0,j=0;
	stack<int>s1;
	for(i=0;i<v1.size();i++)
	{
//		cout<<i<<" ";
		s1.push(v1[i]);
		while((!s1.empty())&&s1.top()==v2[j])
		{
			s1.pop();
			j++;
		}
//		cout<<endl;
	} 
	if(s1.empty())
	{
		cout<<"true";
	}else{
		cout<<"false";
	}
}
