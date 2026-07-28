#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	queue<int>q;
	while(t--)
	{
		string s;
		int t;
		cin>>s;
		if(s=="IN"){//如果是IN入队列 
			cin>>t;
			q.push(t); 
		}else if(s=="OUT"){
			if(!q.empty())//不为空 
				{
					cout<<q.front()<<" ";
					q.pop();
				}
			else cout<<"None"<<" ";
		}
	}
	
	
}
