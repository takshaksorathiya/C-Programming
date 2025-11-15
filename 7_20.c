#include<stdio.h>

int a[10];

int sum(int i) {
    if(i == 10)
        return 0;
    return a[i] + sum(i + 1);
}

int main() {
    int i, s;
    float mean;

    for(i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    s = sum(0);
    mean = s / 10.0;

    printf("Sum = %d\n", s);
    printf("Mean = %.2f\n", mean);

    return 0;
}
