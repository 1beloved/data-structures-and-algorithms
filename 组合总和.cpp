#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int sum=0;
vector<vector<int> >r(100);
void fun(vector<int>& candidates, int target,int k,vector<int>&res,int count)
{		
	int i;
	if (target <= 0)
	{

		if (target == 0)
		{
			for (i = 0; i < count; i++)
			{
				cout << res[i] << " ";
			}
//			for(i=0;i<count;i++)
//				r[sum][i]=res[i];
//			sum++;
			cout << endl;
		}
		return;
	}
	for (i = k; i < candidates.size(); i++)
	{
		if (target - candidates[i] >= 0)
		{
			res[count] = candidates[i];
			fun(candidates, target - candidates[i], i+1 , res,count+1);
			res[count] = 0;
		}
	}



}

int main()
{

	int i,n;
	cin>>n;
	vector <int>a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	vector<int>res(n);
	fun(a, 8,0,res,0);
}
