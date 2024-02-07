#include <stdio.h>

int main(void){
    
    int a,b,c,x,n = 0;

    scanf("%d%d%d%d", &a, &b, &c, &x);

    int i, j, k;

    for(i = 0; i <= a; i++){
        for(j = 0; j <= b; j++){
            for(k = 0; k <= c; k++){
                if((500 * i + 100 * j + 50 * k) == x){
                    n++;
                }
            }
        }
    }

    printf("%d\n", n);

    return 0;
}