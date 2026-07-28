#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct node{
	string s1;
	string s2;
};

char fun(char ch)
{
	if(ch>='A'&&ch<='Z')
	{
		return ch+32;
	}
	return ch;
}

bool cmp(node a,node b)//结构体比较 
{
	return a.s2>b.s2;
}

int main()
{
	int n,i;
	string s;
	cin>>s>>n;
	getchar();
	if(s=="inc")
	{
		multiset<string> ss;
		for(i=0;i<n;i++)
			{
				string t;
				getline(cin,t);
				ss.insert(t);
			}
		multiset<string> ::iterator it=ss.begin();
		while(it!=ss.end())
		{
			cout<<*it<<endl;
			it++;
		}
	}
	else if(s=="dec")
	{
		vector<string> ss;
		for(i=0;i<n;i++)
			{
				string t;
				getline(cin,t);
				ss.push_back(t);
			}
		sort(ss.begin(),ss.end(),greater<string>() );
		for(i=0;i<n;i++)
			{
				cout<<ss[i]<<endl;
			}
	}
	else if(s=="ncinc")//忽略大小写的顺序 
	{
		vector<struct node> ss(n);
		for(i=0;i<n;i++)
			{
				string t,t1;
				getline(cin,t);
				t1.resize(t.size());
				transform(t.begin(),t.end(),t1.begin(),fun);//t1是全部转为小写的
				ss[i].s1=t;
				ss[i].s2=t1; 
			}
		sort(ss.begin(),ss.end(),cmp);
		for(i=n-1;i>=0;i--)
			cout<<ss[i].s1<<endl;
	}
	else{//忽略大小写的逆序 
		vector<struct node> ss(n);
		for(i=0;i<n;i++)
			{
				string t,t1;
				getline(cin,t);
				t1.resize(t.size());
				transform(t.begin(),t.end(),t1.begin(),fun);//t1是全部转为小写的
				ss[i].s1=t;
				ss[i].s2=t1; 
			}
		sort(ss.begin(),ss.end(),cmp);
		for(i=0;i<n;i++)
			cout<<ss[i].s1<<endl;
	}
}
