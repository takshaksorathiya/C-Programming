#include <stdio.h>

void f(int n, int i) {
    if(i > n) return;
    if(n % i == 0) printf("%d ", i);
    f(n, i+1);
}

int main() {
    int n;
    scanf("%d", &n);
    f(n, 1);
    return 0;
}
