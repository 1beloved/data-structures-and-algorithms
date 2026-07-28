#include <stdio.h>
#include <string.h>
int romanToInt(char * s){
    int count=0,num[100]={0},i,sum=0,*p;
    while(*s)
    {
    	if(*s=='I') num[count++]=1;
    	if(*s=='V') num[count++]=5;
    	if(*s=='X') num[count++]=10;
    	if(*s=='L') num[count++]=50;
    	if(*s=='C') num[count++]=100;
    	if(*s=='D') num[count++]=500;
    	if(*s=='M') num[count++]=1000;
    	s++;
	}
	p=num+count-1;
	sum=*p;
    while(p>num)
    {
    	if(*p>*(p-1)) sum-=*(p-1);
    	else sum+=*(p-1);
		p--;
	}
	return sum;
}

int main()
{
	char a[100];
	gets(a);
	printf("%d",romanToInt(a));
} 
