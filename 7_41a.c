#include <stdio.h>

void row(int c) {
    if(c == 0) return;
    printf("1 ");
    row(c - 1);
}

void pat(int r, int n) {
    if(r > n) return;
    row(r);
    printf("\n");
    pat(r + 1, n);
}

int main() {
    pat(1, 3);
    return 0;
}
