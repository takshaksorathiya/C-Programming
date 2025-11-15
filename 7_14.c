#include<stdio.h>

int oddSum(int x) {
    if(x == 0)
        return 0;
    return (2*x - 1) + oddSum(x - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", oddSum(n));

    return 0;
}
