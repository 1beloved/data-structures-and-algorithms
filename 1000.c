//对于输入的每对a和b，你需要依次输出a、b的和。
//
//如对于输入中的第二对a和b，在输出中它们的和应该也在第二行


#include <stdio.h>
int main(){
    int a, b;
    while(scanf("%d %d",&a, &b) != EOF){
        printf("%d\n", a + b);
    }
    return 0;
}
