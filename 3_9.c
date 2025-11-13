#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n * 2; i += 2){
        sum = sum + i;

    printf("\nSum =%d", sum);
    }
    return 0;
}