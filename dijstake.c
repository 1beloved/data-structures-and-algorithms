#include <bits/stdc++.h>
using namespace std;

int G[27][20];
int n;
int fun()
{
	
	
}
int main()
{
	while(1)
	{
	cin>>n;
	if(n==0) break;
	memset(0,sizeof(G),sizeof(int));
	while(n--)
	{
		char ch;
		int x;
		cin>>ch>>x;
		while(x--)
		{
			char ch2;
			int distance;
			cin>>ch2>>distance;
			G[ch-'A'][ch2-'A']=distance;	
		}	
		
		
	}
	}
		
	
	
	
} 
