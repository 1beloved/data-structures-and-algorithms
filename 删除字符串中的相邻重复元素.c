#include <stdio.h>
#include <malloc.h>
#include <string.h>

char * removeDuplicates(char * s){
   int n = strlen(s),i;
    char* stk = malloc(sizeof(char) * (n + 1));
    int retSize = 0;
    for ( i= 0; i < n; i++) {
        if (retSize > 0 && stk[retSize - 1] == s[i]) {
            retSize--;
        } else {
            stk[retSize++] = s[i];
        }
    }
    stk[retSize] = '\0';
    return stk;
}


int main()
{
	printf("%s",removeDuplicates("bbb"));
 } 
