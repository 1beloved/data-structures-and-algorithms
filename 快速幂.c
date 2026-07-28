#include <stdio.h>
#include <math.h>
#define N 1e9+7
int a[33];
typedef long long int ll;
int fun(ll a,ll b,ll mod)
{
	ll res=1;
	while(b)
	{
		if(b&1)
		{
			res=(res*a)%mod;
		}
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
}

int main()
{
	ll a,b,mod;
	scanf("%lld%lld%lld",&a,&b,&mod);
	printf("%lld",fun(a,b,mod));
}
