#include <bits/stdc++.h>
using namespace std;
#define N 100005
int main()
{
	vector<int>v;
	int t;
	while((scanf("%d",&t))!=EOF){
		v.push_back(t);
	}
	int len=v.size();
	int i,max=-1;
	for(i=0;i<len;i++)
	{
		int l=i,r=i;//以v[i]为单位左右查找
		while(l>0)
		{
			if(v[i]<=v[l-1])
			{
				l--;
			}else break;
		}
		while(r<len-1)
		{
			if(v[i]<=v[r+1])
			{
				r++;
			}else break;
		}
//		cout<<l<<" "<<r<<endl;
		if((r-l+1)*v[i]>max) max=(r-l+1)*v[i];
		
	}
	cout<<max;
	
}
