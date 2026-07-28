#include <bits/stdc++.h>
using namespace std;
void find(vector<double> &v)
{
	int i;
	for(i=0;i<10;i++)
	cout<<v[i]<<" ";
	cout<<endl;
}
int main()
{
	char s[501];
	fgets(s,501,stdin);
	vector<double> v(100);
	int index=0;
	char *p=strtok(s," ");
	while(p!=NULL)
	{
		char x=*p;
		if(x=='+')
		{
			double a=v[index-1];
			index--;
			double b=v[index-1];
			index--;
			double c=a+b;
			v[index++]=c;
		}else if(x=='-')
		{
			double a=v[index-1];
			index--;
			double b=v[index-1];
			index--;
			double c=b-a;
			v[index++]=c;
		}else if(x=='*')
		{
			double a=v[index-1];
			index--;
			double b=v[index-1];
			index--;
			double c=a*b;
			v[index++]=c;
		}else if(x=='/')
		{
			double a=v[index-1];
			index--;
			double b=v[index-1];
			index--;
			double c=b/a;
			v[index++]=c;
		}
		else{
			double a=atof(p);
			v[index++]=a;
		}
//		find(v);
		p=strtok(NULL," ");	
	}
	cout<<v[index-1];
}
