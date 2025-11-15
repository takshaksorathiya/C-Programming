#include <stdio.h>

int pow3(int n) {
    return n*n*n;
}

int arm(int n) {
    if(n == 0) return 0;
    return pow3(n%10) + arm(n/10);
}

int main() {
    int n;
    scanf("%d", &n);
    if(arm(n) == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
