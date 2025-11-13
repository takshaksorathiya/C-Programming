#include <stdio.h>
int main() {
    int i, j, x;
    for(i = 2; i <= 500; i++) {
        x = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                x = 1;
                break;
            }
        }
        if(x == 0)
            printf("%d\n", i);
    }
    return 0;
}