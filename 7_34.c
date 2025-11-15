#include <stdio.h>

int s(int n, int i) {
    if(i == n) return 0;
    if(n % i == 0) return i + s(n, i+1);
    return s(n, i+1);
}

int main() {
    int n;
    scanf("%d", &n);
    if(s(n, 1) == n)
        printf("Perfect");
    else
        printf("Not Perfect");
    return 0;
}
