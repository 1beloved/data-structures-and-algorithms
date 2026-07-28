#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int>s;
	int n,m;
	scanf("%d%d",&n,&m);
	int i;
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		s.insert(t);
	}
	set<int>::iterator it=s.begin();
	for(i=0;i<m-1&&it!=s.end();i++)
	{
		it++;	
	} 
	if(it==s.end())
	{
		printf("NO RESULT");
	}else{
		printf("%d",*it);
	}
}
