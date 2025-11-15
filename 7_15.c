#include<stdio.h>

int evenSum(int x) {
    if(x == 0)
        return 0;
    return (2*x) + evenSum(x - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", evenSum(n));

    return 0;
}
