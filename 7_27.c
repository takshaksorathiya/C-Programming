#include <stdio.h>

void f(int n) {
    if(n == 0) return;
    printf("%d", n % 10);
    f(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}
