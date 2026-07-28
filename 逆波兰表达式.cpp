 #include <bits/stdc++.h>
 using namespace std;
 int evalRPN(vector<string>& tokens) {
        int i;
        stack<int>s;
        for(i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                int t1=s.top();
                s.pop();
                int t2=s.top();
                s.pop();
                int t;
                if(tokens[i]=="+")
                {
                    t=t1+t2;
                }else if(tokens[i]=="-"){
                    t=t2-t1;
                }else if(tokens[i]=="*"){
                    t=t1*t2;
                }else{
                    t=t2/t1;
                }
                cout<<t;
                s.push(t);
            }else{
                const char *t=tokens[i].c_str();
                int ch=atof(t);
                s.push(ch);
            }
//            cout<<s.top();
        }
        int t=s.top();
        return t;
    }
    
    int main()
    {
    	vector<string>s;
    	int i;
    	string t;
    	while(1)
    	{
    		cin>>t;
    		if(t=="\n") break;
    		s.push_back(t);
		}
		evalRPN(s);
	}
