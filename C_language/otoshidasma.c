#include <stdio.h>

int main(void){

    int n, sum;

    scanf("%d %d", &n, &sum);

    int i, j, k;

    for(i = n; i >= 0; i--){
        for(j = n - i; j >= 0; j--){
            for(k = n - (i + j); k >= 0; k--){
                if(n == (i+j+k) && sum == (10000 * i + 5000 * j + 1000 * k)){
                    printf("%d %d %d\n", i, j, k);
                    return 0;
                }
            }
        }
    }
    
    printf("-1 -1 -1\n");
    return 0;
}