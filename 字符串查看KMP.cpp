#include <bits/stdc++.h>
using namespace std;
#define N 100
int next[N];
void Next(char *b)
{
	int i=0,k=0;
	next[0]=-1;	
	for(;i<strlen(b);){
		if(k==-1)
		{
			next[i]=0;
			k=0;
			i++;
		}
		else if(b[i]==b[k])
		{
			next[++i]=++k;
		}
		else k=next[k];
	}	
//	cout<<"nextÊý×éÊÇ:";
	for(i=0;i<strlen(b);i++)
	{
		cout<<next[i]<<" ";
	}
	cout<<endl;
}



int main()
{
	char a[N],b[N];
	cin>>a;
	Next(a);	
	
}
