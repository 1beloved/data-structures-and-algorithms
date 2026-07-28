#include <bits/stdc++.h>
using namespace std;

int Level(char ch)
{
	switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '(':
        return 0;
        default:return -1;
    };
}

double number(char *s,int &index)
{
	double t1=0;
	double t2=0;
	while(s[index]>='0'&&s[index]<='9')
	{
		t1=t1*10+s[index]-'0';
		index++;
	}
	if(s[index]=='.')
	{
		index++;
		double p=0.1;
		while(s[index]>='0'&&s[index]<='9')
		{
			t2+=p*(s[index++]-'0');
			p=p*0.1;	
		}
	}
//	cout<<t1+t2;
	return t1+t2;
}
double op(char r,double a,double b)
{
	cout<<a<<" "<<b<<endl; 
	if(r=='+'){
		return a+b;
	}else if(r=='-'){
		return a-b;
	}else if(r=='*'){
		return a*b;
	}else{
		return a/b;
	}
}
void fun(char *s)
{
	int i;
	stack<double>s1;//放数字 
	stack<char>s2;//放字符 
	s2.push('#');
	int flag=0;//用来记录是负号还是减号 
	for(i=0;i<strlen(s);)
	{
//		cout<<"i在"<<i<<endl;
		if(s[i]=='-')
		{
			if(i==0||s[i-1]=='(')
				flag=1;	
			else{
				 flag=0;
			while(Level(s2.top())>=Level(s[i]))
			{
				
				double t2=s1.top();
				s1.pop();
				double t1=s1.top();
				s1.pop();
				char f=s2.top();
				s2.pop();
				double t=op(f,t1,t2);
				s1.push(t);
			 } 
			 s2.push(s[i]);
			}
			i++; 
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			double t=number(s,i);
			if(flag==1)
			{
				t=-t;
			}
			flag=0;
			s1.push(t);
		}
		else if(s[i]==')')//右括号 
		{
			flag=0;
			while(s2.top()!='(')
			{
				double t2=s1.top();
				s1.pop();
				double t1=s1.top();
				s1.pop();
				char f=s2.top();
				s2.pop();
				double t=op(f,t1,t2);
				s1.push(t);
			}
			s2.pop();
			i++;
		}
		else if(s[i]=='(')//左括号 
		{
//			flag=1;
			s2.push(s[i]);
			i++;
		}
		else{//其他运算符
			flag=0; 
//			cout<<"s2的优先级是:"<<Level(s2.top())<<endl;
//				cout<<"s[i]的优先级是:"<<Level(s[i])<<endl;
			while(Level(s2.top())>=Level(s[i]))
			{
				
				double t2=s1.top();
				s1.pop();
				double t1=s1.top();
				s1.pop();
				char f=s2.top();
				s2.pop();
				double t=op(f,t1,t2);
				s1.push(t);
			 } 
			 s2.push(s[i]);
			 i++;
		}
//			if(!s1.empty()) cout<<"s1的栈顶"<<s1.top()<<endl;
//			if(!s2.empty()) cout<<"s2的栈顶"<<s2.top()<<endl; 
	}
	while(s2.top()!='#')
	{
				double t2=s1.top();
				s1.pop();
				double t1=s1.top();
				s1.pop();
				char f=s2.top();
				s2.pop();
				double t=op(f,t1,t2);
				s1.push(t);
	}
//	cout<<s1.top();
	
	
	
	
	
}

int main()//-1+(-10+(7-3)*2)/2
{
	char s[1000];
	gets(s);
	fun(s);
}
