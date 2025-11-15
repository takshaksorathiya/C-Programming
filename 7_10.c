#include<stdio.h>

void print(int x, int n) {
    if(x > n)
        return;
    printf("%d ", x);
    print(x + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    print(1, n);

    return 0;
}
