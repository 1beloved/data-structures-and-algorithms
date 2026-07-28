#include <bits/stdc++.h>
using namespace std;
static const double PI=3.1415;
class yuan{
	private:
		double bj;
	public:
		yuan()
		{
			this->bj=0;
		}
		yuan(double r)
		{
			this->bj=r;
		}
		double ymj()
		{
			return PI*this->bj*this->bj;
		}
	
};
double sumarea(yuan array[],int n)
{
	int i;
	double sum=0;
	for(i=0;i<n;i++)
		sum+=array[i].ymj();
	return sum;
}
int main()
{
	yuan array[]={yuan(1.1),yuan(2.1),yuan(3.2)};
	cout<<sumarea(array,3);
}
