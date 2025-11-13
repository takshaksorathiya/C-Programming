#include <stdio.h>

int main() {
    int a[5], b[10], i, j = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        b[i]=0;
    }
    for(i = 0; i < 5; i++) {
        b[j] = a[i];
        j += 2;
    }
    for(i = 0; i < 10; i++)
        printf("%d ", b[i]);
    return 0;
}
