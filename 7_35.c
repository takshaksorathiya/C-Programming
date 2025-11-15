#include <stdio.h>

int prime(int n, int i) {
    if(i*i > n) return 1;
    if(n % i == 0) return 0;
    return prime(n, i+1);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 1) printf("Not Prime");
    else if(prime(n, 2)) printf("Prime");
    else printf("Not Prime");
    return 0;
}
