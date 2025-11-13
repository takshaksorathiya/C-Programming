#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("\nLargest = %d", a);
    }else if (b > a && b > c){
        printf("\nLargest = %d", b);
    }else{
        printf("\nLargest = %d", c);
    }

    if (a < b && a < c){
        printf("\nSmallest = %d", a);
    }else if (b < a && b < c){
        printf("\nSmallest = %d", b);
    }else{
        printf("\nSmallest = %d", c);
    }
    return 0;
}
