#include <stdio.h>

void f(int n, int i) {
    if (i > n)
        return;
    printf("%d %d\n", i, n - i + 1);
    f(n, i + 1);
}

int main() {
    f(5, 1);
    return 0;
}
