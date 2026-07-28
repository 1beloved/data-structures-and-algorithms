#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int i;
	long long sum=0;
	for(i=0;i<n;i++)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1>a||y1>b||x2<0||y2<0)//如果左下角大于面积右上角或者右上角小于面积左下角 
		{
			continue;
		}
		if(x1<0)
		{
			x1=0;
		}
		if(y1<0)
		{
			y1=0;
		}
		if(x2>a)
		{
			x2=a;
		}
		if(y2>b)
		{
			y2=b;
		}	
		long long t=(x2-x1)*(y2-y1);
//		cout<<t<<endl;	
sum+=t;
		
	}
	cout<<sum;
	
 } 
