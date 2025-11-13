#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;
    int x;

    printf("Enter 4 values for first matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 4 values for second matrix:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    // Multiplying matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            x = 0;
            for(k = 0; k < 2; k++)
                x = x + (a[i][k] * b[k][j]);
            c[i][j] = x;
        }
    }

    printf("Resultant Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
