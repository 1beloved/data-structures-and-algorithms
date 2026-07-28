#include <bits/stdc++.h>

using namespace std;

int fun(int n)
{
	if(n<10) return n;
	int t=0;
	while(n)
	{
		t+=n%10;
		n/=10;
	}
	if(n>10) t=fun(t);
	else return t;
}
int main()
{
	string s;
	cin>>s;
	int res=0,i;
	for(i=0;i<s.size();i++)
	{
		res+=s[i]-'0';
		res=fun(res);
	}
	cout<<res;
}
