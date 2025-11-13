#include <stdio.h>
int main() {
    int i, j, x, sum = 0;
    for(i = 2; i <= 500; i++) {
        x = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                x = 1;
                break;
            }
        }
        if(x == 0)
            sum = sum + i;
    }
    printf("Sum of prime numbers between 1 and 500 = %d", sum);
    return 0;
}