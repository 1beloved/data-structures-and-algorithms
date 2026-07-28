#include <stdio.h>
int main()
{
	int a[9];
	char s[100];
	gets(s);
	int i=0,index=0;
	a[0]=s[0]-'0';
	a[1]=s[2]-'0';
	a[2]=s[3]-'0';
	a[3]=s[4]-'0';
	a[4]=s[6]-'0';
	a[5]=s[7]-'0';
	a[6]=s[8]-'0';
	a[7]=s[9]-'0';
	a[8]=s[10]-'0';
	int sum=0;
	for(i=0;i<9;i++)
	{
		sum+=(i+1)*a[i];
	}
	sum%=11;
	int flag=0;
	if(sum==10) {
		flag=1;
	}
	if(flag)//˵ΪX 
	{
		if(s[12]=='X') printf("Right");
		else 
		{
			s[12]='X';
			printf("%s",s);
		}
	}else{
		if(s[12]-'0'==sum) printf("Right");
		else 
		{
			s[12]=sum+'0';
			printf("%s",s);
		}
	}
	
}
