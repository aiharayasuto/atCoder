#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    int a[n];
    int i = 0, oddflag = 0, count = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 != 0){
            oddflag = 1;
        }
    }

    while(1){
        if(oddflag == 0){
            count++;
            for(i = 0; i < n; i++){
                a[i] = a[i] / 2;
                if(a[i] % 2 != 0){
                    oddflag = 1;
                }
            }
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}