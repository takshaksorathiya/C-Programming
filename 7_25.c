#include <stdio.h>

void f(int n) {
    if(n > 100) return;
    if(n % 5 == 0) printf("%d ", n);
    f(n + 1);
}

int main() {
    f(1);
    return 0;
}
