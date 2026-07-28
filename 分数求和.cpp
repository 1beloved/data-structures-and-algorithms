#include <bits/stdc++.h>
using namespace std;
typedef long long int llI; 

llI fun(llI a,llI b)//最大公约数 
{
	llI c=0;
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
int main()
{
	llI t,i,fz,fm;
	cin>>t;
	for(i=0;i<t;i++)
	{
		if(i==0)
		{
			scanf("%lld/%lld",&fz,&fm);//如果第一次先给分子分母 
			llI MaxFm=fun(fz,fm);//再化成最简 
			fz/=MaxFm;
			fm/=MaxFm;
		}
		else{
			llI fz1,fm1;
			scanf("%lld/%lld",&fz1,&fm1);
			fz=(fz*fm1+fz1*fm);
			fm=fm1*fm;
			llI MaxFm=fun(fz,fm);//再化成最简 
			fz/=MaxFm;
			fm/=MaxFm;
		}
	}	
	if(fm!=1)
		printf("%lld/%lld",fz,fm);
	else cout<<fz;
}
