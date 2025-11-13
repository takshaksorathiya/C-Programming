#include <stdio.h>

int main() {
    int n, original, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
