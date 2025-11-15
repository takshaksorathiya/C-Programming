#include<stdio.h>

void print(int x) {
    if(x > 10)
        return;
    printf("%d ", x);
    print(x + 1);
}

int main() {
    print(1);
    return 0;
}
