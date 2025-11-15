#include<stdio.h>

void odd(int x, int n) {
    if(n == 0)
        return;
    printf("%d ", x);
    odd(x + 2, n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    odd(1, n);

    return 0;
}
