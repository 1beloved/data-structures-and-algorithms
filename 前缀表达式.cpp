#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[501];
	fgets(s,501,stdin);
	int i=0,j=strlen(s)-1;
	 while(i<j)
	 {
	 	char ch=s[i];	
	 	s[i]=s[j];
	 	s[j]=ch;
	 	i++;j--;
	 }
	char *p=s;
	while(*p)
	{
		char *begin=p;
		while(*p!=' '&&*p)p++;//先找到第一个空格
		char *end=p-1;
		while(begin<end)
		{
			char ch=*begin;
			*begin=*end;
			*end=ch;
			begin++;end--;
		}
		while(*p==' '&&*p)p++;
	}	
	stack<double>t;//创建一个栈
	p=strtok(s," ");
	while(p!=NULL)
	{
		if(strcmp(p,"+")==0||strcmp(p,"-")==0||strcmp(p,"*")==0||strcmp(p,"/")==0)
		{
			double t1=t.top();
			t.pop();
			double t2=t.top();
			t.pop();
			if(strcmp(p,"+")==0)
			{
				t.push(t1+t2);
			}
			else if(strcmp(p,"-")==0)
			{
				t.push(t1-t2);
			}else if(strcmp(p,"*")==0)
			{
				t.push(t1*t2);
			}else{
				t.push(t1/t2);
			}
		}else{
			double x=atof(p);
			t.push(x);
		}
		p=strtok(NULL," ");	
	} 
	double x=t.top();
	printf("%f",x);
}
