#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void * n1, const void * n2){
    if (*(int *)n1 < *(int *)n2){
		return 1;
	} else if (*(int *)n1 > *(int *)n2){
		return -1;
	} else {
		return 0;
	}
}


int main(void){

    int n;

    scanf("%d", &n);

    int a[n], i;

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmpnum);

    int Alice = 0, Bob = 0;

    i = 0;
    while(i < n){
        if(i % 2 == 0){
            Alice += a[i];
        } else {
            Bob += a[i];
        }
        i++;
    }

    printf("%d\n", Alice - Bob);

    return 0;
}

