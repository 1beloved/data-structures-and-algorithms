#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(b,a%b); 	
	
}
int main()
{
	int fz,fm;
	int fz1=1,fm1=2;
	cin>>fz>>fm;
	if(fz==1)
	{
		cout<<fz<<"/"<<fm<<endl;
		return 0;
	}
	int k=1;
//	cout<<fz<<"/"<<fm<<endl;
	while(fz!=0&&fz!=1)
	{
		cout<<"第"<<k<<"轮:"<<endl;
		if(fm%fm1==0)//如果分母可约说明只要分子减就好了 
		{
			int t=fm/fm1;//分子乘这么多 
			fz1*=t;
			if(fz1<=fz)//如果小于就减 
			{
				cout<<fz1/t<<" "<<fm1*t<<endl;
				fz-=fz1;
			}//否则分母加1 但无论如何分母都要加1的因为减了一个数肯定不会重复的 
			fm1+=1;	
		}else{//如果不可约就要找最小公倍数 
			int t=gcd(fm,fm1);//最小公约数 
			if(t==1){//如果1的话他们就要分母相互乘
				int x=fm;//保留一个分母
				fm*=fm1;
				fz*=fm1;
				fm1*=x;
				fz1*=x;
				//现在分母相同
				if(fz1<=fz)
				{
						cout<<fz1<<" "<<fm1*t<<endl;
					fz-=fz1;
				} 
				fm+=1;
			}else{//最小公约数
				int x1=((fm1*fm)/t)/fm;//这是fz fm要乘的 
				int x2=((fm1*fm)/t)/fm1;//这是fz1 fm1要乘的
				fz*=x1;
				fz1*=x2;
				if(fz1<=fz)
				{
						cout<<fz1<<" "<<fm1*t<<endl;
				 fz-=fz1;	
				} 
				fm+=1;
			}
		}
		cout<<"分子分母为:";
		cout<<fz<<" "<<fm<<endl;
		
		
		fz1=1;//因为埃及数分子一直为1 
	}
	if(fz==1) cout<<fz<<"/"<<fm;
	
	
	
}
