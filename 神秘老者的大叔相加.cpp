#include<bits/stdc++.h>
using namespace std;
char str_1[110];
char str_2[110];
int A[310];
int B[310];
int main(){
    scanf("%s%s",str_1+1,str_2+1);
    int n=strlen(str_1+1);
    int m=strlen(str_2+1);
    int len_A=0;
    int len_B=0;
    
    for(int i=n;i>=1;i--){
            A[len_A]=str_1[i]-'0';
            len_A++;
}
    for(int i=m;i>=1;i--){
            B[len_B]=str_2[i]-'0';
            len_B++;
}  
    int len=max(len_A,len_B);
    for(int i=0;i<len;i++){
        A[i]+=B[i];
        A[i+1]+=(A[i]/10);
        A[i]=A[i]%10;   
    }
    while(A[len]!=0){
        A[len+1]+=(A[len]/10);
        A[len]=A[len]%10;
        len++;
    }
    for(int i=len-1;i>=0;i--)cout<<A[i];   
    return 0;
}
