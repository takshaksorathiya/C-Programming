#include <stdio.h>

int pow10(int d) {
    if(d == 0) return 1;
    return 10 * pow10(d - 1);
}

int digits(int n) {
    if(n == 0) return 0;
    return 1 + digits(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    int d = digits(n);
    int p = pow10(d);
    if((n*n) % p == n)
        printf("Automorphic");
    else
        printf("Not Automorphic");
    return 0;
}
