#include <stdio.h>

int prime(int n, int i) {
    if(i*i > n) return 1;
    if(n % i == 0) return 0;
    return prime(n, i+1);
}

int f(int n) {
    if(n > 500) return 0;
    if(n > 1 && prime(n, 2)) return n + f(n+1);
    return f(n+1);
}

int main() {
    printf("%d", f(1));
    return 0;
}
