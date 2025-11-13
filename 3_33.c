#include <stdio.h>
int main() {
    int n, square, m, x = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    square = n * n;
    m = n;

    while(m > 0) {
        if(m % 10 != square % 10) {
            x = 0;
            break;
        }
        m = m / 10;
        square = square / 10;
    }

    if(x == 1)
        printf("%d is an Automorphic number.", n);
    else
        printf("%d is not an Automorphic number.", n);

    return 0;
}