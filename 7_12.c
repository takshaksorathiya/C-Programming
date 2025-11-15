#include<stdio.h>

void even(int x, int n) {
    if(n == 0)
        return;
    printf("%d ", x);
    even(x + 2, n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    even(2, n);

    return 0;
}
