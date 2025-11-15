#include<stdio.h>

int sum13(int x) {
    if(x > 100)
        return 0;
    if(x % 13 == 0)
        return x + sum13(x + 1);
    else
        return sum13(x + 1);
}

int main() {
    int s = sum13(1);
    printf("Sum = %d\n", s);
    return 0;
}
