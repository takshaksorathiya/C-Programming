#include <stdio.h>

void row(int c) {
    if(c == 0) return;
    printf("1 ");
    row(c - 1);
}

void pat(int r) {
    if(r == 0) return;
    row(r);
    printf("\n");
    pat(r - 1);
}

int main() {
    pat(3);
    return 0;
}
