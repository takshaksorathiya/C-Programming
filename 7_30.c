#include <stdio.h>

int f(int n, int r) {
    if(n == 0) return r;
    return f(n/10, r*10 + n%10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", f(n, 0));
    return 0;
}
