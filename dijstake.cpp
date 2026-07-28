#include <bits/stdc++.h>
using namespace std;
int G[27][20];
int n;
void display();
int fun()
{
	int dmin[27];
	for(int i=0;i<n;i++) dmin[i]=INT_MAX;
	int path[27]={0};
	int visted[27]={0};
	queue<int>q;
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		if(G[0][i]<dmin[i])
		{
//			printf("%C",i+'A');
			dmin[i]=G[0][i];
			path[i]=0;
			q.push(i);
		}
	}
	path[0]=-1;
	visted[0]=1;
//	for(int i=1;i<n;i++) cout<<dmin[i]<<" ";
//	cout<<endl;
	while(!q.empty())
	{
		int t=q.front();
		visted[t]=1;
		q.pop();
		int i;	printf("%c:\n",t+'A');
		for(i=0;i<n;i++)
		{
		
			if(G[t][i]!=INT_MAX&&dmin[t]+G[t][i]<dmin[i]&&visted[i]==0)
			{
				printf("dmin(%d):%c¸üÐÂÎª%d+%d=%d\n",dmin[i],i+'A',dmin[t],G[t][i],dmin[t]+G[t][i]);
				dmin[i]=dmin[t]+G[t][i];
				path[i]=t;
				q.push(i);
			}
			
		}	
//		display();
//		for(int i=1;i<n;i++) cout<<dmin[i]<<" ";
//			cout<<endl;
	}
	for(int i=1;i<n;i++) sum+=dmin[i];
		for(i=0;i<n;i++)
		{
			cout<<path[i]<<" ";
		}
	return sum;
}
void display()
{
	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(G[i][j]==INT_MAX) cout<<"* ";
			else cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
}
void me()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			G[i][j]=INT_MAX;
		}
	}
}
int main()
{
	while(1)
	{
		cin>>n;
		if(n==0) break;
		me();
		display();
		for(int i=0;i<n-1;i++)
		{
			char ch;
			int x;
			cin>>ch>>x;
			while(x--)
			{
			char ch2;
			int distance;
			cin>>ch2>>distance;
			G[ch-'A'][ch2-'A']=G[ch2-'A'][ch-'A']=distance;	
			}
	
				
		}	
		display();
		cout<<fun();
		int i;
	
	}
		
	
	
	
} 
