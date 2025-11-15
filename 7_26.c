#include <stdio.h>

int f(int n) {
    if(n > 100) return 0;
    if(n % 3 == 0) return n + f(n + 1);
    return f(n + 1);
}

int main() {
    printf("%d", f(1));
    return 0;
}
