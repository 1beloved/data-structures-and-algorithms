#include <stdio.h>
#include <string.h>
int qiumax(int a,int b){
    if(a>=b){
        return a+2;
    }
    else{
        return b+2;
    }
}
char * addBinary(char * a, char * b){
    int l1=strlen(a);
    int l2=strlen(b);
    int max=qiumax(l1,l2);
    int i=l1-1,j=l2-1,k=max-2;
    int flag=0;
    char *p;
    p=(char*)malloc(sizeof(char)*max);
    p[0]='0';
    p[max-1]='\0';
    while(i>=0||j>=0){
        int num1=i>=0?a[i]-'0':0;
        int num2=j>=0?b[j]-'0':0;
        int sum=num1+num2+flag;
        p[k]='0'+sum%2;
        flag=sum/2;
        i--,j--,k--;
    }
    if(flag!=0){
        p[k]='1';
    }
    if(p[0]=='1'){
        return p;
    }
    else{
        return p+1;
    }
}

//lAIN
int main()
{
	puts(addBinary("101","11"));	
 } 
