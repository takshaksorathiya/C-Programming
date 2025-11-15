#include<stdio.h>

int a[100];

int sum(int i, int n) {
    if(i == n)
        return 0;
    return a[i] + sum(i + 1, n);
}

int main() {
    int n, i, s;
    float mean;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    s = sum(0, n);
    mean = s / (float)n;

    printf("Sum = %d\n", s);
    printf("Mean = %.2f\n", mean);

    return 0;
}
