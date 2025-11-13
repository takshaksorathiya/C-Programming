#include <stdio.h>

int main() {
    int a[10], i, j, x;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    for(i = 0; i < 10; i++) {
        if(a[i] == x) {
            for(j = i; j < 9; j++)
                a[j] = a[j + 1];
            break;
        }
    }

    for(i = 0; i < 9; i++)
        printf("%d ", a[i]);

    return 0;
}