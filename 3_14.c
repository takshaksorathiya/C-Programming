#include <stdio.h>

int main() {
    int i;
    float num, sum = 0, mean;

    for (i = 1; i <= 10; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    mean = sum / 10;

    printf("Sum = %f\n", sum);
    printf("Mean = %f", mean);

    return 0;
}