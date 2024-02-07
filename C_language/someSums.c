#include <stdio.h>

int main(void){
    
    int n, a, b;

    scanf("%d %d %d", &n, &a, &b);

    int i, tmp = 0, sum = 0, allSum = 0;
    for(i = 1; i <= n; i++){
        sum = 0;
        tmp = i;
        while(tmp != 0){
            sum += (tmp % 10);
            tmp /= 10;
        }
        if(sum >= a && sum <= b){
            allSum += i;
        }
    }

    printf("%d\n", allSum);

    return 0;
}