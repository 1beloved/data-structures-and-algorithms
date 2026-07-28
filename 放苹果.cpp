#include<bits/stdc++.h>  
using namespace std;
int main()
{
	int t, m, n, a[15][15];
	cin >> t;
	while(t--)
	{
		cin >> m >> n;
		for(int i = 0; i <= m; ++i)
			for(int j = 1; j <= n; ++j)
			{
				if(i == 0 || i == 1 || j == 1)
					a[i][j] = 1;
				else if(i < j)
					a[i][j] = a[i][i];
				else
					a[i][j] = a[i][j-1] + a[i-j][j];
			}
		cout << a[m][n] << endl;
	}
	return 0; 
}

