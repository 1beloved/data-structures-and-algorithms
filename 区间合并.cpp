#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
	int i;
	cin>>n;
	vector<vector<int> >res(n);
	for(i=0;i<n;i++)
	{
		res[i].resize(2);
		cin>>res[i][0]>>res[i][1];
	}
	sort(res.begin(),res.end());
	int lastl,lastr;
	vector<vector<int> >v;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			lastl=res[i][0];
			lastr=res[i][1];
		}else if(lastr>=res[i][0]){
			lastr=max(lastr,res[i][1]);
		}else{
			cout<<lastl<<" "<<lastr<<endl;
			lastl=res[i][0];
			lastr=res[i][1];
		}	
	}
	cout<<lastl<<" "<<lastr<<endl;
}

