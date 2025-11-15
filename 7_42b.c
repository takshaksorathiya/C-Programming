#include <stdio.h>

void row(int c, int v) {
    if (c == 0)
        return;
    printf("%d ", v);
    row(c - 1, v);
}

void pat(int n) {
    if (n == 0)
        return;
    row(n, n);
    printf("\n");
    pat(n - 1);
}

int main() {
    pat(5);
    return 0;
}
