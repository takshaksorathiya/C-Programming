#include <stdio.h>

void find(int a[], int n, int *max, int *min) {
    *max = *min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }
}

int main() {
    int a[20], n, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    find(a, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
