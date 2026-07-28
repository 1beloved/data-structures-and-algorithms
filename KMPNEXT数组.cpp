#include <bits/stdc++.h>
using namespace std;
#define N 100
int next[N];
void Next(char *b)
{
	int len=strlen(b);
	next[0] = 0;
    int k = 0; //k = next[0]
    int i = 1;
    while(i < len){
        if(b[i] == b[k]){
            next[i++] = ++k; //next[j+1] = k+1;
        }else{
            if(k > 0)k = next[k-1]; //k = next[k-1]
            else{
                next[i++] = k; //next[j+1] = 0 回溯到头了，找不到相同前缀，则最大相同前后缀长度=0
            }
        }
    }

}

int main()
{
	char a[N];
	gets(a);
	Next(a);
	char b[N];
	gets(b);
	int i=0,j=0,len=strlen(b);
	while(j<strlen(b)&&i<strlen(a))
	{
		cout<<i<<" "<<j<<endl;
		if(a[i]==b[j]||i==-1){
			i++;
			j++;
		}else{
			i=next[i]+1;
		}
	}
	printf("%d ",i-j);
 } 
