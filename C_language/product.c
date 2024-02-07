#include <stdio.h>

int main(void){
    int a, b;
    char * ans;

    scanf("%d %d", &a, &b);

    if(a % 2 == 0 || b % 2 == 0){
        ans = "Even";
    } else {
        ans = "Odd";
    }

    printf("%s\n", ans);

    return 0;
}