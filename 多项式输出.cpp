#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for(int i = n; i >= 0; i--)
    {
        cin >> a;
        if(a > 0)
        {
            if(i != n)
                cout << '+';
        }
        else if(a < 0)
            cout << '-';
        else
            continue;
        a = abs(a);
        if(a > 1 || a == 1 && i == 0)
            cout << a;
        if(i >= 1)
        {
            cout << 'x';
            if(i > 1)
                cout << '^' << i;
        }
    }
    return 0;
}

