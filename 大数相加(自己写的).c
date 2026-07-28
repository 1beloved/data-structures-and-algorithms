#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{
	char a[500],b[500],c[1000];
	gets(a);
	gets(b);
	int index=0;
	int i=strlen(a)-1,j=strlen(b)-1;
	int flag=0;
	index=998;
	c[999]='\0';
	for(;i>=0&&j>=0;i--,j--)
	{
		int k=a[i]-'0'+b[j]-'0'+flag;
		c[index]=k%10+'0';
		flag=k/10;
		index--;
	}
	if(i>=0&&j<0)//说明A比B长
	{
		while(i>=0)
		{
			int k=a[i]-'0'+flag;
			c[index]=k%10+'0';
			flag=k/10;
			index--;
			i--;
		}
		if(flag==1){
			 c[index]=1+'0';	
			  strcpy(c,c+index);
		}
		else strcpy(c,c+index+1);
	} 
	else if(i<0&&j>=0)//说明B比A长
	{
		while(j>=0)
		{
			int k=b[j]-'0'+flag;
			c[index]=k%10+'0';
			flag=k/10;
			index--;
			j--;
		}
		if(flag==1){
			 c[index]=1+'0';	
			  strcpy(c,c+index);
		}
		else strcpy(c,c+index+1);
	} 
	else{//相同长 
		if(flag==1){
			 c[index]=1+'0';	
			  strcpy(c,c+index);
		}
		else strcpy(c,c+index+1);
	}
	char *p=c;
	while(*p=='0'&&*p) p++;
	strcpy(c,p);
	puts(c);
	
}
