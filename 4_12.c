#include <stdio.h>

int main() {
    int a[11], i, x;
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    for(i = 10; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = x;

    for(i = 0; i < 11; i++)
        printf("%d ", a[i]);

    return 0;
}