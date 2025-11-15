#include <stdio.h>

int f(int n) {
    if(n == 0) return 0;
    return 1 + f(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0) printf("1");
    else printf("%d", f(n));
    return 0;
}
