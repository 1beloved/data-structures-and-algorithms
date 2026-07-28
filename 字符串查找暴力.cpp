#include <bits/stdc++.h>
using namespace std;

int fun(string s1,string s2)
{
	int i,count=1;
	for(i=0;i<s1.size();i++)
	{
		int start=i,j=0;
		while(start!=s1.size()&&j!=s2.size()&&s1[start]==s2[j])
		{
			start++;
			j++;
		}
		if(j==s2.size())
		{
			printf("第%d次出现的位置是%d\n",count,i);
			count++;
		}
	}
	return -1;
}


int main()
{
	string s1,s2;
	cin>>s1>>s2;
	fun(s1,s2);
}
