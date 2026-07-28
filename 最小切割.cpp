#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string s;
public:
    /**
     * 
     * @param s string字符串 
     * @return int整型
     */
 
    bool ispal(string s,int begin,int end)
    {
        string ss=s.substr(begin,end-begin);
        string temp=ss;
        reverse(ss.begin(), ss.end());
        if(temp == ss)
        return true;
        else
        return false;
    }
    int minCut(string s) {
        // write code here
        int size=s.size()+1;
        vector<int> v;
        v.resize(size);
 
        for(int i=1;i<size;i++)
        v[i]=i-1;
 
        v[0]=0;
 
        for(int i=2;i<size;i++)
        {
        	display(v);
            for(int j=0;j<i;j++)
            {
                if(ispal(s,j,i))//判断是否为回文 
                {
                    if(j == 0)
                    v[i]=0;
                    else if(v[j]+1 < v[i])
                    v[i]=v[j]+1;               
                }
 
            }
            
        }
 
        return v[size-1];
    }
    void display(vector<int>&v)
    {
    	int i;
    	for(i=0;i<v.size();i++)
    	{
    		cout<<v[i]<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		Solution t;
	string s;
	cin>>s;
	t.s=s;
	cout<<t.minCut(t.s)<<endl;
	}
}
