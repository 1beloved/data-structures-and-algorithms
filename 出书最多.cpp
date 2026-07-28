#include <bits/stdc++.h>
#include <map>
using namespace std;
struct node
{
	int count;
	int array[1000];
};
int main()
{
	map<char,node>m;
	int n;
	cin>>n;
	int max=-1;
	char x;
	while(n--)
	{
		int n;
		char s[30];
		scanf("%d %s",&n,s);
		int i;
		for(i=0;i<strlen(s);i++)
		{
			char t=s[i];
			m[t].array[m[t].count++]=n; 
			if(m[t].count>max){
				 max=m[t].count;
				 x=t;
			}
		}
	}
	int i;
	cout<<x<<endl;
	struct node t=m[x];
	cout<<t.count<<endl;
	for(i=0;i<t.count;i++)
	{
		cout<<t.array[i]<<endl;
	}
} 
