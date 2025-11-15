#include <stdio.h>

void swap(int a, int b) {
    int x;

    x = a;
    a = b;
    b = x;

    printf("\nInside function (after swapping):\n");
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore calling function:\n");
    printf("x = %d, y = %d\n", x, y);

   
    swap(x, y);

    printf("\nAfter calling function:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
