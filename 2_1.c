#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("\nLargest = %d", a);
        printf("\nSmallest = %d", b);
    } else {
        printf("\nLargest = %d", b);
        printf("\nSmallest = %d", a);
    }

    return 0;
}
