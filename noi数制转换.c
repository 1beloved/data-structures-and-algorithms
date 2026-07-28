#include <stdio.h>
#include <string.h>
#include <math.h>
char haxi[18]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; 
typedef long long int ll;
void turnlo(char *a)
{
	while(*a)
	{
		if(*a>='a'&&*a<='z')
		{
			*a-=32;
		}
		a++;
	}
}
ll turnten(int n,char *a)//先转为十进制 
{
	char *p=a+strlen(a)-1;
	ll sum=0;
	int len=strlen(a);
	int i;
	for(i=0;i<len;i++)
	{
		int t;
		if(*p>='A'&&*p<='Z')
		{
			t=(*p-'A')+10;
		}else{
			t=*p-'0';
		}
		sum+=t*(ll)pow(n,i);
		p--;
	}
	return sum;
}

void turnL(ll sum,char *a,int n)
{
	int i=0;
	char *p=a;
	while(sum>=n)
	{
		a[i++]=haxi[sum%n];
		sum/=n;
	}
	if(sum!=0)
	{
		a[i++]=haxi[sum];
	}
	while(i>0)
	{
		printf("%c",a[--i]);
	}
	
}
int main()
{
	int f,l;
	char a[1001];
	scanf("%d %s %d",&f,a,&l);
	turnlo(a);//先转为小写 
	if(f==l)
	{
		puts(a);
	}
	else{
		ll sum=turnten(f,a);
//		printf("在这%lld\n",sum);
		if(sum==0) printf("0");
		else{
			char b[10001]={0};//现在要把a的十进制转为l进制 
		turnL(sum,b,l);
		}
		
	}
	
}
