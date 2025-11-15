#include<stdio.h>

int fact(int x) {
    if(x == 0)
        return 1;
    return x * fact(x - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));

    return 0;
}
