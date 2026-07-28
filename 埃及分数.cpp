#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a>>b;
 if(a==1||b%a==0)
  cout<<"1/"<<b/a;
 while(a!=1)
 {
	  c=b/a+1;
	  a=a*c-b;
	  b=b*c;
	  cout<<"1/"<<c;
	  if(a>1)
	   cout<<"+";
	  if(a==1||b%a==0)
	  {
	   cout<<"1/"<<b/a;
	   a=1;
	  }
 }
 return 0;
}
