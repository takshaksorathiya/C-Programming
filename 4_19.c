#include <stdio.h>

int main() {
    int a[5], i, x;
    printf("enter value");

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("enter number to search");    
    scanf("%d", &x);
    
    
    for(i = 0; i < 5; i++) {
        if(a[i] == x) {
            printf("Found at position %d", i);
            return 0;
        }
    }

    printf("Not found");
    return 0;
}