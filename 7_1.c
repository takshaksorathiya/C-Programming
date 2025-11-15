#include <stdio.h>

int power(int , int);

int power(int x, int y) {
    if (y == 0){
        return 1;
    }else{
        return x * power(x, y - 1);
    }
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("%d^%d = %d", a, b, power(a, b));
    return 0;
}
