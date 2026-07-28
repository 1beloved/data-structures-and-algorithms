#include <bits/stdc++.h>
using namespace std;


 int minCut(string s) {
    vector<int>dp(s.size()+1,INT_MAX);
        dp[0]=-1;
        int count=0;
        for(int i = 0;i<2*s.size()-1;i++){
            int l = i/2;
            int r = l+i%2;
            while(l>=0&&r<s.size()&&s[l]==s[r]){
//            	count++;
                dp[r+1]=min(dp[r+1],dp[l]+1);//从l处砍一刀,更新值
                l--;
                r++;
            }
        }
//        	cout<<"计算了"<<count<<"次"<<endl;
        return dp[dp.size()-1];

    }

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<minCut(s)<<endl;
	}

}
