#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void * n1, const void * n2){
    if (*(int *)n1 > *(int *)n2){
		return 1;
	} else if (*(int *)n1 < *(int *)n2){
		return -1;
	} else {
		return 0;
	}
}

int main(){

    int n;

    scanf("%d", &n);

    int i, d[n];

    for(i = 0; i < n; i++){
        scanf("%d", &d[i]);
    }

    qsort(d, n, sizeof(int), cmpnum);

    int count = 1;

    for(i = 0; i < n-1; i++){
        if(d[i] != d[i+1]){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
