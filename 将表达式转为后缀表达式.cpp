#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<char>s1;//存放运算符 
	stack<char>s2;//存放操作数跟运算符 
	string s;
	cin>>s;
	int i;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]==')')
		{
			if(s1.empty())//如果栈为空直接入栈 
			{
				s1.push(s[i]);
			}
			
		}else{//数直接入栈 
			s2.push(s[i]);
		}
		
		
		
	}
	
	
	
	
	
}
