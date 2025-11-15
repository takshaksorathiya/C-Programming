#include<stdio.h>

int sum(int x) {
    if(x == 0)
        return 0;
    return x + sum(x - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
