#include<stdio.h>

int a[100];

int largest(int i, int n) {
    if(i == n - 1)
        return a[i];

    int x = largest(i + 1, n);

    if(a[i] > x)
        return a[i];
    else
        return x;
}

int smallest(int i, int n) {
    if(i == n - 1)
        return a[i];

    int x = smallest(i + 1, n);

    if(a[i] < x)
        return a[i];
    else
        return x;
}

int main() {
    int i;

    for(i = 0; i < 100; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Largest = %d\n", largest(0, 100));
    printf("Smallest = %d\n", smallest(0, 100));

    return 0;
}
