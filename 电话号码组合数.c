#include <stdio.h>
#include <string.h>
char a[100];
char b[100][100];
char *p[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int count;
void hs(char *q,int index)
{
	if(*q==0) {
		strcpy(b[count],a);
		count++;
		puts(a);
		return;
	}
	char *t=p[*q-'0'];
//	puts(t);
	for(;*t;t++)
	{
		a[index]=*t;
		hs(q+1,index+1);
		a[index]=0;
	}
	
}

char ** letterCombinations(char * digits, int* returnSize)
{
	if(*digits=='\0'){
		*returnSize=0;
		return;
	}
	*returnSize=count;
	char **b;
	hs(digits,0);
	return b;
}


int main()
{
	int i,t;
	char *q,**p;
	letterCombinations("243",&t);
	printf("%d\n",count);
	for(i=0;i<t;i++)
	{
		puts(b[i]);
	}
}
