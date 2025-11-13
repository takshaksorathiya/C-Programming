#include <stdio.h>

int main() {
    int i, num, positive = 0, negative = 0, zero = 0;

    for (i = 1; i <= 200; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeroes = %d", zero);

    return 0;
}
