#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<char> a;
	while(1)
	{
		char t;
		cin>>t;
		if(t!='E') a.push_back(t);
		else break;
	} 
	int i,F=0,H=0;
	for(i=0;i<a.size();i++)
	{
		if(a[i]=='W') F++;
		else H++;
		if(F>=11&&F-H>=2||H>=11&&H-F>=2)
		{
			cout<<F<<":"<<H<<endl;
			F=0;H=0;
		}
	}
		cout<<F<<":"<<H<<endl;
		F=0;H=0;
		cout<<endl;
	for(i=0;i<a.size();i++)
	{
		if(a[i]=='W') F++;
		else H++;
		if(F>=21&&F-H>=2||H>=21&&H-F>=2)
		{
			cout<<F<<":"<<H<<endl;
			F=0;H=0;
		}
	}
		cout<<F<<":"<<H<<endl;
}
