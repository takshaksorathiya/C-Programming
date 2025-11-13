#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
