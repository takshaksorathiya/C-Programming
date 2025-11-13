#include <stdio.h>

int main() {
    int a[10], b[10], n, i;
    char d;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf(" %c%d", &d, &n);

    if(d == 'R' || d == 'r') {
        for(i = 0; i < 10; i++)
            b[i] = (i < n) ? 0 : a[i - n];
    } else {
        for(i = 0; i < 10; i++)
            b[i] = (i + n >= 10) ? 0 : a[i + n];
    }

    for(i = 0; i < 10; i++)
        printf("%d ", b[i]);
    return 0;
}