#include <stdio.h>
int main() {
    int a[5], i;
    printf("enter 5 values:");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 5; i++)
        printf(" the values  :%d\n", a[i]);
    return 0;
}
