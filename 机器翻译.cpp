#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count=0,m,n;
	cin>>m>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}		
	vector <int >s;
	vector<int>::iterator it=s.begin();
	s.push_back(a[0]);
	count=1;
	for(i=1;i<n;i++)
	{
		it=find(s.begin(),s.end(),a[i]);
		if(it!=s.end())//在内存中找到了 
		{
			continue;
		}
		else{//没找到 
			if(s.size()==m)//如果内存满了 
			{
				s.erase(s.begin());
				s.push_back(a[i]);
				count++;
			}
			else{
				s.push_back(a[i]);
				count++;
			}
		}
	}
	printf("%d",count);
} 
