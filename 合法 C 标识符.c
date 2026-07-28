#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isLegalIdentifier(char *str) {
    char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default", "do", 
                             "double", "else", "enum", "extern", "float", "for", "goto", "if", 
                             "int", "long", "register", "return", "short", "signed", "sizeof", "static", 
                             "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    int i;
    for ( i = 0; i < 32; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 0;  // 是关键字，不合法
        }
    }
    i=0;
    if(!(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'||str[i]=='_'))
    return 0;
    for (i = 1; i < strlen(str); i++) {
        if (!(str[i]>='0'&&str[i]<='9'||str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'||str[i]=='_')) {
            return 0; 
        }
    }
    
    return 1; // 符合标识符的规则，合法
}

int main() {
    char str[21];
    scanf("%s", str);
    
    if (isLegalIdentifier(str)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}


