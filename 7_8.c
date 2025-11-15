#include<stdio.h>

void odd(int x) {
    if(x > 19)
        return;
    printf("%d ", x);
    odd(x + 2);
}

int main() {
    odd(1);
    return 0;
}
